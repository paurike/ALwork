//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Wed May 27 22:46:43 2015 by ROOT version 5.30/02)
//      from the StreamerInfo in file /storage/epp2/t2k/data/nd280/production006/C/fpp/ND280/00010000_00010999/anal/oa_nd_cos_00010252-0000_u6mzlh635zkw_anal_000_v11r31-wg-bugaboo-bsdv01_2.root
//////////////////////////////////////////////////////////


#ifndef ND__TTrueVertex_h
#define ND__TTrueVertex_h
namespace ND {
class TTrueVertex;
} // end of namespace.

#include "TObject.h"
#include "TLorentzVector.h"

namespace ND {
class TTrueVertex : public TObject {

public:
// Nested classes declaration.

public:
// Data Members.
   TLorentzVector Position;    //
   Int_t          ID;          //
   double         Pur;         //
   double         Eff;         //

   TTrueVertex();
   TTrueVertex(const TTrueVertex & );
   virtual ~TTrueVertex();

   ClassDef(TTrueVertex,2); // Generated by MakeProject.
};
} // namespace
#endif
