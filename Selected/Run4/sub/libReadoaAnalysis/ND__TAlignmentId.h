//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Wed May 27 22:44:17 2015 by ROOT version 5.30/02)
//      from the StreamerInfo in file /storage/epp2/t2k/data/nd280/production006/B/rdp/ND280/00009000_00009999/anal/oa_nd_cos_00009000-0001_l5imkgmhu4io_anal_000_v11r31-wg-bugaboo-bsdv01_2.root
//////////////////////////////////////////////////////////


#ifndef ND__TAlignmentId_h
#define ND__TAlignmentId_h
namespace ND {
class TAlignmentId;
} // end of namespace.

#include "ND__TSHAHashValue.h"
#include "Riostream.h"
#include <string>

namespace ND {
class TAlignmentId : public ND::TSHAHashValue {

public:
// Nested classes declaration.

public:
// Data Members.
   string      fDocString;    //

   TAlignmentId();
   TAlignmentId(const TAlignmentId & );
   virtual ~TAlignmentId();

};
} // namespace
#endif
