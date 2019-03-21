{

THStack *hs_InvMassDPCut_noErr60 = new THStack("hs_InvMassDPCut_noErr60", "");


double lumi = 2333;  //   1/pb


TFile *fZZ = new TFile("ZZM.root");
TFile *fWZ = new TFile("WZM.root");
TFile *fWW = new TFile("WWM.root");
TFile *fDY = new TFile("DYM.root");
TFile *fll = new TFile("llM.root");
TFile *flw = new TFile("lw5.root");
TFile *fDat = new TFile("DatM.root");
 
 

TH1F * hZZ_InvMassDPCut_noErr60= (TH1F*)fZZ->Get("InvMassDPCut_noErr50");
TH1F * hWZ_InvMassDPCut_noErr60= (TH1F*)fWZ->Get("InvMassDPCut_noErr50");
TH1F * hWW_InvMassDPCut_noErr60= (TH1F*)fWW->Get("InvMassDPCut_noErr50");
TH1F * hDY_InvMassDPCut_noErr60= (TH1F*)fDY->Get("InvMassDPCut_noErr50");
TH1F * hll_InvMassDPCut_noErr60= (TH1F*)fll->Get("InvMassDPCut_noErr50");
TH1F * hlw_InvMassDPCut_noErr60= (TH1F*)flw->Get("InvMassDPCutLw_noErr50");
TH1F * hDat_InvMassDPCut_noErr60= (TH1F*)fDat->Get("InvMassDPCut_noErr50"); 


TH1F * hZZ_nEvents= (TH1F*)fZZ->Get("nEvents");
TH1F * hWZ_nEvents= (TH1F*)fWZ->Get("nEvents");
TH1F * hWW_nEvents= (TH1F*)fWW->Get("nEvents");
TH1F * hDY_nEvents= (TH1F*)fDY->Get("nEvents");
TH1F * hll_nEvents= (TH1F*)fll->Get("nEvents");
TH1F * hlw_nEvents= (TH1F*)flw->Get("nEvents");
TH1F * hDat_nEvents= (TH1F*)fDat->Get("nEvents"); 


hlw_InvMassDPCut_noErr60->SetLineColor(1);
hll_InvMassDPCut_noErr60->SetLineColor(1);
hZZ_InvMassDPCut_noErr60->SetLineColor(1);
hWW_InvMassDPCut_noErr60->SetLineColor(1);
hWZ_InvMassDPCut_noErr60->SetLineColor(1);
hDY_InvMassDPCut_noErr60->SetLineColor(1);

hlw_InvMassDPCut_noErr60->SetFillColor(7);
hll_InvMassDPCut_noErr60->SetFillColor(2);
hZZ_InvMassDPCut_noErr60->SetFillColor(3);
hWW_InvMassDPCut_noErr60->SetFillColor(4);
hWZ_InvMassDPCut_noErr60->SetFillColor(5);
hDY_InvMassDPCut_noErr60->SetFillColor(6);


double ZZ_InvMassDPCut_noErr60_scale = lumi*5.9/(hZZ_nEvents->Integral());
hZZ_InvMassDPCut_noErr60->Scale(ZZ_InvMassDPCut_noErr60_scale);
double WZ_InvMassDPCut_noErr60_scale = lumi*0.868/(hWZ_nEvents->Integral());
hWZ_InvMassDPCut_noErr60->Scale(WZ_InvMassDPCut_noErr60_scale);
double WW_InvMassDPCut_noErr60_scale = lumi*42/(hWW_nEvents->Integral());
hWW_InvMassDPCut_noErr60->Scale(WW_InvMassDPCut_noErr60_scale);
double DY_InvMassDPCut_noErr60_scale = lumi*3048/(hDY_nEvents->Integral());
hDY_InvMassDPCut_noErr60->Scale(DY_InvMassDPCut_noErr60_scale);
double ll_InvMassDPCut_noErr60_scale = lumi*1/(4000);
hll_InvMassDPCut_noErr60->Scale(ll_InvMassDPCut_noErr60_scale);
hlw_InvMassDPCut_noErr60->Scale(0.066*ll_InvMassDPCut_noErr60_scale);

hs_InvMassDPCut_noErr60->Add(hlw_InvMassDPCut_noErr60);
//hs_InvMassDPCut_noErr60->Add(hll_InvMassDPCut_noErr60);
hs_InvMassDPCut_noErr60->Add(hZZ_InvMassDPCut_noErr60);
hs_InvMassDPCut_noErr60->Add(hWZ_InvMassDPCut_noErr60);
hs_InvMassDPCut_noErr60->Add(hWW_InvMassDPCut_noErr60);
hs_InvMassDPCut_noErr60->Add(hDY_InvMassDPCut_noErr60);



hZZ_InvMassDPCut_noErr60->Sumw2();
hWZ_InvMassDPCut_noErr60->Sumw2();
hWW_InvMassDPCut_noErr60->Sumw2();
hDY_InvMassDPCut_noErr60->Sumw2();
hll_InvMassDPCut_noErr60->Sumw2();
hlw_InvMassDPCut_noErr60->Sumw2();


TCanvas *cs_InvMassDPCut_noErr60 = new TCanvas("cs_InvMassDPCut_noErr60","cs_InvMassDPCut_noErr60",10,10,700,700);
cs_InvMassDPCut_noErr60->cd(1); 

TText T; T.SetTextFont(42); T.SetTextAlign(21);
hs_InvMassDPCut_noErr60->SetTitle("");
auto legend_InvMassDPCut_noErr60 = new TLegend(0.5,0.7,0.9,0.9);


// legend stuff
legend_InvMassDPCut_noErr60->AddEntry(hlw_InvMassDPCut_noErr60," Lee-Wick H(1000)#rightarrow XX(350), 1 pb","f");
legend_InvMassDPCut_noErr60->AddEntry(hll_InvMassDPCut_noErr60,"H(1000)#rightarrow XX(350), 1 pb","f");
legend_InvMassDPCut_noErr60->AddEntry(hDY_InvMassDPCut_noErr60,"Z/#gamma*#rightarrow #mu#mu","f");
legend_InvMassDPCut_noErr60->AddEntry(hWW_InvMassDPCut_noErr60,"WW","f");
legend_InvMassDPCut_noErr60->AddEntry(hWZ_InvMassDPCut_noErr60,"WZ","f");
legend_InvMassDPCut_noErr60->AddEntry(hZZ_InvMassDPCut_noErr60,"ZZ","f");
legend_InvMassDPCut_noErr60->SetFillColor(0);
legend_InvMassDPCut_noErr60->SetFillStyle(0);
legend_InvMassDPCut_noErr60->SetBorderSize(0);



hs_InvMassDPCut_noErr60->Draw(" hist eX0"); 
hs_InvMassDPCut_noErr60->GetXaxis()->SetTitle("M_{#mu#mu} [GeV/c]");
hs_InvMassDPCut_noErr60->GetYaxis()->SetTitleOffset(1.5);
hs_InvMassDPCut_noErr60->GetYaxis()->SetTitle("Eventos");
cs_InvMassDPCut_noErr60->Update(); 

legend_InvMassDPCut_noErr60->Draw();
gPad->Update();
gPad->SetLogy(1);
 

}
