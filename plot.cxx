{ 

double lumi = 2333;  //   1/pb

THStack *hs_lxy_err = new THStack("hs_lxy_err", "");

THStack *hs_InvMass = new THStack("hs_InvMass", "");

THStack *hs_InvMass_lwCut = new THStack("hs_InvMass_lwCut", "");
THStack *hs_InvMass_lwCut_full = new THStack("hs_InvMass_lwCut", "");
THStack *hs_InvMass_lwCut_full = new THStack("hs_InvMass_lwCut", "");



TFile *fZZ = new TFile("ZZMG.root");
TFile *fWZ = new TFile("WZMG.root");
TFile *fWW = new TFile("WWMG.root");
TFile *fDY = new TFile("DYMG.root");
TFile *fll = new TFile("ll25.root");
TFile *fDat = new TFile("DatM.root");
 
 



TH1F * hZZ_lxy_err= (TH1F*)fZZ->Get("Lxy_err");
TH1F * hWZ_lxy_err= (TH1F*)fWZ->Get("Lxy_err");
TH1F * hWW_lxy_err= (TH1F*)fWW->Get("Lxy_err");
TH1F * hDY_lxy_err= (TH1F*)fDY->Get("Lxy_err");
TH1F * hll_lxy_err= (TH1F*)fll->Get("Lxy_err");
TH1F * hDat_lxy_err= (TH1F*)fDat->Get("Lxy_err");



TH1F * hZZ_InvMass= (TH1F*)fZZ->Get("InvMass");
TH1F * hWZ_InvMass= (TH1F*)fWZ->Get("InvMass");
TH1F * hWW_InvMass= (TH1F*)fWW->Get("InvMass");
TH1F * hDY_InvMass= (TH1F*)fDY->Get("InvMass");
TH1F * hll_InvMass= (TH1F*)fll->Get("InvMass");
TH1F * hDat_InvMass= (TH1F*)fDat->Get("InvMass");

/*
TH1F * hZZ_InvMass_lwCut= (TH1F*)fZZ->Get("InvMass_lwCut");
TH1F * hWZ_InvMass_lwCut= (TH1F*)fWZ->Get("InvMass_lwCut");
TH1F * hWW_InvMass_lwCut= (TH1F*)fWW->Get("InvMass_lwCut");
TH1F * hDY_InvMass_lwCut= (TH1F*)fDY->Get("InvMass_lwCut");
TH1F * hll_InvMass_lwCut= (TH1F*)fll->Get("InvMass_lwCut_inv");
TH1F * hDat_InvMass_lwCut= (TH1F*)fDat->Get("InvMass_lwCut");


*/

hZZ_lxy_err->Sumw2();
hWZ_lxy_err->Sumw2();
hWW_lxy_err->Sumw2();
hDY_lxy_err->Sumw2();
hll_lxy_err->Sumw2();
hDat_lxy_err->Sumw2();



hZZ_InvMass->Sumw2();
hWZ_InvMass->Sumw2();
hWW_InvMass->Sumw2();
hDY_InvMass->Sumw2();
hll_InvMass->Sumw2();
hDat_InvMass->Sumw2();
/*
hZZ_InvMass_lwCut->Sumw2();
hWZ_InvMass_lwCut->Sumw2();
hWW_InvMass_lwCut->Sumw2();
hDY_InvMass_lwCut->Sumw2();
hll_InvMass_lwCut->Sumw2();
hDat_InvMass_lwCut->Sumw2();

*/


hZZ_lxy_err->SetLineColor(1);
hWZ_lxy_err->SetLineColor(1);
hWW_lxy_err->SetLineColor(1);
hDY_lxy_err->SetLineColor(1);



hZZ_InvMass->SetLineColor(1);
hWZ_InvMass->SetLineColor(1);
hWW_InvMass->SetLineColor(1);
hDY_InvMass->SetLineColor(1);

/*

hZZ_InvMass_lwCut->SetLineColor(1);
hWZ_InvMass_lwCut->SetLineColor(1);
hWW_InvMass_lwCut->SetLineColor(1);
hDY_InvMass_lwCut->SetLineColor(1);
*/
hZZ_lxy_err->SetFillColor(kGreen +3);
hWZ_lxy_err->SetFillColor(kCyan -9);
hWW_lxy_err->SetFillColor(kMagenta -3);
hDY_lxy_err->SetFillColor(2);




hZZ_InvMass->SetFillColor(kGreen +3);
hWZ_InvMass->SetFillColor(kCyan -9);
hWW_InvMass->SetFillColor(kMagenta -3);
hDY_InvMass->SetFillColor(2);

/*

hZZ_InvMass_lwCut->SetFillColor(kGreen +3);
hWZ_InvMass_lwCut->SetFillColor(kCyan -9);
hWW_InvMass_lwCut->SetFillColor(kMagenta -3);
hDY_InvMass_lwCut->SetFillColor(2);
*/

hDat_lxy_err->SetMarkerStyle(21);
hDat_lxy_err->SetMarkerSize(1);
hDat_lxy_err->SetLineColor(1);
hll_lxy_err->SetLineColor(2);

hDat_InvMass->SetMarkerStyle(21);
hDat_InvMass->SetMarkerSize(1);
hDat_InvMass->SetLineColor(1);
hll_InvMass->SetLineColor(2);

/*
hDat_InvMass_lwCut->SetMarkerStyle(21);
hDat_InvMass_lwCut->SetMarkerSize(1);
hDat_InvMass_lwCut->SetLineColor(1);
hll_InvMass_lwCut->SetLineColor(2);
*/
TH1F * hZZ_nEvents = (TH1F*)fZZ->Get("nEvents");
TH1F * hWZ_nEvents = (TH1F*)fWZ->Get("nEvents");
TH1F * hWW_nEvents = (TH1F*)fWW->Get("nEvents");
TH1F * hDY_nEvents = (TH1F*)fDY->Get("nEvents");
//TH1F * hll_nEvents = (TH1F*)fll->Get("nEvents");
double ZZ_lxy_err_scale = lumi*5.9/(hZZ_nEvents->Integral());
hZZ_lxy_err->Scale(ZZ_lxy_err_scale);
double WZ_lxy_err_scale = lumi*0.868/(hWZ_nEvents->Integral());
hWZ_lxy_err->Scale(WZ_lxy_err_scale);
double WW_lxy_err_scale = lumi*42/(hWW_nEvents->Integral());
hWW_lxy_err->Scale(WW_lxy_err_scale);
double DY_lxy_err_scale = lumi*3048/(hDY_nEvents->Integral());
hDY_lxy_err->Scale(DY_lxy_err_scale);
double ll_lxy_err_scale = 0.225*lumi*1/(4000);
hll_lxy_err->Scale(ll_lxy_err_scale);

double ZZ_InvMass_scale = lumi*5.9/(hZZ_nEvents->Integral());
hZZ_InvMass->Scale(ZZ_InvMass_scale);
double WZ_InvMass_scale = lumi*0.868/(hWZ_nEvents->Integral());
hWZ_InvMass->Scale(WZ_InvMass_scale);
double WW_InvMass_scale = lumi*42/(hWW_nEvents->Integral());
hWW_InvMass->Scale(WW_InvMass_scale);
double DY_InvMass_scale = lumi*3048/(hDY_nEvents->Integral());
hDY_InvMass->Scale(DY_InvMass_scale);
double ll_InvMass_scale = 0.225*lumi*1/(4000);
hll_InvMass->Scale(ll_InvMass_scale);

/*
hZZ_InvMass_lwCut->Scale(ZZ_InvMass_scale);

hWZ_InvMass_lwCut->Scale(WZ_InvMass_scale);

hWW_InvMass_lwCut->Scale(WW_InvMass_scale);

hDY_InvMass_lwCut->Scale(DY_InvMass_scale);

hll_InvMass_lwCut->Scale(ll_InvMass_scale);
*/







hZZ_lxy_err->SetStats(0);
hWZ_lxy_err->SetStats(0);
hWW_lxy_err->SetStats(0);
hDY_lxy_err->SetStats(0);
hll_lxy_err->SetStats(0);
hDat_lxy_err->SetStats(0);



hZZ_InvMass->SetStats(0);
hWZ_InvMass->SetStats(0);
hWW_InvMass->SetStats(0);
hDY_InvMass->SetStats(0);
hll_InvMass->SetStats(0);
hDat_InvMass->SetStats(0);

/*

hZZ_InvMass_lwCut->SetStats(0);
hWZ_InvMass_lwCut->SetStats(0);
hWW_InvMass_lwCut->SetStats(0);
hDY_InvMass_lwCut->SetStats(0);
hll_InvMass_lwCut->SetStats(0);
hDat_InvMass_lwCut->SetStats(0);
*/

hs_lxy_err->Add(hZZ_lxy_err);
hs_lxy_err->Add(hWZ_lxy_err);
hs_lxy_err->Add(hWW_lxy_err);
hs_lxy_err->Add(hDY_lxy_err);


hs_InvMass->Add(hZZ_InvMass);
hs_InvMass->Add(hWZ_InvMass);
hs_InvMass->Add(hWW_InvMass);
hs_InvMass->Add(hDY_InvMass);

/*
hs_InvMass_lwCut->Add(hZZ_InvMass_lwCut);
hs_InvMass_lwCut->Add(hWZ_InvMass_lwCut);
hs_InvMass_lwCut->Add(hWW_InvMass_lwCut);
hs_InvMass_lwCut->Add(hDY_InvMass_lwCut);
*/
/*
hs_InvMass_lwCut_full->Add(hZZ_InvMass_lwCut);
hs_InvMass_lwCut_full->Add(hWZ_InvMass_lwCut);
hs_InvMass_lwCut_full->Add(hWW_InvMass_lwCut);
hs_InvMass_lwCut_full->Add(hDY_InvMass_lwCut);
hs_InvMass_lwCut_full->Add(hll_InvMass_lwCut);

*/


double m1, m2, m3, mMax;


m1 = hDat_lxy_err->GetMaximum();
m2 = hll_lxy_err->GetMaximum();
m3 = hs_lxy_err->GetMaximum();
mMax = m1;
if (mMax<m2)
{
mMax = m2;
}
if(mMax < m3)
{
mMax = m3;
}
hll_lxy_err->SetMaximum(400000);
hll_lxy_err->SetMinimum(.002);
TCanvas *cs_lxy_err = new TCanvas("cs_lxy_err","cs_lxy_err",10,10,700,700);
TText T; T.SetTextFont(42); T.SetTextAlign(21);
hs_lxy_err->SetTitle("lxy_err");
auto legend_lxy_err2 = new TLegend(0.15,0.87,0.55,0.80);
legend_lxy_err2->SetHeader("#mu^{+}#mu^{-}");


auto legend_lxy_err = new TLegend(0.5,0.7,0.9,0.9);
legend_lxy_err->AddEntry(hll_lxy_err,"H(1000)#rightarrow XX(350), 1 pb","l");
legend_lxy_err->AddEntry(hDY_lxy_err,"Z/#gamma*#rightarrow #mu#mu","f");
legend_lxy_err->AddEntry(hWW_lxy_err,"WW","f");
legend_lxy_err->AddEntry(hWZ_lxy_err,"WZ","f");
legend_lxy_err->AddEntry(hZZ_lxy_err,"ZZ","f");
legend_lxy_err->AddEntry(hDat_lxy_err,"Data","p");
legend_lxy_err->SetFillColor(0);
hDat_lxy_err->SetXTitle("mass [GeV/c^{2}]");
hDat_lxy_err->SetYTitle("Entries");
hll_lxy_err->SetXTitle("L_{xy}/#sigma_{xy}");
hll_lxy_err->GetYaxis()->SetTitleOffset(1.2);
hll_lxy_err->SetYTitle("Entries");
hll_lxy_err->SetTitle("CMS Open Data #sqrt{s}=7 TeV  L = 2.33 fb^{-1}");
TLine *line = new TLine(5,0,5,hll_lxy_err->GetMaximum());
line->SetLineStyle(9);
cs_lxy_err->cd(1); hll_lxy_err->Draw("hist eX0"); cs_lxy_err->Update(); hs_lxy_err->Draw("same hist eX0"); cs_lxy_err->Update(); hDat_lxy_err->Draw("same  eX0"); line->Draw();
// cs->cd(1);  hs_lxy_err->Draw(" hist"); cs->Update(); hDat_lxy_err->Draw("hist same");
legend_lxy_err2->SetFillStyle(0);
legend_lxy_err->SetFillStyle(0);
legend_lxy_err2->SetBorderSize(0);
legend_lxy_err->SetBorderSize(0);
legend_lxy_err->Draw();
legend_lxy_err2->Draw();
gPad->Update();
gPad->SetLogy(1);
gPad->SetTicky(1);
gPad->SetTickx(1);


m1 = hDat_InvMass->GetMaximum();
m2 = hll_InvMass->GetMaximum();
m3 = hs_InvMass->GetMaximum();
mMax = m1;
if (mMax<m2)
{
mMax = m2;
}
if(mMax < m3)
{
mMax = m3;
}
hll_InvMass->SetMaximum(2*mMax);
//hll_InvMass_lwCut->SetMaximum(2*mMax);
TCanvas *cs_InvMass = new TCanvas("cs_InvMass","cs_InvMass",10,10,700,700);
TText T; T.SetTextFont(42); T.SetTextAlign(21);
hs_InvMass->SetTitle("InvMass");
auto legend_InvMass = new TLegend(0.5,0.7,0.9,0.9);
legend_InvMass->AddEntry(hll_InvMass,"H(1000)#rightarrow XX(350), 1 pb","l");
legend_InvMass->AddEntry(hDY_InvMass,"Z/#gamma*#rightarrow #mu#mu","f");
legend_InvMass->AddEntry(hWW_InvMass,"WW","f");
legend_InvMass->AddEntry(hWZ_InvMass,"WZ","f");
legend_InvMass->AddEntry(hZZ_InvMass,"ZZ","f");
legend_InvMass->AddEntry(hDat_InvMass,"Data","p");

legend_InvMass->SetFillColor(0);
hDat_InvMass->SetXTitle("mass [GeV/c^{2}]");
hDat_InvMass->SetYTitle("Entries");
hDat_InvMass->GetYaxis()->SetTitleOffset(1.2);
cs_InvMass->cd(1); hll_InvMass->Draw("hist eX0"); cs_InvMass->Update(); hs_InvMass->Draw("same hist eX0"); cs_InvMass->Update(); hDat_InvMass->Draw("same  eX0");
// cs->cd(1);  hs_InvMass->Draw(" hist"); cs->Update(); hDat_InvMass->Draw("hist same");
legend_InvMass->SetFillStyle(0);
legend_InvMass->SetBorderSize(0);
legend_InvMass->Draw();
gPad->Update();
gPad->SetLogy(1);

TCanvas *cs_InvMass2 = new TCanvas("cs_InvMass2","cs_InvMass2",10,10,700,700);

hDat_InvMass->SetTitle("CMS Open Data #sqrt{s}=7 TeV  L = 2.33 fb^{-1}");
hDat_InvMass->SetXTitle("M_{#mu#mu} [GeV/c^{2}]");
hDat_InvMass->SetYTitle("Entires / (GeV/c^{2})");
hDat_InvMass->SetMarkerStyle(20);
cs_InvMass2->cd(1);
//gStyle->SetErrorX(0);
hDat_InvMass->Draw("e1 ex0");
hDat_InvMass->SetMaximum(200000);
hDat_InvMass->SetMinimum(1);

gPad->SetLogy(1);
 
 
m1 = hDat_InvMass->GetMaximum();
m2 = hll_InvMass->GetMaximum();
m3 = hs_InvMass->GetMaximum();
mMax = m1;
if (mMax<m2)
{
mMax = m2;
}
if(mMax < m3)
{
mMax = m3;
}

TCanvas *cs_InvMass_lwCut = new TCanvas("cs_InvMass_lwCut","cs_InvMass_lwCut",10,10,700,700);
TText T; T.SetTextFont(42); T.SetTextAlign(21);
hs_InvMass_lwCut->SetTitle("InvMass");
auto legend_InvMass_lwCut = new TLegend(0.5,0.7,0.9,0.9);
legend_InvMass_lwCut->AddEntry(hll_InvMass,"H(1000)#rightarrow XX(350), 1 pb","l");
legend_InvMass_lwCut->AddEntry(hDY_InvMass,"Z/#gamma*#rightarrow #mu#mu","f");
legend_InvMass_lwCut->AddEntry(hWW_InvMass,"WW","f");
legend_InvMass_lwCut->AddEntry(hWZ_InvMass,"WZ","f");
legend_InvMass_lwCut->AddEntry(hZZ_InvMass,"ZZ","f");
legend_InvMass_lwCut->AddEntry(hDat_InvMass,"Data","p");

legend_InvMass_lwCut->SetFillColor(0);
hDat_InvMass_lwCut->SetXTitle("mass [GeV/c^{2}]");
hDat_InvMass_lwCut->SetYTitle("Entries");
cs_InvMass_lwCut->cd(1); 
hll_InvMass_lwCut->Draw("hist eX0"); cs_InvMass_lwCut->Update(); hs_InvMass_lwCut->Draw("same hist eX0"); cs_InvMass_lwCut->Update(); hDat_InvMass_lwCut->Draw("same  eX0");
// cs->cd(1);  hs_InvMass->Draw(" hist"); cs->Update(); hDat_InvMass->Draw("hist same");
legend_InvMass->SetFillStyle(0);
legend_InvMass->SetBorderSize(0);
legend_InvMass->Draw();
gPad->Update();
gPad->SetLogy(1);
 
TCanvas *cs_InvMass_lwCut_full = new TCanvas("cs_InvMass_lwCut_full","cs_InvMass_lwCut_full",10,10,700,700);
cs_InvMass_lwCut_full->cd(1); 
hll_InvMass_lwCut->SetFillColor(33);
TText T; T.SetTextFont(42); T.SetTextAlign(21);
hs_InvMass_lwCut_full->SetTitle("InvMass");
auto legend_InvMass_lwCut_full = new TLegend(0.5,0.7,0.9,0.9);
legend_InvMass_lwCut_full->AddEntry(hll_InvMass_lwCut,"H(1000)#rightarrow XX(350), 1 pb","f");
legend_InvMass_lwCut_full->AddEntry(hDY_InvMass,"Z/#gamma*#rightarrow #mu#mu","f");
legend_InvMass_lwCut_full->AddEntry(hWW_InvMass,"WW","f");
legend_InvMass_lwCut_full->AddEntry(hWZ_InvMass,"WZ","f");
legend_InvMass_lwCut_full->AddEntry(hZZ_InvMass,"ZZ","f");


legend_InvMass_lwCut->SetFillColor(0);
hDat_InvMass_lwCut->SetXTitle("mass [GeV/c^{2}]");
hDat_InvMass_lwCut->SetYTitle("Entries");

hs_InvMass_lwCut_full->Draw(" hist eX0"); cs_InvMass_lwCut_full->Update(); 
// cs->cd(1);  hs_InvMass->Draw(" hist"); cs->Update(); hDat_InvMass->Draw("hist same");
legend_InvMass_lwCut_full->SetFillStyle(0);
legend_InvMass_lwCut_full->SetBorderSize(0);
legend_InvMass_lwCut_full->Draw();
gPad->Update();
gPad->SetLogy(1);
 
 
 }
