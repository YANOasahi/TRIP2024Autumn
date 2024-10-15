//===== PPAC ===========================
bool Use_PPAC[12]={    
  false,false,false,true,false,true,false,true,true,true,true,true,
};
bool Use_PL[12]={    
  false,false,false,true,false,true,false,true,true,true,false,true,
};
//===== Tsum ============
//[2]:X,Y [12]:Fpl, [4]:1A,1B,2A,2B,
double Tsum_Offset[2][12][4]={
  // X
    0.0,   0.0,   0.0,   0.0, // Dummy
    0.0,   0.0,   0.0,   0.0, // F1
    0.0,   0.0,   0.0,   0.0, // F2
   97.9,  93.0, 175.0, 179.1, // F3
    0.0,   0.0,   0.0,   0.0, // F4
  176.3, 174.8, 173.6, 179.9, // F5
    0.0,   0.0,   0.0,   0.0, // F6
  171.4, 176.1,  88.1,  97.3, // F7
    //  179.8, 177.2, 170.7, 172.0, // F8 #0004
  179.8, 177.2, 167.2, 172.6, // F8
  138.0, 140.5, 146.2, 139.3, // F9
  144.1, 148.6, 150.4, 147.9, // F10
  154.8, 146.8, 155.3, 146.0, // F11

  // Y 
    0.0,   0.0,   0.0,   0.0, // Dummy
    0.0,   0.0,   0.0,   0.0, // F1
    0.0,   0.0,   0.0,   0.0, // F2
   93.5,  93.7,  97.6, 101.6, // F3
    0.0,   0.0,   0.0,   0.0, // F4
   97.5,  97.6, 101.1, 105.0, // F5
    0.0,   0.0,   0.0,   0.0, // F6
  105.7,  97.0,  96.9, 101.7, // F7
    //  100.5, 102.1,  93.0,  94.0, // F8
  100.5, 102.1,  89.4,  94.0, // F8
   65.4,  67.5,  75.4  ,57.3, // F9
   73.3,  72.1,  76.4,  68.5, // F10
   76.1,  61.6,  83.6,  71.3, // F11
};
//[2]:X,Y [12]:Fpl, [4]:1A,1B,2A,2B,
double Tsum_Min[2][12][4]={
  // X
    0.0,   0.0,   0.0,   0.0, /* F00 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F01 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F02 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F03 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F04 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F05 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F06 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F07 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F08 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F09 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F10 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F11 1A/1B/2A/2B */

  // Y
    0.0,   0.0,   0.0,   0.0, /* F00 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F01 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F02 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F03 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F04 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F05 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F06 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F07 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F08 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F09 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F10 1A/1B/2A/2B */
   -5.0,  -5.0,  -5.0,  -5.0, /* F11 1A/1B/2A/2B */
};
//[2]:X,Y [12]:Fpl, [4]:1A,1B,2A,2B,
double Tsum_Max[2][12][4]={
  // X
    0.0,   0.0,   0.0,   0.0, /* F0 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F1 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F2 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F3 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F4 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F5 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F6 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F7 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F8 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F9 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F10 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F11 1A/1B/2A/2B */

  // Y
    0.0,   0.0,   0.0,   0.0, /* F0 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F1 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F2 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F3 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F4 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F5 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F6 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F7 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F8 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F9 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F10 1A/1B/2A/2B */
    5.0,   5.0,   5.0,   5.0, /* F11 1A/1B/2A/2B */
};
//===== Cathodes ========
//[12]:Fpl, [4]:1A,1B,2A,2B, [4]:X1,Y1,X2,Y2
double  ch2ns_PPAC[12][4][4]={
  // F0
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F1
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F2
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F3
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F4
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F5
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F6
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F7
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F8
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F9
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F10
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
  // F11
  0.097650, 0.097650, 0.097650, 0.097650, // 1A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 1B-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2A-X1/Y1/X2/Y2
  0.097650, 0.097650, 0.097650, 0.097650, // 2B-X1/Y1/X2/Y2
};
//[12]:Fpl, [4]:1A,1B,2A,2B, [2]:X,Y
double  Inoffset[12][4][2]={
  // F0
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F1	               
  1.24, 0.28, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.86, 0.77, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F2	               
  0.75, 0.63, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.84, 0.46, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F3	               
  0.460, -1.060, // 1A X/Y
  1.070, -0.510, // 1B X/Y
  1.301, -0.574, // 2A X/Y
  0.625, -0.737, // 2B X/Y
  // F4	               
  0.86, 0.01, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F5	               
  0.95, -0.35, // 1A X/Y
  1.18, -0.41, // 1B X/Y
  1.37, -0.58, // 2A X/Y
  1.52, -0.33, // 2B X/Y
  // F6	               
  0.95, 0.17, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F7	               
  1.45, -0.74, // 1A X/Y
  0.74, -0.76, // 1B X/Y
  0.39, -0.45, // 2A X/Y
  0.51, -0.42, // 2B X/Y
  // F8	               
  1.37, -0.21, // 1A X/Y
  1.20, -0.27, // 1B X/Y
  1.24, -0.62, // 2A X/Y
  1.15, -0.22, // 2B X/Y
  // F9	               
  0.91, -0.69, // 1A X/Y
  0.88, -0.42, // 1B X/Y
  1.61, -0.66, // 2A X/Y
  0.63, -0.61, // 2B X/Y
  // F10               
  1.53, -0.26, // 1A X/Y
  1.15, -0.55, // 1B X/Y
  1.13, -0.09, // 2A X/Y
  0.60, -0.59, // 2B X/Y
  // F11               
  1.12, -0.56, // 1A X/Y
  0.63, -0.12, // 1B X/Y
  0.88, -0.53, // 2A X/Y
  1.13, -0.53, // 2B X/Y
};
//[12]:Fpl, [4]:1A,1B,2A,2B, [2]:X,Y
double  ns2mm[12][4][2]={
  // F0
  1.000, 1.000, // 1A X/Y
  1.000, 1.000,	// 1B X/Y
  1.000, 1.000,	// 2A X/Y
  1.000, 1.000,	// 2B X/Y
  // F1		         
  1.232, 1.233,	// 1A X/Y
  1.000, 1.000,	// 1B X/Y
  1.231, 1.238,	// 2A X/Y
  1.000, 1.000,	// 2B X/Y
  // F2		         
  1.229, 1.233,	// 1A X/Y
  1.000, 1.000,	// 1B X/Y
  1.225, 1.232,	// 2A X/Y
  1.000, 1.000,	// 2B X/Y
  // F3		         
  1.242,-1.231,	// 1A X/Y
  1.259,-1.246,	// 1B X/Y
  1.214,-1.213,	// 2A X/Y
  1.219,-1.214,	// 2B X/Y
  // F4		         
  1.000, 1.000,	// 1A X/Y
  1.000, 1.000,	// 1B X/Y
  1.000, 1.000,	// 2A X/Y
  1.000, 1.000,	// 2B X/Y
  // F5		         
  1.228,-1.230,	// 1A X/Y
  1.231,-1.243,	// 1B X/Y
  1.214,-1.221,	// 2A X/Y
  1.220,-1.230,	// 2B X/Y
  // F6		         
  1.000, 1.000,	// 1A X/Y
  1.000, 1.000,	// 1B X/Y
  1.000, 1.000,	// 2A X/Y
  1.000, 1.000,	// 2B X/Y
  // F7		         
  1.211,-1.228,	// 1A X/Y
  1.220,-1.239,	// 1B X/Y
  1.238,-1.224,	// 2A X/Y
  1.236,-1.227,	// 2B X/Y
  // F8		         
  1.241,-1.237,	// 1A X/Y
  1.236,-1.232,	// 1B X/Y
  1.230,-1.233,	// 2A X/Y
  1.235,-1.218,	// 2B X/Y
  // F9		         
  1.234,-1.230,	// 1A X/Y
  1.230,-1.231,	// 1B X/Y
  1.231,-1.238,	// 2A X/Y
  1.219,-1.231,	// 2B X/Y
  // F10	         
  1.195,-1.214,	// 1A X/Y
  1.219,-1.211,	// 1B X/Y
  1.234,-1.236,	// 2A X/Y
  1.225,-1.236,	// 2B X/Y
  // F11	         
  1.231,-1.230,	// 1A X/Y
  1.226,-1.231,	// 1B X/Y
  1.226,-1.228,	// 2A X/Y
  1.229,-1.231,	// 2B X/Y
};
//[12]:Fpl, [4]:1A,1B,2A,2B, [2]:X,Y
// Determined from line calib (test0012-0018)
// same as ribf_para_dec04_RevisedOutOffset.h
double  Outoffset[12][4][2]={
  // F0
  0.0000, 0.0000, // 1A X/Y
  0.0000, 0.0000, // 1B X/Y
  0.0000, 0.0000, // 2A X/Y
  0.0000, 0.0000, // 2B X/Y
  // F1 	           
  0.0000, 0.0000, // 1A X/Y
  0.0000, 0.0000, // 1B X/Y
  0.0000, 0.0000, // 2A X/Y
  0.0000, 0.0000, // 2B X/Y
  // F2		           
  0.0000, 0.0000, // 1A X/Y
  0.0000, 0.0000, // 1B X/Y
  0.0000, 0.0000, // 2A X/Y
  0.0000, 0.0000, // 2B X/Y
  // F3		           
 -0.9834, 2.2342, // 1A X/Y
  1.5277, 1.4126, // 1B X/Y
 -1.8379, 6.0920, // 2A X/Y
  1.0085, 2.9315, // 2B X/Y
  // F4		           
  0.0000, 0.0000, // 1A X/Y
  0.0000, 0.0000, // 1B X/Y
  0.0000, 0.0000, // 2A X/Y
  0.0000, 0.0000, // 2B X/Y
  // F5		           
  0.7465, 2.7619, // 1A X/Y
  3.8237,-1.6465, // 1B X/Y
  2.6515, 5.1697, // 2A X/Y
 -3.9294,-2.3199, // 2B X/Y
  // F6		           
  0.0000, 0.0000, // 1A X/Y
  0.0000, 0.0000, // 1B X/Y
  0.0000, 0.0000, // 2A X/Y
  0.0000, 0.0000, // 2B X/Y
  // F7		           
  1.0404,-0.0200, // 1A X/Y
  0.0655, 1.5128, // 1B X/Y
  1.9419,-2.4623, // 2A X/Y
 -2.5563,-0.2069, // 2B X/Y
  // F8		           
  1.5763, 3.1886, // 1A X/Y
 -0.3328, 2.0494, // 1B X/Y
  1.7394, 2.1211, // 2A X/Y
  2.1960, 0.6507, // 2B X/Y
  // F9		           
  1.2148, 3.3840, // 1A X/Y
 -0.4248, 0.5732, // 1B X/Y
 -3.2269, 1.7656, // 2A X/Y
  5.5598,-0.0109, // 2B X/Y
  // F10	           
  0.0000, 0.0000, // 1A X/Y
  0.0000, 0.0000, // 1B X/Y
  0.0000, 0.0000, // 2A X/Y
  0.0000, 0.0000, // 2B X/Y
  // F11	           
  2.7135, 2.5916, // 1A X/Y
  0.5140, 5.0249, // 1B X/Y
 -1.9015, 5.8627, // 2A X/Y
  5.3602, 1.8805, // 2B X/Y
};
//[12]:Fpl, [4]:1A,1B,2A,2B, [2]:X,Y
double  Geomoffset[12][4][2]={
  // F0
  0.00, 0.00,  // 1A X/Y
  0.00, 0.00,  // 1B X/Y
  0.00, 0.00,  // 2A X/Y
  0.00, 0.00,  // 2B X/Y
  // F1	                
  0.00, 0.00,  // 1A X/Y
  0.00, 0.00,  // 1B X/Y
  0.00, 0.00,  // 2A X/Y
  0.00, 0.00,  // 2B X/Y
  // F2	                
  0.00, 0.00,  // 1A X/Y
  0.00, 0.00,  // 1B X/Y
  0.00, 0.00,  // 2A X/Y
  0.00, 0.00,  // 2B X/Y
  // F3	                
  1.05, 0.00,  // 1A X/Y
  0.57, 0.00,  // 1B X/Y
  1.98, 0.00,  // 2A X/Y
 -1.76, 0.00,  // 2B X/Y
  // F4	                
  0.00, 0.00,  // 1A X/Y
  0.00, 0.00,  // 1B X/Y
  0.00, 0.00,  // 2A X/Y
  0.00, 0.00,  // 2B X/Y
  // F5	                
  0.00, 0.00,  // 1A X/Y
  0.00, 0.00,  // 1B X/Y
 -0.15, 0.00,  // 2A X/Y
 -0.15, 0.00,  // 2B X/Y
  // F6	                
  0.00, 0.00,  // 1A X/Y
  0.00, 0.00,  // 1B X/Y
  0.00, 0.00,  // 2A X/Y
  0.00, 0.00,  // 2B X/Y
  // F7	                
 -0.30, 0.00,  // 1A X/Y
 -0.30, 0.00,  // 1B X/Y
 -0.43, 0.00,  // 2A X/Y
 -0.43, 0.00,  // 2B X/Y
  // F8	                
  0.00, 0.00,  // 1A X/Y
  0.00, 0.00,  // 1B X/Y
  0.70, 0.00,  // 2A X/Y
  0.70,-0.70,  // 2B X/Y
  // F9	                
  0.00,-0.90,  // 1A X/Y
  0.00,-0.90,  // 1B X/Y
  0.00,-1.20,  // 2A X/Y
  0.00,-1.20,  // 2B X/Y
  // F10                
  0.00,-0.10,  // 1A X/Y
  0.00,-0.10,  // 1B X/Y
  0.00,-0.90,  // 2A X/Y
  0.00,-0.90,  // 2B X/Y
  // F11                
 -0.50, 0.00,  // 1A X/Y
 -0.50, 0.00,  // 1B X/Y
 -0.10, 0.00,  // 2A X/Y
 -0.10, 0.00,  // 2B X/Y
};
//[12]:Fpl, [4]:1A,1B,2A,2B, [2]:X,Y
double  Resioffset[12][4][2]={
  // F0
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F1
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F2
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F3
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F4
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F5
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F6
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F7
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F8
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F9
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F10
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
  // F11
  0.00, 0.00, // 1A X/Y
  0.00, 0.00, // 1B X/Y
  0.00, 0.00, // 2A X/Y
  0.00, 0.00, // 2B X/Y
};

