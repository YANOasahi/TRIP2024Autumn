#include "../bigrips_zds.h"

void rawdata_reset(){
  for(int n=0;n<32;n++)for(int m=0;m<N_Mhit;m++)v1190raw[n][m] = -9999;
  for(int n=0;n<32;n++)v1190num[n] = 0;

  for(int n=0;n<12;n++)for(int m=0;m<4;m++)for(int l=0;l<4;l++)PPAC_Qraw[n][m][l] = -9999;
  for(int n=0;n<12;n++)for(int m=0;m<4;m++)for(int l=0;l<4;l++)PPAC_Traw[n][m][l] = -9999;
  for(int n=0;n<12;n++)for(int m=0;m<4;m++)PPAC_AQraw[n][m] = -9999;
  for(int n=0;n<12;n++)for(int m=0;m<4;m++)PPAC_ATraw[n][m] = -9999;

  for(int n=0;n<12;n++)for(int m=0;m<2;m++)PLA_Qraw[n][m]= -9999;
  for(int n=0;n<12;n++)for(int m=0;m<2;m++)PLA_Traw[n][m]=-9999;
  for(int n=0;n<12;n++)for(int m=0;m<2;m++)PLA2_Qraw[n][m]= -9999;
  for(int n=0;n<12;n++)for(int m=0;m<2;m++)PLA2_Traw[n][m]=-9999;

  for(int m=0;m<2;m++)F8VETO_Qraw[m]= -9999;
  for(int m=0;m<2;m++)F8VETO_Traw[m]=-9999;

  for(int m=0;m<2;m++)F11Long_Qraw[m]= -9999;
  for(int m=0;m<2;m++)F11Long_Traw[m]=-9999;

  for(int l=0;l<12;l++)for(int m=0;m<2;m++)for(int n=0;n<N_Mhit;n++)PLA_MT[l][m][n] = -1e7;
  for(int l=0;l<12;l++)for(int m=0;m<2;m++)PLA_Mhit[l][m] = 0;
  for(int m=0;m<2;m++)for(int n=0;n<N_Mhit;n++)F8VETO_MT[m][n] = -1e7;
  for(int m=0;m<2;m++)F8VETO_Mhit[m] = 0;
  for(int m=0;m<4;m++)for(int n=0;n<N_Mhit;n++)F8PPACA_MT[m][n] = -1e7;
  for(int m=0;m<4;m++)F8PPACA_Mhit[m] = 0;


  for(int m=0;m<6;m++)F7IC_Eraw[m] = -9999;
  for(int m=0;m<3;m++)F8IC_Eraw[m] = -9999;
  for(int m=0;m<6;m++)F11IC_Eraw[m] = -9999;
  F7IC_Gas = -9999;
  F8IC_Gas = -9999;
  F11IC_Gas = -9999;

  for(int n=0;n<9;n++)for(int m=0;m<16;m++)Scaler[n][m] = -9999;
  for(int n=0;n<9;n++)for(int m=0;m<16;m++)CoinReg[n][m] = false;

}

