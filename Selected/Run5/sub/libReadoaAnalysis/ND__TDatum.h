//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Wed May 27 22:48:41 2015 by ROOT version 5.30/02)
//      from the StreamerInfo in file /storage/epp2/t2k/data/nd280/production006/C/fpp/ND280/00010000_00010999/anal/oa_nd_cos_00010252-0000_u6mzlh635zkw_anal_000_v11r31-wg-bugaboo-bsdv01_2.root
//////////////////////////////////////////////////////////


#ifndef ND__TDatum_h
#define ND__TDatum_h
namespace ND {
class TDatum;
} // end of namespace.

#include "TNamed.h"
#include "ND__TDatum.h"

namespace ND {
class TDatum : public TNamed {

public:
// Nested classes declaration.

public:
// Data Members.
   ND::TDatum* fParent;     //

   TDatum();
   TDatum(const TDatum & );
   virtual ~TDatum();

   ClassDef(TDatum,3); // Generated by MakeProject.
};
} // namespace
#endif