//===== Anodes ==========
//[12]:Fpl, [4]:1A,1B,2A,2B
double  ch2ns_PPACA[12][4]={
  // F0
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F1
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F2
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F3
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F4
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F5
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F6
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F7
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F8
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F9
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F10
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
  // F11
  0.0976500, 0.0976500, 0.0976500, 0.0976500, // 1A/1B/2A/2B
};
//======================================

//===== Focal plane =====================================
//===== Tracking ========================
// the distance of the focus position from the ideal focus point along the z-axis at each Fpl.
double Zoffset[12]={ 
  0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,
};
// the distance of the PPAC position from the upstream along z-axis at each Fpl.
double Zpos[2][12][4]={
  // [2]:X/Y [12]:Fpl [4] 1A/1B/2A/2B 
  // X [A]:-18.7, [B]:+18.7
    0.0,    0.0,    0.0,    0.0, /* F00 1A/1B/2A/2B */ 
    0.0,    0.0,    0.0,    0.0, /* F01 1A/1B/2A/2B */ 
    0.0,    0.0,    0.0,    0.0, /* F02 1A/1B/2A/2B */ 
  -18.7,   18.7,  871.3,  908.7, /* F03 1A/1B/2A/2B */ 
    0.0,    0.0,    0.0,    0.0, /* F04 1A/1B/2A/2B */ 
 -418.7, -381.3,  231.3,  268.7, /* F05 1A/1B/2A/2B */ 
    0.0,    0.0,    0.0,    0.0, /* F06 1A/1B/2A/2B */ 
 -868.7, -831.3,   76.3,  113.7, /* F07 1A/1B/2A/2B */ 
-1310.7,-1273.3, -810.7, -773.3, /* F08 1A/1B/2A/2B */ 
  -18.7,   18.7,  681.3,  718.7, /* F09 1A/1B/2A/2B */
  -18.7,   18.7,  681.3,  718.7, /* F10 1A/1B/2A/2B */
 -810.7, -773.3, -310.7, -273.3, /* F11 1A/1B/2A/2B */
  // Y [A]:-10.1, [B]:+10.1
    0.0,    0.0,    0.0,    0.0, /* F00 1A/1B/2A/2B */
    0.0,    0.0,    0.0,    0.0, /* F01 1A/1B/2A/2B */
    0.0,    0.0,    0.0,    0.0, /* F02 1A/1B/2A/2B */
  -10.1,   10.1,  879.9,  900.1, /* F03 1A/1B/2A/2B */
    0.0,    0.0,    0.0,    0.0, /* F04 1A/1B/2A/2B */
 -410.1, -389.9,  239.9,  260.1, /* F05 1A/1B/2A/2B */
    0.0,    0.0,    0.0,    0.0, /* F06 1A/1B/2A/2B */
 -860.1, -839.9,   84.3,  105.1, /* F07 1A/1B/2A/2B */
-1302.1,-1281.9, -802.1, -781.9, /* F08 1A/1B/2A/2B */
  -10.1,   10.1,  689.9,  710.1, /* F09 1A/1B/2A/2B */
  -10.1,   10.1,  689.9,  710.1, /* F10 1A/1B/2A/2B */
 -802.1, -781.9, -302.1, -281.9, /* F11 1A/1B/2A/2B */
};
//=======================================================


