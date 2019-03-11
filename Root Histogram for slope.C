{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Mar 12 00:38:03 2019) by ROOT version5.34/38
   TCanvas *c1 = new TCanvas("c1", "c1",10,31,700,500);
   gStyle->SetOptFit(1);
   c1->Range(-0.125,-26.64375,1.125,239.7938);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *hist = new TH1F("hist","The Distribution of Angles Summed Symmetric to Y Axis",100,0,1);
   hist->SetBinContent(18,57);
   hist->SetBinContent(35,32);
   hist->SetBinContent(50,64);
   hist->SetBinContent(65,80);
   hist->SetBinContent(77,130);
   hist->SetBinContent(87,115);
   hist->SetBinContent(94,124);
   hist->SetBinContent(99,203);
   hist->SetBinContent(101,150);
   hist->SetEntries(9);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.815,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 9      ");
   text = ptstats->AddText("Mean  =   0.77");
   text = ptstats->AddText("RMS   = 0.2393");
   text = ptstats->AddText("#chi^{2} / ndf = 53.57 / 6");
   text = ptstats->AddText("p0       = 0.1393 #pm 6.8698 ");
   text = ptstats->AddText("p1       =   144 #pm 11.8 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1);
   ptstats->Draw();
   hist->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hist);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","pol1",0,1);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(53.57067);
   PrevFitTMP->SetNDF(6);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,0.1392695);
   PrevFitTMP->SetParError(0,6.869778);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,144.0144);
   PrevFitTMP->SetParError(1,11.78448);
   PrevFitTMP->SetParLimits(1,0,0);
   hist->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hist->SetLineColor(ci);
   hist->GetXaxis()->SetTitle("sin(#Theta_{i}/2)");
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
   text = pt->AddText("The Distribution of Angles Summed Symmetric to Y Axis");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