void rawdata_fill(int nj,int neve,int EFN,int dev,int fpl,int det,int mod,int geo,int edge,int ch,unsigned int buf){

  // Mask for Phillips modules
  if(mod==P7166)buf = buf&0x0fff;

  //===== CAMAC PPAC-Q ====================================================================
  if(det==PPACQ){
    
    if(fpl==3||fpl==5||fpl==7||fpl==8||fpl==9||fpl==10||fpl==11){
      
      if(ch<4){ PPAC_AQraw[fpl][ch] = buf; }else{ PPAC_Qraw[fpl][ch/4-1][ch%4] = buf; }
      
      if(nj==0 && neve==0)cout << Form("Double PPAC Q @F%02d",fpl) << endl;
      return;
    }

    if(nj==0&&neve==0)cout << Form("F%02dPPAC Q, not filled !!!!!",fpl) << endl;
    return;
  }
  //===== CAMAC PPAC-T ====================================================================
  if(det==PPACT){

    if(fpl==3||fpl==5||fpl==7||fpl==8||fpl==9||fpl==10||fpl==11){
      
      if(ch<4){ PPAC_ATraw[fpl][ch] = buf; }else{ PPAC_Traw[fpl][ch/4-1][ch%4] = buf; }
      
      if(nj==0 && neve==0)cout << Form("PPAC T @F%02d",fpl) << endl;
      return;
    }

    if(nj==0&&neve==0)cout << Form("F%02dPPAC T, not filled !!!!!",fpl) << endl;
    return;    
  }
  //===== CAMAC PLA-Q ======================================================================
  if(det==PLAQ && 1<=fpl && fpl<=11){
    PLA_Qraw[fpl][ch] = buf;

    if(nj==0 && neve==0)cout << Form("PLA Q @F%02d",fpl) << endl;
    return;
  }
  //===== CAMAC PLA-T ======================================================================
  if(det==PLAT && 1<=fpl && fpl<=11){

    if(3<=fpl && fpl<=7){
      switch(ch){
      case 0:PLA_Traw[fpl][0] = buf;break;
      case 4:PLA_Traw[fpl][1] = buf;break;
      default:break;
      }
    }

    if(8<=fpl && fpl<=11){
      switch(ch){
      case 0:PLA_Traw[fpl][0] = buf;break;
      case 2:PLA_Traw[fpl][1] = buf;break;
      default:break;
      }
    }

    if(nj==0 && neve==0)cout << Form("PLA T @F%02d",fpl) << endl;
    return;
  }
  //===== CAMAC PLA2-Q ======================================================================
  if(det==PLA2Q && 1<=fpl && fpl<=11){
    PLA2_Qraw[fpl][ch] = buf;

    if(fpl==11)F8VETO_Qraw[ch] = buf;
    
    if(nj==0 && neve==0 && fpl<11)cout << Form("PLA2 Q @F%02d",fpl) << endl;
    if(nj==0 && neve==0 && fpl==11)cout << "F8VETO Q" << endl;
    return;
  }
  //===== CAMAC PLA2-T ======================================================================
  if(det==PLA2T && 1<=fpl && fpl<=11){

    if(ch<2)PLA2_Traw[fpl][ch] = buf;

    if(fpl==11 && ch==0)F8VETO_Traw[0] = buf;
    if(fpl==11 && ch==2)F8VETO_Traw[1] = buf;

    if(nj==0 && neve==0 && fpl<11)cout << Form("PLA2 T @F%02d",fpl) << endl;
    if(nj==0 && neve==0 && fpl==11)cout << "F8VETO T" << endl;

    //    if(neve==0 && fpl==11)cout << Form("ch%02d : %d",ch,buf) << endl;
    return;
  }
  //===== IC-E ================================================================================
  if(det==ICE && 1<=fpl && fpl<=11){

    switch(fpl){
    case  7: if(ch<6)F7IC_Eraw[ch] = buf;break;
    case  8: 
      if(ch<3)F8IC_Eraw[ch] = buf;
      if(ch==3)F8IC_Gas = buf;
      break;
    case 11: if(ch<6)F11IC_Eraw[ch] = buf;break;
    default: break;
    }

    if(nj==0 && neve==0)cout << Form("IC E @F%02d",fpl) << endl;
    //    if(neve==0)cout << Form("fpl=%02d, ch%02d : %d",fpl,ch,buf) << endl;
    return;
  }
  //===== IC-Gas ==============================================================================
  if(det==ICGAS && 1<=fpl && fpl<=11){

    if(ch==0){
      switch(fpl){
      case 7: F7IC_Gas = buf;break;
      case 8: F8IC_Gas = buf;break;
      case 11: F11IC_Gas = buf;break;
      default:break;
      }
    }

    if(nj==0 && neve==0)cout << Form("IC Gas @F%02d",fpl) << endl;
    return;
  }
  //===== CAMAC Scaler ========================================================================
  if((det==SCALER||det==B2SCALER) && 1<=fpl && fpl<=11){
    int Nccnet=0;
    switch(fpl){
    case 1:  Nccnet=1;break;
    case 5:  Nccnet=2;break;
    case 7:  
      if(det==SCALER){Nccnet=3;}else if(det==B2SCALER){Nccnet=7;};
      break;
    case 8:  Nccnet=4;break;
    case 9:  Nccnet=5;break;
    case 10: Nccnet=6;break;
    case 11: Nccnet=8;break;
    default: 
      cout<<"Scaler, but not filled!!!!!" << endl;
      return;
      break;
    }

    Scaler[Nccnet][ch] = buf;

    if(nj==0 && neve==0)cout << Form("Scaler @CC/NET%02d",Nccnet) << endl;
    return;
  }
  //===== Coincidence Register ================================================================
  if(det==COIN){
    int Nccnet;
    switch(fpl){
    case 3: Nccnet=1;break;
    case 5: Nccnet=2;break;
    case 8: Nccnet=4;break;
    default: 
      cout<<"Coincidence Register, but not filled!!!!!" << endl;
      return;
      break;
    }
    
    for(int i=0;i<16;i++)if(buf & (1<<i))CoinReg[Nccnet][i]=true;

    if(nj==0 && neve==0)cout << Form("Coincidence Register @CC/NET%02d",Nccnet) << endl;
    return;
  }
  //===== F9PL-Q @RIBF152 =====================================================================
  if(det==PLAQ && fpl==12){
    PLA_Qraw[9][ch] = buf;

    if(nj==0 && neve==0)cout << Form("PLA Q @F%02d only for RIBF152",9) << endl;
    return;
  }
  //===== F9PL-T @RIBF152 =====================================================================
  if(det==PLAT && fpl==12){
    PLA_Traw[9][ch] = buf;

    if(nj==0 && neve==0)cout << Form("PLA T @F%02d only for RIBF152",9) << endl;
    return;
  }
  //===== V1190 ===============================================================================
  if(fpl==B3F && mod==24 && ch<32){
    
    if(v1190num[ch]<N_Mhit)v1190raw[ch][v1190num[ch]] = buf;
    v1190num[ch]++;
    
    if(nj==0 && neve==0)cout << Form("V1190 @MPV%02d",EFN) << endl;
    return;
  }
  //===== V1290 ===============================================================================
  //  if(fpl==B3F && mod==25){
  if(fpl==21 && mod==25){
    
    //    if(v1290num[ch]<10)v1290raw[ch][v1290num[ch]] = buf;
    //    v1290num[ch]++;
    if(v1190num[ch]<N_Mhit)v1190raw[ch][v1190num[ch]] = buf;
    v1190num[ch]++;
    
    if(nj==0 && neve==0)cout << Form("V1290 @MPV%02d",EFN) << endl;
    return;
  }
  //===== Time stamp in MPV =====================================================================
  //
  // ch0: lower 32 bit of time stamp
  // ch1: higher 16 bit of time stamp
  // ch2: 10k clock
  // ch3: Event number
  //

  //  if((dev==0 && fpl==20 && det==60)||(dev==0 && fpl==20 && det==60)){
  if((dev==RADIIGR && fpl==B3F && det==TS && mod==8)||(dev==0 && det==60 && mod==8)){
  //  if(det==60 && mod==8 && ){

    switch(ch){
    case 0: 
      mpv_ts0[0][0] = buf;
      break;
    case 1: 
      mpv_ts0[0][1] = buf;
      mpv_ts[0] = mpv_ts0[0][0] + (mpv_ts0[0][1] << 32);
      //   mpv_ts[0] = mpv_ts[0] * 1e-8;
      break;
    case 2: 
      mpv_10kclock[0] = buf;
      break;
    case 3: 
      //      Nevent = buf;
      mpv_Nevent[0] = buf;
      break;
    }
    
    if(nj==0 && neve==0)cout << Form("MPV TS @MPV%02d",EFN) << endl;
    return;
  }
  //===== Time Stamp @CC/NET01 ================================================================
  // ch0: higher 16 bit
  // ch1: lower 32 bit
  if(dev==0 && fpl==B3F && det==TS){

    camac_ts0[0][ch] = buf;
    if(ch==1)camac_ts[0] = (camac_ts0[0][0] << 32) + camac_ts0[0][1];

    //    if(ch == 1 && 1 < neve && neve < 100000000)cout << camac_ts0[0] << " " << camac_ts0[1] << " " << camac_ts << endl;
    if(nj==0&&neve==0)cout << "Time stamp @CC/NET01" << endl;
    return;
  }
  //===== Time Stamp @CC/NET08 ================================================================
  if(dev==1 && fpl==11 && det==TS){
    
    camac_ts0[0][ch] = buf;
    if(ch==1)camac_ts[0] = (camac_ts0[0][0] << 32) + camac_ts0[0][1];
    
    if(nj==0&&neve==0)cout << "Time stamp @CC/NET08" << endl;
    return;
  }
  //===== Time Stamp @CC/NET08 ================================================================
  if(dev==1 && fpl==11 && det==RF2 && mod==0){
    
    ccnet08_data[ch]=buf;
    
    if(nj==0&&neve==0)cout << "Time stamp?? @CC/NET08" << endl;
    return;
  }
  //============================================================================================



  // Following variables are not used in the radius expreiment at BigRIPS+ZDS.

  //===== RF ==================================================================================
  if(det==RF){
    if(nj==0&&neve==0)cout << "RF, but not filled !!!!!" << endl;
    return;
  }
  //===== SSDE ==================================================================================
  if(det==SSDE){
    if(nj==0&&neve==0)cout << Form("SSD E @F%02d, but not filled !!!!!",fpl) << endl;
    return;
  }
  //===== NaI E =================================================================================
  if(det==NAIE){
    if(nj==0&&neve==0)cout << Form("NaI E @F%02d, but not filled !!!!!",fpl) << endl;
    return;
  }
  //===== VETO E ================================================================================
  if(dev==1 && fpl==11 && det==VETOA){
    if(nj==0&&neve==0)cout << "VETO A, but not filled !!!!!" << endl;
    return;
  }
  //===== Not filled =============================================================================
  if(nj==0&&neve==0)cout << "!!!!!  Not Filled !!!!!" << endl;
  
}