//===== Plastics =======================
//===== T ==========
// [12] : Focal plane
// [2]  : L/R
double  ch2ns_PLA[12][2]={
  // Dummy 
  0.024413, 0.024413,
  // F1PL
  0.024413, 0.024413,
  // F2PL
  0.024413, 0.024413,
  // F3PL
  0.024413, 0.024413,
  // F4PL
  0.024413, 0.024413,
  // F5PL
  0.024413, 0.024413,
  // F6PL
  0.024413, 0.024413,
  // F7PL
  0.024413, 0.024413,
  // F8PL
  0.024413, 0.024413,
  // F9PL
  0.024413, 0.024413,
  // F10PL
  0.024413, 0.024413,
  // F11PL
  0.024413, 0.024413,
};
//
// PLA_S = PLA_T - ( paraA * pow(PLA_Q,paraB) + paraC) 
//
// [2]  : 0 = paraA    1 = paraB   2 = paraC
// [12] : Focal plane
// [2]  : L/R
double  Slew_PLA[3][12][2]={
  //
  // ParaA
  //
  // Dummy 
  0.,0.,
  // F1PL
  0.,0.,
  // F2PL
  0.,0.,
  // F3PL
  0.,0.,
  // F4PL
  0.,0.,
  // F5PL
  0.,0.,
  // F6PL
  0.,0.,
  // F7PL
  0.,0.,
  // F8PL
  0.,0.,
  // F9PL
  0.,0.,
  // F10PL
  0.,0.,
  // F11PL
  0.,0.,
  //
  // ParaB
  // Dummy 
  //
  0.,0.,
  // F1PL
  0.,0.,
  // F2PL
  0.,0.,
  // F3PL
  0.,0.,
  // F4PL
  0.,0.,
  // F5PL
  0.,0.,
  // F6PL
  0.,0.,
  // F7PL
  0.,0.,
  // F8PL
  0.,0.,
  // F9PL
  0.,0.,
  // F10PL
  0.,0.,
  // F11PL
  0.,0.,
  //
  // ParaC
  // Dummy 
  //
  0.,0.,
  // F1PL
  0.,0.,
  // F2PL
  0.,0.,
  // F3PL
  0.,0.,
  // F4PL
  0.,0.,
  // F5PL
  0.,0.,
  // F6PL
  0.,0.,
  // F7PL
  0.,0.,
  // F8PL
  0.,0.,
  // F9PL
  0.,0.,
  // F10PL
  0.,0.,
  // F11PL
  0.,0.,
};

