{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Mar 12 00:50:56 2019) by ROOT version5.34/38
   TCanvas *c1 = new TCanvas("c1", "c1",10,31,700,500);
   gStyle->SetOptFit(1);
   c1->Range(-45,-14.4375,405,129.9375);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *hist = new TH1F("hist","The Distribution of Scattering Angle of 875 Balls",100,0,360);
   hist->SetBinContent(6,49);
   hist->SetBinContent(12,16);
   hist->SetBinContent(17,34);
   hist->SetBinContent(23,43);
   hist->SetBinContent(28,68);
   hist->SetBinContent(34,63);
   hist->SetBinContent(39,62);
   hist->SetBinContent(45,92);
   hist->SetBinContent(51,75);
   hist->SetBinContent(56,110);
   hist->SetBinContent(62,61);
   hist->SetBinContent(67,52);
   hist->SetBinContent(73,61);
   hist->SetBinContent(78,36);
   hist->SetBinContent(84,30);
   hist->SetBinContent(89,15);
   hist->SetBinContent(95,8);
   hist->SetEntries(17);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 17     ");
   text = ptstats->AddText("Mean  =    170");
   text = ptstats->AddText("RMS   =  77.15");
   text = ptstats->AddText("#chi^{2} / ndf = 51.67 / 14");
   text = ptstats->AddText("Constant =  82.4 #pm 3.8 ");
   text = ptstats->AddText("Mean     = 172.2 #pm 3.3 ");
   text = ptstats->AddText("Sigma    = 83.19 #pm 3.18 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hist->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hist);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",0,360);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(51.67139);
   PrevFitTMP->SetNDF(14);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,82.39837);
   PrevFitTMP->SetParError(0,3.796523);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,172.227);
   PrevFitTMP->SetParError(1,3.338051);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,83.19334);
   PrevFitTMP->SetParError(2,3.18335);
   PrevFitTMP->SetParLimits(2,0,772.4023);
   hist->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hist->SetLineColor(ci);
   hist->GetXaxis()->SetTitle("#Theta_{i})  (degrees)");
   hist->GetXaxis()->SetLabelFont(42);
   hist->GetXaxis()->SetLabelSize(0.035);
   hist->GetXaxis()->SetTitleSize(0.035);
   hist->GetXaxis()->SetTitleFont(42);
   hist->GetYaxis()->SetTitle("dN_{i}  (times)");
   hist->GetYaxis()->SetLabelFont(42);
   hist->GetYaxis()->SetLabelSize(0.035);
   hist->GetYaxis()->SetTitleSize(0.035);
   hist->GetYaxis()->SetTitleFont(42);
   hist->GetZaxis()->SetLabelFont(42);
   hist->GetZaxis()->SetLabelSize(0.035);
   hist->GetZaxis()->SetTitleSize(0.035);
   hist->GetZaxis()->SetTitleFont(42);
   hist->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.9342405,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("The Distribution of Scattering Angle of 875 Balls");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
