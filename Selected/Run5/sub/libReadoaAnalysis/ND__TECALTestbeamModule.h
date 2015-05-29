//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Wed May 27 22:48:41 2015 by ROOT version 5.30/02)
//      from the StreamerInfo in file /storage/epp2/t2k/data/nd280/production006/C/fpp/ND280/00010000_00010999/anal/oa_nd_cos_00010252-0000_u6mzlh635zkw_anal_000_v11r31-wg-bugaboo-bsdv01_2.root
//////////////////////////////////////////////////////////


#ifndef ND__TECALTestbeamModule_h
#define ND__TECALTestbeamModule_h
namespace ND {
class TECALTestbeamModule;
} // end of namespace.

#include "ND__TAnalysisReconModuleBase.h"

namespace ND {
class TECALTestbeamModule : public ND::TAnalysisReconModuleBase {

public:
// Nested classes declaration.

public:
// Data Members.
   int         Cerenkov1Lo[23];    //
   int         Cerenkov2Lo[23];    //
   int         Cerenkov1Hi[23];    //
   int         Cerenkov2Hi[23];    //
   int         TOF[23];            //
   int         TriggerWord;        //
   int         PIDResult;          //
   double      Momentum;           //
   int         Angle;              //

   TECALTestbeamModule();
   TECALTestbeamModule(const TECALTestbeamModule & );
   virtual ~TECALTestbeamModule();

   ClassDef(TECALTestbeamModule,2); // Generated by MakeProject.
};
} // namespace
#endif