//===== Q ==========
// [2]  : 0 = slope (MeV/ch) | 1 = pedestal (ch)
// [12] : Focal plane
// [2]  : L/R
double  ch2MeV_PLA[2][12][2]={
  // slope
  // Dummy 
  1.,1.,
  // F1PL
  1.,1.,
  // F2PL
  1.,1.,
  // F3PL
  1.,1.,
  // F4PL
  1.,1.,
  // F5PL
  1.,1.,
  // F6PL
  1.,1.,
  // F7PL
  1.,1.,
  // F8PL
  1.,1.,
  // F9PL
  1.,1.,
  // F10PL
  1.,1.,
  // F11PL
  1.,1.,
  // pedestal
  // Dummy 
  0.,0.,
  // F1PL
  0.,0.,
  // F2PL
  0.,0.,
  // F3PL
  0.,0.,
  // F4PL
  0.,0.,
  // F5PL
  0.,0.,
  // F6PL
  0.,0.,
  // F7PL
  0.,0.,
  // F8PL
  0.,0.,
  // F9PL
  0.,0.,
  // F10PL
  0.,0.,
  // F11PL
  0.,0.,
};
//===== QTC ==========
// [2]  : 0 = slope (MeV/ch) | 1 = pedestal (ch)
// [12] : Focal plane
// [2]  : L/R
double  ch2MeV_PLA_QTC[2][12][2]={
  // slope
  // Dummy 
  0.024413,0.024413,
  // F1PL
  0.024413,0.024413,
  // F2PL
  0.024413,0.024413,
  // F3PL
  0.024413,0.024413,
  // F4PL
  0.024413,0.024413,
  // F5PL
  0.024413,0.024413,
  // F6PL
  0.024413,0.024413,
  // F7PL
  0.024413,0.024413,
  // F8PL
  0.024413,0.024413,
  // F9PL
  0.024413,0.024413,
  // F10PL
  0.024413,0.024413,
  // F11PL
  0.024413,0.024413,
  // pedestal
  // Dummy 
  0.,0.,
  // F1PL
  0.,0.,
  // F2PL
  0.,0.,
  // F3PL
  0.,0.,
  // F4PL
  0.,0.,
  // F5PL
  0.,0.,
  // F6PL
  0.,0.,
  // F7PL
  0.,0.,
  // F8PL
  0.,0.,
  // F9PL
  0.,0.,
  // F10PL
  0.,0.,
  // F11PL
  0.,0.,
};
//===== F8VETO ==========================
double ch2MeV_F8VETO[2][2]={
  // slope L/R
  1.,1.,
  // pedestal L/R
  0.,0.,
};
double ch2MeV_F8VETO_QTC[2][2]={
  // slope L/R
  0.024413,0.024413,
  // pedestal L/R
  0.,0.,
};
double ch2ns_F8VETO[2]={
  // L/R
  0.024413, 0.024413,
};
//===== F11Long ==========================
double ch2MeV_F11Long[2][2]={
  // slope L/R
  1.,1.,
  // pedestal L/R
  0.,0.,
};
double ch2MeV_F11Long_QTC[2][2]={
  // slope L/R
  0.024413,0.024413,
  // pedestal L/R
  0.,0.,
};
double ch2ns_F11Long[2]={
  // L/R
  0.024413, 0.024413,
};
//===== IC ==============================
// [2]  : 0 = slope (MeV/ch) | 1 = pedestal (ch)
// [3]  : 0/1/2 = F7/F8/F11 MUSIC
// [6]  : Anode number
double ch2MeV_IC[2][3][6]={
  // slope (MeV/ch)
  // F7MUSIC
  1.,1.,1.,1.,1.,1.,
  // F8MUSIC
  1.,1.,1.,0.,0.,0.,
  // F11MUSIC
  1.,1.,1.,1.,1.,1.,
  // pedestal
  // F7MUSIC
  0.,0.,0.,0.,0.,0.,
  // F8MUSIC
  0.,0.,0.,0.,0.,0.,
  // F11MUSIC
  0.,0.,0.,0.,0.,0.,
};
//===== Transfer Matrix =======================
// refer from each file in http://www/ribf.riken.jp/BigRIPSInfo/optics/optics.html 
//
// [8] : 0 = F03-F05   1 = F05-F07   2 = F08-F09
//       3 = F08-F10   4 = F09-F11   5 = F10-F11
//       6 = F03-F07   7 = F08-F11
//
//
// [0][0-5] : (X|X) (X|A) (X|Y) (X|B) (X|L) (X|D)
// [1][0-5] : (A|X) (A|A) (A|Y) (A|B) (A|L) (A|D)
// [2][0-5] : (Y|X) (Y|A) (Y|Y) (Y|B) (Y|L) (Y|D)
// [3][0-5] : (B|X) (B|A) (B|Y) (B|B) (B|L) (B|D)
// [4][0-5] : (L|X) (L|A) (L|Y) (L|B) (L|L) (L|D)

