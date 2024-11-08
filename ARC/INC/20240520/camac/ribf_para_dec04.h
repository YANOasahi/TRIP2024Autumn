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
   65.0, 106.6, 176.2, 196.8, // F3
    0.0,   0.0,   0.0,   0.0, // F4
  119.8, 151.8, 182.8, 148.9, // F5
    0.0,   0.0,   0.0,   0.0, // F6
  158.7, 193.7,  57.8,  60.1, // F7
   29.9,  17.6,  28.6,  38.0, // F8
  197.7, 196.6, 201.3, 201.5, // F9
  221.1, 186.9, 242.4, 233.3, // F10
  -18.1,  -7.1, -42.4, -55.0, // F11

  // Y 
    0.0,   0.0,   0.0,   0.0, // Dummy
    0.0,   0.0,   0.0,   0.0, // F1
    0.0,   0.0,   0.0,   0.0, // F2
   79.4, 107.8, 104.1, 136.4, // F3
    0.0,   0.0,   0.0,   0.0, // F4
   52.6, 102.3,  88.1,  87.2, // F5
    0.0,   0.0,   0.0,   0.0, // F6
   82.2,  99.1,  65.1,  74.6, // F7
  -48.8, -48.1, -55.9, -48.6, // F8
  137.7, 129.8, 176.8, 142.0, // F9
  176.6, 126.5, 144.8, 144.4, // F10
  -93.2, -90.6,-123.7,-136.5, // F11
};

