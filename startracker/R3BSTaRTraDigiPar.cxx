#include "R3BSTaRTraDigiPar.h"
#include "FairLogger.h"
#include "TMath.h"

R3BSTaRTraDigiPar::R3BSTaRTraDigiPar(const char* name, const char* title, const char* context)
  : FairParGenericSet(name,title,context)
{
  clear();
}

void R3BSTaRTraDigiPar::putParams(FairParamList* list)
{
  LOG(INFO)<<"-I- R3BSTaRTraDigiPar::putParams() called"<<FairLogger::endl;
  if(!list) return;
//  list->add("max_paddle", (Int_t)nMaxPaddle);
//  list->add("max_plane", (Int_t)nMaxPlane);
}

Bool_t R3BSTaRTraDigiPar::getParams(FairParamList* list)
{
  LOG(INFO)<<"-I- R3BSTaRTraDigiPar::getParams() called"<<FairLogger::endl;
  if (!list) return kFALSE;
  LOG(INFO)<<"-I- R3BSTaRTraDigiPar::getParams() 1 ";
  
//  if (!list->fill("max_paddle", &nMaxPaddle)) return kFALSE;
//  if (!list->fill("max_plane", &nMaxPlane)) return kFALSE;
  return kTRUE;
}


void R3BSTaRTraDigiPar::Print(Option_t *option) const
{
    LOG(INFO)<<"-I- STaRTracker Digi Parameters:"<<FairLogger::endl;
//    LOG(INFO)<<"   Max Paddle   = "<<nMaxPaddle<<FairLogger::endl;
//    LOG(INFO)<<"   Max Plane   = "<<nMaxPlane<<FairLogger::endl;
}

ClassImp(R3BSTaRTraDigiPar);
