void shapingPlot()
{
//=========Macro generated from canvas: c0/
//=========  (Mon May 31 20:42:21 2021) by ROOT version 6.20/00
   TCanvas *c0 = new TCanvas("c0", "",440,185,800,602);
   c0->SetHighLightColor(2);
   c0->Range(0,0,1,1);
   c0->SetFillColor(0);
   c0->SetBorderMode(0);
   c0->SetBorderSize(2);
   c0->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TRestRawSignalEvent
   TPad *TRestRawSignalEvent = new TPad("TRestRawSignalEvent", " ",0,0,1,1);
   TRestRawSignalEvent->Draw();
   TRestRawSignalEvent->cd();
   TRestRawSignalEvent->Range(-64.125,-37.5,577.125,337.5);
   TRestRawSignalEvent->SetFillColor(0);
   TRestRawSignalEvent->SetBorderMode(0);
   TRestRawSignalEvent->SetBorderSize(2);
   TRestRawSignalEvent->SetFrameBorderMode(0);
   TRestRawSignalEvent->SetFrameBorderMode(0);
   
   TH1F *hframe__1 = new TH1F("hframe__1","",1000,0,513);
   hframe__1->SetMinimum(0);
   hframe__1->SetMaximum(300);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hframe__1->SetLineColor(ci);
   hframe__1->GetXaxis()->SetTitle("time bins");
   hframe__1->GetXaxis()->SetLabelFont(42);
   hframe__1->GetXaxis()->SetTitleOffset(1);
   hframe__1->GetXaxis()->SetTitleFont(42);
   hframe__1->GetYaxis()->SetTitle("Amplitude [ADC units]");
   hframe__1->GetYaxis()->SetLabelFont(42);
   hframe__1->GetYaxis()->SetTitleOffset(1.4);
   hframe__1->GetYaxis()->SetTitleFont(42);
   hframe__1->GetZaxis()->SetLabelFont(42);
   hframe__1->GetZaxis()->SetTitleOffset(1);
   hframe__1->GetZaxis()->SetTitleFont(42);
   hframe__1->Draw(" ");
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Event ID 0");
   
   Double_t _fx1[512] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48,
   49,
   50,
   51,
   52,
   53,
   54,
   55,
   56,
   57,
   58,
   59,
   60,
   61,
   62,
   63,
   64,
   65,
   66,
   67,
   68,
   69,
   70,
   71,
   72,
   73,
   74,
   75,
   76,
   77,
   78,
   79,
   80,
   81,
   82,
   83,
   84,
   85,
   86,
   87,
   88,
   89,
   90,
   91,
   92,
   93,
   94,
   95,
   96,
   97,
   98,
   99,
   100,
   101,
   102,
   103,
   104,
   105,
   106,
   107,
   108,
   109,
   110,
   111,
   112,
   113,
   114,
   115,
   116,
   117,
   118,
   119,
   120,
   121,
   122,
   123,
   124,
   125,
   126,
   127,
   128,
   129,
   130,
   131,
   132,
   133,
   134,
   135,
   136,
   137,
   138,
   139,
   140,
   141,
   142,
   143,
   144,
   145,
   146,
   147,
   148,
   149,
   150,
   151,
   152,
   153,
   154,
   155,
   156,
   157,
   158,
   159,
   160,
   161,
   162,
   163,
   164,
   165,
   166,
   167,
   168,
   169,
   170,
   171,
   172,
   173,
   174,
   175,
   176,
   177,
   178,
   179,
   180,
   181,
   182,
   183,
   184,
   185,
   186,
   187,
   188,
   189,
   190,
   191,
   192,
   193,
   194,
   195,
   196,
   197,
   198,
   199,
   200,
   201,
   202,
   203,
   204,
   205,
   206,
   207,
   208,
   209,
   210,
   211,
   212,
   213,
   214,
   215,
   216,
   217,
   218,
   219,
   220,
   221,
   222,
   223,
   224,
   225,
   226,
   227,
   228,
   229,
   230,
   231,
   232,
   233,
   234,
   235,
   236,
   237,
   238,
   239,
   240,
   241,
   242,
   243,
   244,
   245,
   246,
   247,
   248,
   249,
   250,
   251,
   252,
   253,
   254,
   255,
   256,
   257,
   258,
   259,
   260,
   261,
   262,
   263,
   264,
   265,
   266,
   267,
   268,
   269,
   270,
   271,
   272,
   273,
   274,
   275,
   276,
   277,
   278,
   279,
   280,
   281,
   282,
   283,
   284,
   285,
   286,
   287,
   288,
   289,
   290,
   291,
   292,
   293,
   294,
   295,
   296,
   297,
   298,
   299,
   300,
   301,
   302,
   303,
   304,
   305,
   306,
   307,
   308,
   309,
   310,
   311,
   312,
   313,
   314,
   315,
   316,
   317,
   318,
   319,
   320,
   321,
   322,
   323,
   324,
   325,
   326,
   327,
   328,
   329,
   330,
   331,
   332,
   333,
   334,
   335,
   336,
   337,
   338,
   339,
   340,
   341,
   342,
   343,
   344,
   345,
   346,
   347,
   348,
   349,
   350,
   351,
   352,
   353,
   354,
   355,
   356,
   357,
   358,
   359,
   360,
   361,
   362,
   363,
   364,
   365,
   366,
   367,
   368,
   369,
   370,
   371,
   372,
   373,
   374,
   375,
   376,
   377,
   378,
   379,
   380,
   381,
   382,
   383,
   384,
   385,
   386,
   387,
   388,
   389,
   390,
   391,
   392,
   393,
   394,
   395,
   396,
   397,
   398,
   399,
   400,
   401,
   402,
   403,
   404,
   405,
   406,
   407,
   408,
   409,
   410,
   411,
   412,
   413,
   414,
   415,
   416,
   417,
   418,
   419,
   420,
   421,
   422,
   423,
   424,
   425,
   426,
   427,
   428,
   429,
   430,
   431,
   432,
   433,
   434,
   435,
   436,
   437,
   438,
   439,
   440,
   441,
   442,
   443,
   444,
   445,
   446,
   447,
   448,
   449,
   450,
   451,
   452,
   453,
   454,
   455,
   456,
   457,
   458,
   459,
   460,
   461,
   462,
   463,
   464,
   465,
   466,
   467,
   468,
   469,
   470,
   471,
   472,
   473,
   474,
   475,
   476,
   477,
   478,
   479,
   480,
   481,
   482,
   483,
   484,
   485,
   486,
   487,
   488,
   489,
   490,
   491,
   492,
   493,
   494,
   495,
   496,
   497,
   498,
   499,
   500,
   501,
   502,
   503,
   504,
   505,
   506,
   507,
   508,
   509,
   510,
   511};
   Double_t _fy1[512] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   100,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   250,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraph *graph = new TGraph(512,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(7);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",512,0,562.1);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(275);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   Double_t _fx2[512] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48,
   49,
   50,
   51,
   52,
   53,
   54,
   55,
   56,
   57,
   58,
   59,
   60,
   61,
   62,
   63,
   64,
   65,
   66,
   67,
   68,
   69,
   70,
   71,
   72,
   73,
   74,
   75,
   76,
   77,
   78,
   79,
   80,
   81,
   82,
   83,
   84,
   85,
   86,
   87,
   88,
   89,
   90,
   91,
   92,
   93,
   94,
   95,
   96,
   97,
   98,
   99,
   100,
   101,
   102,
   103,
   104,
   105,
   106,
   107,
   108,
   109,
   110,
   111,
   112,
   113,
   114,
   115,
   116,
   117,
   118,
   119,
   120,
   121,
   122,
   123,
   124,
   125,
   126,
   127,
   128,
   129,
   130,
   131,
   132,
   133,
   134,
   135,
   136,
   137,
   138,
   139,
   140,
   141,
   142,
   143,
   144,
   145,
   146,
   147,
   148,
   149,
   150,
   151,
   152,
   153,
   154,
   155,
   156,
   157,
   158,
   159,
   160,
   160.875,
   162,
   163,
   164,
   165,
   166,
   167,
   168,
   169,
   170,
   171,
   172,
   173,
   174,
   175,
   176,
   177,
   178,
   179,
   180,
   181,
   182,
   183,
   184,
   185,
   186,
   187,
   188,
   189,
   190,
   191,
   192,
   193,
   194,
   195,
   196,
   197,
   198,
   199,
   200,
   201,
   202,
   203,
   204,
   205,
   206,
   207,
   208,
   209,
   210,
   211,
   212,
   213,
   214,
   215,
   216,
   217,
   218,
   219,
   220,
   221,
   222,
   223,
   224,
   225,
   226,
   227,
   228,
   229,
   230,
   231,
   232,
   233,
   234,
   235,
   236,
   237,
   238,
   238.8214,
   240,
   241,
   242,
   243,
   244,
   245,
   246,
   247,
   248,
   249,
   250,
   251,
   252,
   253,
   254,
   255,
   256,
   257,
   258,
   259,
   260,
   261,
   262,
   263,
   264,
   265,
   266,
   267,
   268,
   269,
   270,
   271,
   272,
   273,
   274,
   275,
   276,
   277,
   278,
   279,
   280,
   281,
   282,
   283,
   284,
   285,
   286,
   287,
   288,
   289,
   290,
   291,
   292,
   293,
   294,
   295,
   296,
   297,
   298,
   299,
   300,
   301,
   302,
   303,
   304,
   305,
   306,
   307,
   308,
   309,
   310,
   311,
   312,
   313,
   314,
   315,
   316,
   317,
   318,
   319,
   320,
   321,
   322,
   323,
   324,
   325,
   326,
   327,
   328,
   329,
   330,
   331,
   332,
   333,
   334,
   335,
   336,
   337,
   338,
   339,
   340,
   341,
   342,
   343,
   344,
   345,
   346,
   347,
   348,
   349,
   350,
   351,
   352,
   353,
   354,
   355,
   356,
   357,
   358,
   359,
   360,
   361,
   362,
   363,
   364,
   365,
   366,
   367,
   368,
   369,
   370,
   371,
   372,
   373,
   374,
   375,
   376,
   377,
   378,
   379,
   380,
   381,
   382,
   383,
   384,
   385,
   386,
   387,
   388,
   389,
   390,
   391,
   392,
   393,
   394,
   395,
   396,
   397,
   398,
   399,
   400,
   401,
   402,
   403,
   404,
   405,
   406,
   407,
   408,
   409,
   410,
   411,
   412,
   413,
   414,
   415,
   416,
   417,
   418,
   419,
   420,
   421,
   422,
   423,
   424,
   425,
   426,
   427,
   428,
   429,
   430,
   431,
   432,
   433,
   434,
   435,
   436,
   437,
   438,
   439,
   440,
   441,
   442,
   443,
   444,
   445,
   446,
   447,
   448,
   449,
   450,
   451,
   452,
   453,
   454,
   455,
   456,
   457,
   458,
   459,
   460,
   461,
   462,
   463,
   464,
   465,
   466,
   467,
   468,
   469,
   470,
   471,
   472,
   473,
   474,
   475,
   476,
   477,
   478,
   479,
   480,
   481,
   482,
   483,
   484,
   485,
   486,
   487,
   488,
   489,
   490,
   491,
   492,
   493,
   494,
   495,
   496,
   497,
   498,
   499,
   500,
   501,
   502,
   503,
   504,
   505,
   506,
   507,
   508,
   509,
   510,
   511};
   Double_t _fy2[512] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1,
   1,
   1,
   1,
   1,
   2,
   2,
   2,
   3,
   3,
   3,
   4,
   5,
   5,
   6,
   7,
   7,
   8,
   9,
   10,
   11,
   13,
   14,
   15,
   17,
   18,
   20,
   22,
   24,
   25,
   27,
   29,
   32,
   34,
   36,
   38,
   41,
   43,
   45,
   48,
   50,
   53,
   55,
   57,
   60,
   62,
   64,
   66,
   68,
   70,
   72.06522,
   73,
   75,
   76,
   77,
   78,
   78,
   79,
   79,
   79,
   79,
   79,
   78,
   78,
   77,
   76,
   75,
   73,
   72,
   70,
   69,
   67,
   65,
   63,
   61,
   59,
   57,
   54,
   52,
   50,
   48,
   46,
   44,
   42,
   41,
   39,
   38,
   36,
   35,
   34,
   33,
   33,
   33,
   32,
   33,
   33,
   34,
   35,
   36,
   37,
   39,
   41,
   43,
   46,
   49,
   52,
   56,
   59,
   64,
   68,
   72,
   77,
   82,
   87,
   93,
   98,
   104,
   110,
   116,
   121,
   127,
   133,
   139,
   145,
   151,
   156,
   161,
   166,
   171.1957,
   176,
   180,
   184,
   187,
   190,
   193,
   195,
   197,
   198,
   199,
   199,
   199,
   198,
   197,
   195,
   193,
   190,
   187,
   184,
   180,
   176,
   171,
   166,
   161,
   156,
   150,
   144,
   139,
   133,
   127,
   121,
   114,
   108,
   103,
   97,
   91,
   85,
   80,
   74,
   69,
   64,
   60,
   55,
   51,
   47,
   43,
   39,
   36,
   32,
   29,
   27,
   24,
   22,
   19,
   17,
   15,
   14,
   12,
   11,
   9,
   8,
   7,
   6,
   5,
   5,
   4,
   3,
   3,
   2,
   2,
   2,
   1,
   1,
   1,
   1,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   graph = new TGraph(512,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(7);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",512,0,562.1);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(218.9);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   
   Double_t _fx3[512] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48,
   49,
   50,
   51,
   52,
   53,
   54,
   55,
   56,
   57,
   58,
   59,
   60,
   61,
   62,
   63,
   64,
   65,
   66,
   67,
   68,
   69,
   70,
   71,
   72,
   73,
   74,
   75,
   76,
   77,
   78,
   79,
   80,
   81,
   82,
   83,
   84,
   85,
   86,
   87,
   88,
   89,
   90,
   91,
   92,
   93,
   94,
   95,
   96,
   97,
   98,
   99,
   100,
   101,
   102,
   103,
   104,
   105,
   106,
   107,
   108,
   109,
   110,
   111,
   112,
   113,
   114,
   115,
   116,
   117,
   118,
   119,
   120,
   121,
   122,
   123,
   124,
   125,
   126,
   127,
   128,
   129,
   130,
   131,
   132,
   133,
   134,
   135,
   136,
   137,
   138,
   139,
   140,
   141,
   142,
   143,
   144,
   145,
   146,
   147,
   148,
   149,
   150,
   151,
   152,
   153,
   154,
   155,
   156,
   157,
   158,
   159,
   160,
   161,
   162,
   163,
   164,
   165,
   166,
   167,
   168,
   169,
   170,
   171,
   172,
   173,
   174,
   175,
   176,
   177,
   178,
   179,
   180,
   181,
   182,
   183,
   184,
   185,
   186,
   187,
   188,
   189,
   190,
   191,
   192,
   193,
   194,
   195,
   196,
   197,
   198,
   199,
   200,
   201,
   202,
   203,
   204,
   205,
   206,
   207,
   208,
   209,
   210,
   211,
   212,
   213,
   214,
   215,
   216,
   217,
   218,
   219,
   220,
   221,
   222,
   223,
   224,
   225,
   226,
   227,
   228,
   229,
   230,
   231,
   232,
   233,
   234,
   235,
   236,
   237,
   238,
   239,
   240,
   241,
   242,
   243,
   244,
   245,
   246,
   247,
   248,
   249,
   250,
   251,
   252,
   253,
   254,
   255,
   256,
   257,
   258,
   259,
   260,
   261,
   262,
   263,
   264,
   265,
   266,
   267,
   268,
   269,
   270,
   271,
   272,
   273,
   274,
   275,
   276,
   277,
   278,
   279,
   280,
   281,
   282,
   283,
   284,
   285,
   286,
   287,
   288,
   289,
   290,
   291,
   292,
   293,
   294,
   295,
   296,
   297,
   298,
   299,
   300,
   301,
   302,
   303,
   304,
   305,
   306,
   307,
   308,
   309,
   310,
   311,
   312,
   313,
   314,
   315,
   316,
   317,
   318,
   319,
   320,
   321,
   322,
   323,
   324,
   325,
   326,
   327,
   328,
   329,
   330,
   331,
   332,
   333,
   334,
   335,
   336,
   337,
   338,
   339,
   340,
   341,
   342,
   343,
   344,
   345,
   346,
   347,
   348,
   349,
   350,
   351,
   352,
   353,
   354,
   355,
   356,
   357,
   358,
   359,
   360,
   361,
   362,
   363,
   364,
   365,
   366,
   367,
   368,
   369,
   370,
   371,
   372,
   373,
   374,
   375,
   376,
   377,
   378,
   379,
   380,
   381,
   382,
   383,
   384,
   385,
   386,
   387,
   388,
   389,
   390,
   391,
   392,
   393,
   394,
   395,
   396,
   397,
   398,
   399,
   400,
   401,
   402,
   403,
   404,
   405,
   406,
   407,
   408,
   409,
   410,
   411,
   412,
   413,
   414,
   415,
   416,
   417,
   418,
   419,
   420,
   421,
   422,
   423,
   424,
   425,
   426,
   427,
   428,
   429,
   430,
   431,
   432,
   433,
   434,
   435,
   436,
   437,
   438,
   439,
   440,
   441,
   442,
   443,
   444,
   445,
   446,
   447,
   448,
   449,
   450,
   451,
   452,
   453,
   454,
   455,
   456,
   457,
   458,
   459,
   460,
   461,
   462,
   463,
   464,
   465,
   466,
   467,
   468,
   469,
   470,
   471,
   472,
   473,
   474,
   475,
   476,
   477,
   478,
   479,
   480,
   481,
   482,
   483,
   484,
   485,
   486,
   487,
   488,
   489,
   490,
   491,
   492,
   493,
   494,
   495,
   496,
   497,
   498,
   499,
   500,
   501,
   502,
   503,
   504,
   505,
   506,
   507,
   508,
   509,
   510,
   511};
   Double_t _fy3[512] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1,
   1,
   2,
   4,
   5,
   7,
   9,
   12,
   14,
   17,
   20,
   23,
   26,
   28,
   31,
   34,
   37,
   40,
   43,
   45,
   48,
   50,
   52,
   54,
   56,
   58,
   60,
   61,
   62,
   63,
   64,
   65,
   66,
   66,
   66,
   67,
   67,
   67,
   66,
   66,
   66,
   65,
   65,
   64,
   63,
   62,
   62,
   61,
   60,
   58,
   57,
   56,
   55,
   54,
   53,
   51,
   50,
   49,
   48,
   46,
   45,
   44,
   42,
   41,
   40,
   39,
   37,
   36,
   35,
   34,
   33,
   32,
   30,
   29,
   28,
   27,
   26,
   25,
   25,
   25,
   25,
   26,
   28,
   31,
   34,
   38,
   42,
   48,
   53,
   59,
   65,
   72,
   79,
   85,
   92,
   99,
   105,
   112,
   118,
   124,
   130,
   135,
   140,
   145,
   149,
   153,
   157,
   160,
   163,
   165,
   167,
   169,
   170,
   171,
   172,
   172,
   172,
   172,
   171,
   170,
   169,
   167,
   166,
   164,
   162,
   160,
   157,
   155,
   152,
   149,
   146,
   143,
   140,
   137,
   134,
   131,
   128,
   124,
   121,
   118,
   115,
   111,
   108,
   105,
   102,
   98,
   95,
   92,
   89,
   86,
   83,
   80,
   78,
   75,
   72,
   70,
   67,
   64,
   62,
   60,
   57,
   55,
   53,
   51,
   49,
   47,
   45,
   43,
   41,
   39,
   38,
   36,
   35,
   33,
   32,
   30,
   29,
   28,
   26,
   25,
   24,
   23,
   22,
   21,
   20,
   19,
   18,
   17,
   16,
   15,
   15,
   14,
   13,
   13,
   12,
   11,
   11,
   10,
   10,
   9,
   9,
   8,
   8,
   7,
   7,
   7,
   6,
   6,
   6,
   5,
   5,
   5,
   4,
   4,
   4,
   4,
   3,
   3,
   3,
   3,
   3,
   3,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   graph = new TGraph(512,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(7);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",512,0,562.1);
   Graph_Graph3->SetMinimum(0);
   Graph_Graph3->SetMaximum(189.2);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"");
   multigraph->Draw("");
   multigraph->GetXaxis()->SetLimits(0, 513);
   multigraph->GetXaxis()->SetTitle("time bins");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Amplitude [ADC units]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleOffset(1.4);
   multigraph->GetYaxis()->SetTitleFont(42);
   TRestRawSignalEvent->Modified();
   c0->cd();
   c0->Modified();
   c0->cd();
   c0->SetSelected(c0);
}