//[2]:X,Y [12]:Fpl, [4]:1A,1B,2A,2B,
double Tsum_Min[2][12][4]={
  // X
    0.0,   0.0,   0.0,   0.0, /* F0 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F1 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F2 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F3 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F4 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F5 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F6 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F7 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F8 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F9 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F10 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F11 1A/1B/2A/2B */

  // Y
    0.0,   0.0,   0.0,   0.0, /* F0 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F1 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F2 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F3 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F4 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F5 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F6 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F7 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F7 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F9 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F10 1A/1B/2A/2B */
   -6.0,  -6.0,  -6.0,  -6.0, /* F11 1A/1B/2A/2B */
};
//[2]:X,Y [12]:Fpl, [4]:1A,1B,2A,2B,
double Tsum_Max[2][12][4]={
  // X
    0.0,   0.0,   0.0,   0.0, /* F0 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F1 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F2 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F3 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F4 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F5 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F6 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F7 1A/1B/2A/2B */
   10.0,  10.0,   5.0,  10.0, /* F8 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F9 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F10 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F11 1A/1B/2A/2B */

  // Y
    0.0,   0.0,   0.0,   0.0, /* F0 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F1 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F2 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F3 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F4 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F5 1A/1B/2A/2B */
    0.0,   0.0,   0.0,   0.0, /* F6 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F7 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F8 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F9 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F10 1A/1B/2A/2B */
   10.0,  10.0,  10.0,  10.0, /* F11 1A/1B/2A/2B */
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
  0.141179, 0.147747, 0.144717, 0.143620, // 1A-X1/Y1/X2/Y2
  0.000000, 0.000000, 0.000000, 0.000000, // 1B-X1/Y1/X2/Y2
  0.149795, 0.146050, 0.146158, 0.148486, // 2A-X1/Y1/X2/Y2
  0.000000, 0.000000, 0.000000, 0.000000, // 2B-X1/Y1/X2/Y2
  // F2
  0.150175, 0.153530, 0.152608, 0.149436, // 1A-X1/Y1/X2/Y2
  0.000000, 0.000000, 0.000000, 0.000000, // 1B-X1/Y1/X2/Y2
  0.153498, 0.142653, 0.144948, 0.147276, // 2A-X1/Y1/X2/Y2
  0.000000, 0.000000, 0.000000, 0.000000, // 2B-X1/Y1/X2/Y2
  // F3
  0.151096, 0.148212, 0.147478, 0.150747, // 1A-X1/Y1/X2/Y2
  0.151345, 0.148180, 0.151480, 0.146174, // 1B-X1/Y1/X2/Y2
  0.146298, 0.148608, 0.151626, 0.150946, // 2A-X1/Y1/X2/Y2
  0.146958, 0.144238, 0.148189, 0.146956, // 2B-X1/Y1/X2/Y2
  // F4
  0.148680, 0.149443, 0.147131, 0.149318, // 1A-X1/Y1/X2/Y2
  0.000000, 0.000000, 0.000000, 0.000000, // 1B-X1/Y1/X2/Y2
  0.000000, 0.000000, 0.000000, 0.000000, // 2A-X1/Y1/X2/Y2
  0.000000, 0.000000, 0.000000, 0.000000, // 2B-X1/Y1/X2/Y2
  // F5
  0.151622, 0.145979, 0.147927, 0.146828, // 1A-X1/Y1/X2/Y2
  0.151959, 0.152978, 0.144341, 0.151408, // 1B-X1/Y1/X2/Y2
  0.146886, 0.148598, 0.147218, 0.150814, // 2A-X1/Y1/X2/Y2 
  0.148240, 0.151384, 0.145607, 0.148806, // 2B-X1/Y1/X2/Y2
  // F6
  0.150242, 0.152564, 0.146609, 0.149084, // 1A-X1/Y1/X2/Y2
  0.000000, 0.000000, 0.000000, 0.000000, // 1B-X1/Y1/X2/Y2
  0.000000, 0.000000, 0.000000, 0.000000, // 2A-X1/Y1/X2/Y2
  0.000000, 0.000000, 0.000000, 0.000000, // 2B-X1/Y1/X2/Y2
  // F7
  0.141496, 0.149205, 0.142964, 0.144151, // 1A-X1/Y1/X2/Y2 
  0.145397, 0.147769, 0.149053, 0.148728, // 1B-X1/Y1/X2/Y2 
  0.146450, 0.147926, 0.149802, 0.151382, // 2A-X1/Y1/X2/Y2 
  0.148050, 0.147009, 0.147318, 0.143919, // 2B-X1/Y1/X2/Y2 
  // F8
  0.142926, 0.144576, 0.145965, 0.144242, // 1A-X1/Y1/X2/Y2 
  0.149792, 0.143058, 0.147823, 0.145942, // 1B-X1/Y1/X2/Y2 
  0.144150, 0.142974, 0.146706, 0.147405, // 2A-X1/Y1/X2/Y2 
  0.144674, 0.146101, 0.145235, 0.153030, // 2B-X1/Y1/X2/Y2 
  // F9
  0.152054, 0.144032, 0.149193, 0.145932, // 1A-X1/Y1/X2/Y2 
  0.141752, 0.149194, 0.145475, 0.141491, // 1B-X1/Y1/X2/Y2 
  0.147303, 0.147355, 0.149830, 0.146130, // 2A-X1/Y1/X2/Y2 
  0.144018, 0.147399, 0.152790, 0.152808, // 2B-X1/Y1/X2/Y2  
  // F10
  0.146293, 0.145615, 0.152921, 0.148810, // 1A-X1/Y1/X2/Y2 
  0.153731, 0.149329, 0.150958, 0.148988, // 1B-X1/Y1/X2/Y2 
  0.147988, 0.150685, 0.150567, 0.154362, // 2A-X1/Y1/X2/Y2 
  0.148954, 0.153196, 0.151319, 0.151899, // 2B-X1/Y1/X2/Y2 
  // F11
  0.147666, 0.146122, 0.143161, 0.144448, // 1A-X1/Y1/X2/Y2 
  0.145359, 0.141926, 0.152705, 0.150023, // 1B-X1/Y1/X2/Y2 
  0.147053, 0.152173, 0.143568, 0.145391, // 2A-X1/Y1/X2/Y2 
  0.144219, 0.140717, 0.149207, 0.147558, // 2B-X1/Y1/X2/Y2 
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
  -4.910,-3.6300, // 1A X/Y
  -11.51, 16.340, // 1B X/Y
  9.6400,  9.860, // 2A X/Y
  6.8800, 8.0800, // 2B X/Y
  // F4		           
  0.0000, 0.0000, // 1A X/Y
  0.0000, 0.0000, // 1B X/Y
  0.0000, 0.0000, // 2A X/Y
  0.0000, 0.0000, // 2B X/Y
  // F5		           
  13.740, 23.280, // 1A X/Y
  13.950, 0.5900, // 1B X/Y
  -14.62, 12.790, // 2A X/Y
  10.930,-15.910, // 2B X/Y
  // F6		           
  0.0000, 0.0000, // 1A X/Y
  0.0000, 0.0000, // 1B X/Y
  0.0000, 0.0000, // 2A X/Y
  0.0000, 0.0000, // 2B X/Y
  // F7		           
  -1.880,-6.8000, // 1A X/Y
  14.150, 16.220, // 1B X/Y
  7.8100,-8.6800, // 2A X/Y
  12.930,-8.2100, // 2B X/Y
  // F8		           
  -2.5858,-5.3394, // 1A X/Y
  -2.2754, 11.813, // 1B X/Y
  -10.458,-1.5432, // 2A X/Y
  -5.3563,-13.497, // 2B X/Y
  // F9		           
  13.570, 3.3400, // 1A X/Y
  -0.490, 11.420, // 1B X/Y
  -26.46, 1.0100, // 2A X/Y
  -10.55, 15.410, // 2B X/Y
  // F10	           
  -12.91, 15.360, // 1A X/Y
  -1.100, 18.870, // 1B X/Y
  8.0100, 1.2200, // 2A X/Y
  3.1900, -8.970, // 2B X/Y
  // F11	           
  -2.6985, -6.0641, // 1A X/Y
  11.0940, -8.6362, // 1B X/Y
  -5.6477, -1.2329, // 2A X/Y
  3.55750, -8.7080, // 2B X/Y
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
  0.976500, 0.976500, 0.976500, 0.976500, // 1A/1B/2A/2B
  // F1
  0.976500, 0.976500, 0.976500, 0.976500, // 1A/1B/2A/2B
  // F2
  0.976500, 0.976500, 0.976500, 0.976500, // 1A/1B/2A/2B
  // F3
  0.147696, 0.144662, 0.150818, 0.149367, // 1A/1B/2A/2B
  // F4
  0.976500, 0.976500, 0.976500, 0.976500, // 1A/1B/2A/2B
  // F5
  0.140546, 0.141985, 0.144636, 0.149480, // 1A/1B/2A/2B
  // F6
  0.976500, 0.976500, 0.976500, 0.976500, // 1A/1B/2A/2B
  // F7
  0.139108, 0.138979, 0.148906, 0.147447, // 1A/1B/2A/2B
  // F8
  0.146958, 0.148240, 0.146962, 0.145384, // 1A/1B/2A/2B
  // F9
  0.144846, 0.140907, 0.152341, 0.150016, // 1A/1B/2A/2B
  // F10
  0.147347, 0.147012, 0.150526, 0.139081, // 1A/1B/2A/2B
  // F11
  0.147478, 0.146447, 0.146203, 0.148432, // 1A/1B/2A/2B
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
  0.,0.,
  // F1PL
  0.,0.,
  // F2PL
  0.,0.,
  // F3PL
  0.0268541, 0.0271294,
  // F4PL
  0.,0.,
  // F5PL
  0.0268347, 0.0269210,
  // F6PL
  0.,0.,
  // F7PL
  0.0270389, 0.0275445,
  // F8PL
  0.0269402, 0.0268588,
  // F9PL
  0.0270162, 0.0270493,
  // F10PL
  0.,0.,
  // F11PL
  0.0262474, 0.0270460,
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
//===== F8VETO ==========================
double ch2MeV_F8VETO[2][2]={
  // slope L/R
  1.,1.,
  // pedestal L/R
  0.,0.,
};
double ch2ns_F8VETO[2]={
  // L/R
  0.0274605, 0.0272783,
};
//===== F11Long ==========================
double ch2MeV_F11Long[2][2]={
  // slope L/R
  1.,1.,
  // pedestal L/R
  0.,0.,
};
double ch2ns_F11Long[2]={
  // L/R
  0.0274605, 0.0272783,
};
//===== IC ==============================
// [2]  : 0 = slope (MeV/ch) | 1 = pedestal (ch)
// [3]  : 0/1/2 = F7/F8/F11 MUSIC
// [6]  : Anode number
double ch2MeV_IC[2][3][6]={
  // slope (MeV/ch)
  // F7MUSIC
  //  0.0050,0.0050,0.0050,0.0050,0.0050,0.0050,
  0.00351,0.00351,0.00351,0.00351,0.00351,0.00351,
  // F8MUSIC
  1.,1.,1.,0.,0.,0.,
  // F11MUSIC
  1.,1.,1.,1.,1.,1.,
  // pedestal
  // F7MUSIC
  //  5.5766,5.5766,5.5766,5.5766,5.5766,5.5766,
  -347.32,-347.32,-347.32,-347.32,-347.32,-347.32,
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
  //  285.790, // F03 - F07
  284.41, // F03 - F07
  0., // F08 - F11
  125.13, // F03 - F05
  159.34, // F05 - F07
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
  10.547,-0.005,
  // F8IC
  1.,1.,
  // F11IC
  1.,1.,
};
