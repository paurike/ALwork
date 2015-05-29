//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Wed May 27 22:42:41 2015 by ROOT version 5.30/02)
//      from the StreamerInfo in file /storage/epp2/t2k/data/nd280/production006/B/rdp/ND280/00009000_00009999/anal/oa_nd_cos_00009000-0001_l5imkgmhu4io_anal_000_v11r31-wg-bugaboo-bsdv01_2.root
//////////////////////////////////////////////////////////


#ifndef ND__TND280Event_h
#define ND__TND280Event_h
namespace ND {
class TND280Event;
} // end of namespace.

#include "ND__TDataVector.h"
#include "ND__TND280Context.h"
#include "ND__TSHAHashValue.h"
#include "ND__TAlignmentId.h"
#include "ND__TND280Event.h"

namespace ND {
class TND280Event : public ND::TDataVector {

public:
// Nested classes forward declaration.
class Header;

public:
// Nested classes declaration.
class Header {

public:
// Nested classes declaration.

public:
// Data Members.
   UInt_t      fRecordType;    //
   UInt_t      fTimeStamp;     //
   UInt_t      fRunType;       //
   UInt_t      fErrorCode;     //
   ULong64_t   fTriggerWord;    //
   UInt_t      fMCMSecond;      //
   UInt_t      fMCMSubSecond;    //
   UInt_t      fMCMTimeSinceBusy;    //
   UInt_t      fP0DSecond;           //
   UInt_t      fP0DSubSecond;        //
   UInt_t      fP0DTimeSinceBusy;    //
   UInt_t      fTPCSecond;           //
   UInt_t      fTPCSubSecond;        //
   UInt_t      fTPCTimeSinceBusy;    //
   UInt_t      fFGDSecond;           //
   UInt_t      fFGDSubSecond;        //
   UInt_t      fFGDTimeSinceBusy;    //
   UInt_t      fECalSecond;          //
   UInt_t      fECalSubSecond;       //
   UInt_t      fECalTimeSinceBusy;    //
   UInt_t      fSMRDSecond;           //
   UInt_t      fSMRDSubSecond;        //
   UInt_t      fSMRDTimeSinceBusy;    //
   UInt_t      fINGRIDSecond;         //
   UInt_t      fINGRIDSubSecond;      //
   UInt_t      fINGRIDTimeSinceBusy;    //
   ULong64_t   fCTMTriggerPattern[3];    //
   ULong64_t   fFGDCTMTriggerPattern[3];    //

   Header();
   Header(const Header & );
   virtual ~Header();

   ClassDef(Header,3); // Generated by MakeProject.
};

public:
// Data Members.
   ND::TND280Context fContext;    //
   ND::TSHAHashValue fGeometryHash;    //
   ND::TAlignmentId  fAlignmentId;     //
   ND::TND280Event::Header fHeader;          //

   TND280Event();
   TND280Event(const TND280Event & );
   virtual ~TND280Event();

   ClassDef(TND280Event,9); // Generated by MakeProject.
};
} // namespace
#endif