double TMat[8][5][6]={
  // F3-F5
  9.20250E-01, -8.46747E-10,  0.00000E+00,  0.00000E+00,  0.00000E+00,  3.16870E+01,
 -3.61184E-09,  1.08666E+00,  0.00000E+00,  0.00000E+00,  0.00000E+00, -7.04162E-10,
  0.00000E+00,  0.00000E+00,  1.04364E+00,  2.99192E-09,  0.00000E+00,  0.00000E+00,
  0.00000E+00,  0.00000E+00, -4.61137E-10,  9.58188E-01,  0.00000E+00,  0.00000E+00,
 -1.13791E-08,  3.44330E+00,  0.00000E+00,  0.00000E+00,  1.00000E+00,  4.01337E+00,
  // F5-F7
  1.08732E+00,  2.24711E-09,  0.00000E+00,  0.00000E+00,  0.00000E+00, -3.44541E+01,
  2.21981E-09,  9.19688E-01,  0.00000E+00,  0.00000E+00,  0.00000E+00, -7.50730E-08,
  0.00000E+00,  0.00000E+00,  9.56444E-01,  4.99902E-11,  0.00000E+00,  0.00000E+00,
  0.00000E+00,  0.00000E+00,  6.54668E-10,  1.04554E+00,  0.00000E+00,  0.00000E+00,
  5.13560E-10, -3.16870E+00,  0.00000E+00,  0.00000E+00,  1.00000E+00,  3.93341E+00,
  // F8-F9
 -1.80000E+00,  6.89737E-11,  0.00000E+00,  0.00000E+00,  0.00000E+00, -2.48000E+01,
  1.87953E-01, -5.55556E-01,  0.00000E+00,  0.00000E+00,  0.00000E+00,  1.49866E-08,
  0.00000E+00,  0.00000E+00, -2.00030E+00, -2.54159E-10,  0.00000E+00,  0.00000E+00,
  0.00000E+00,  0.00000E+00,  1.08481E-09, -4.99925E-01,  0.00000E+00,  0.00000E+00,
 -4.66124E-01,  1.37778E+00,  0.00000E+00,  0.00000E+00,  1.00000E+00, -1.42584E+00,
  // F8-F10
  1.80000E+00,  2.90328E-08,  0.00000E+00,  0.00000E+00,  0.00000E+00,  2.48000E+01,
 -1.87953E-01,  5.55556E-01,  0.00000E+00,  0.00000E+00,  0.00000E+00,  3.21030E-09,
  0.00000E+00,  0.00000E+00,  2.00030E+00, -8.50962E-09,  0.00000E+00,  0.00000E+00,
  0.00000E+00,  0.00000E+00,  2.46710E-03,  4.99925E-01,  0.00000E+00,  0.00000E+00,
 -4.66124E-01,  1.37778E+00,  0.00000E+00,  0.00000E+00,  1.00000E+00, -1.42584E+00, 
  // F9-F11
  5.55556E-01,  2.78186E-08,  0.00000E+00,  0.00000E+00,  0.00000E+00,  1.37778E+01,
 -1.87843E-01,  1.80000E+00,  0.00000E+00,  0.00000E+00,  0.00000E+00, -4.65852E+00,
  0.00000E+00,  0.00000E+00,  4.99996E-01, -7.40711E-10,  0.00000E+00,  0.00000E+00,
  0.00000E+00,  0.00000E+00,  2.46675E-03,  2.00002E+00,  0.00000E+00,  0.00000E+00,
  1.95627E-09,  2.48000E+00,  0.00000E+00,  0.00000E+00,  1.00000E+00, -1.42584E+00,
  // F10-F11
 -5.55556E-01,  1.28309E-09,  0.00000E+00,  0.00000E+00,  0.00000E+00,  1.37778E+01,
  1.87843E-01, -1.80000E+00,  0.00000E+00,  0.00000E+00,  0.00000E+00, -4.65852E+00,
  0.00000E+00,  0.00000E+00, -4.99996E-01, -3.64573E-10,  0.00000E+00,  0.00000E+00,
  0.00000E+00,  0.00000E+00,  4.44464E-10, -2.00002E+00,  0.00000E+00,  0.00000E+00,
 -1.36581E-10, -2.48000E+00,  0.00000E+00,  0.00000E+00,  1.00000E+00, -1.42584E+00,
  // F3-F7
  1.00061E+00,  1.52115E-09,  0.00000E+00,  0.00000E+00,  0.00000E+00,  2.63585E-08,
 -1.27899E-09,  9.99389E-01,  0.00000E+00,  0.00000E+00,  0.00000E+00, -5.38150E-09,
  0.00000E+00,  0.00000E+00,  9.98180E-01,  2.90950E-09,  0.00000E+00,  0.00000E+00,
  0.00000E+00,  0.00000E+00,  2.01103E-10,  1.00182E+00,  0.00000E+00,  0.00000E+00,
  5.38362E-10,  2.49313E-09,  0.00000E+00,  0.00000E+00,  1.00000E+00,  7.94678E+00,
  // F8-F11
 -1.00000E+00, -1.54165E-08,  0.00000E+00,  0.00000E+00,  0.00000E+00,  3.48146E-08,
  6.76434E-01, -1.00000E+00,  0.00000E+00,  0.00000E+00,  0.00000E+00, -2.00083E-08,
  0.00000E+00,  0.00000E+00, -1.00014E+00,  2.43220E-10,  0.00000E+00,  0.00000E+00,
  0.00000E+00,  0.00000E+00, -4.93424E-03, -9.99858E-01,  0.00000E+00,  0.00000E+00,
  3.69905E-10, -3.52804E-09,  0.00000E+00,  0.00000E+00,  1.00000E+00, -2.85169E+00,
};

//===== PID ============================
//===== TOF ===========================================
// [6] : 0 = F03-F07 | 1 = F08-F11
//       2 = F03-F05 | 3 = F05-F07
//       4 = F08-F09 | 5 = F09-F11
// Unit [ns]
double TOFoffset[6]={
  0., // F03 - F07
  0., // F08 - F11
  0., // F03 - F05
  0., // F05 - F07
  0., // F08 - F09
  0., // F09 - F11
};
// Unit [m]
double Length0[6]={
  46.976, // F03 - F07
  36.983, // F08 - F11
  23.318, // F03 - F05
  23.658, // F05 - F07
  14.034, // F08 - F09
  22.949, // F09 - F11
};

// speed of light [m/ns]
double Clight = 2.99792458E-01;

// mass of nucleon [MeV]
//double Mnucleon = 931.49432;
double Mnucleon = 9.3149432E-01;

// Zet
double ionpair[3]={
  4866.,4866.,4866.,
};
// [0-2][] : 0 = F7IC   1 = F8IC   2 = F11IC
// [][0-1] : 0 = para0  1 = para1
double Zcoef[3][2]={
  // F7IC
  1.,1.,
  // F8IC
  1.,1.,
  // F11IC
  1.,1.,
};
