//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Wed May 27 22:48:41 2015 by ROOT version 5.30/02)
//      from the StreamerInfo in file /storage/epp2/t2k/data/nd280/production006/C/fpp/ND280/00010000_00010999/anal/oa_nd_cos_00010252-0000_u6mzlh635zkw_anal_000_v11r31-wg-bugaboo-bsdv01_2.root
//////////////////////////////////////////////////////////


#ifndef ND__TTrueParticle_h
#define ND__TTrueParticle_h
namespace ND {
class TTrueParticle;
} // end of namespace.

#include "TObject.h"
#include "ND__TTrueVertex.h"

namespace ND {
class TTrueParticle : public TObject {

public:
// Nested classes declaration.

public:
// Data Members.
   int         ID;          ///< Trajectoy  Id
   double      Pur;         ///< The purity for matching the rec particle with the true particle
   double      Eff;         ///< The efficiency for matching the rec particle with the true particle
   ND::TTrueVertex Vertex;      ///< True vertex associated to this TrueParticle

   TTrueParticle();
   TTrueParticle(const TTrueParticle & );
   virtual ~TTrueParticle();

   ClassDef(TTrueParticle,2); // Generated by MakeProject.
};
} // namespace
#endif