void v1290_cal(){

  long long v1190ref = v1190raw[15][0];

  for(int n=0;n<N_Mhit;n++){
    PLA_MT[3][0][n]  = (v1190raw[0][n] - v1190ref) * 0.09765;
    PLA_MT[3][1][n]  = (v1190raw[1][n] - v1190ref) * 0.09765;
    PLA_MT[5][0][n]  = (v1190raw[2][n] - v1190ref) * 0.09765;
    PLA_MT[5][1][n]  = (v1190raw[3][n] - v1190ref) * 0.09765;
    PLA_MT[7][0][n]  = (v1190raw[4][n] - v1190ref) * 0.09765;
    PLA_MT[7][1][n]  = (v1190raw[5][n] - v1190ref) * 0.09765;
    PLA_MT[8][0][n]  = (v1190raw[6][n] - v1190ref) * 0.09765;
    PLA_MT[8][1][n]  = (v1190raw[7][n] - v1190ref) * 0.09765;
    F8VETO_MT[0][n]  = (v1190raw[8][n] - v1190ref) * 0.09765;
    F8VETO_MT[1][n]  = (v1190raw[9][n] - v1190ref) * 0.09765;
    F8PPACA_MT[0][n] = (v1190raw[10][n] - v1190ref) * 0.09765;
    F8PPACA_MT[1][n] = (v1190raw[11][n] - v1190ref) * 0.09765;
    F8PPACA_MT[2][n] = (v1190raw[12][n] - v1190ref) * 0.09765;
    F8PPACA_MT[3][n] = (v1190raw[13][n] - v1190ref) * 0.09765;
  }
  
  PLA_Mhit[3][0]  = v1190num[0];
  PLA_Mhit[3][1]  = v1190num[1];
  PLA_Mhit[5][0]  = v1190num[2];
  PLA_Mhit[5][1]  = v1190num[3];
  PLA_Mhit[7][0]  = v1190num[4];
  PLA_Mhit[7][1]  = v1190num[5];
  PLA_Mhit[8][0]  = v1190num[6];
  PLA_Mhit[8][1]  = v1190num[7];
  F8VETO_Mhit[0]  = v1190num[8];
  F8VETO_Mhit[1]  = v1190num[9];
  F8PPACA_Mhit[0] = v1190num[10];
  F8PPACA_Mhit[1] = v1190num[11];
  F8PPACA_Mhit[2] = v1190num[12];
  F8PPACA_Mhit[3] = v1190num[13];
  
}
