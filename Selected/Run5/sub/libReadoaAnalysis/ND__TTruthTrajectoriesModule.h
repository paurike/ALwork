//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Wed May 27 22:48:41 2015 by ROOT version 5.30/02)
//      from the StreamerInfo in file /storage/epp2/t2k/data/nd280/production006/C/fpp/ND280/00010000_00010999/anal/oa_nd_cos_00010252-0000_u6mzlh635zkw_anal_000_v11r31-wg-bugaboo-bsdv01_2.root
//////////////////////////////////////////////////////////


#ifndef ND__TTruthTrajectoriesModule_h
#define ND__TTruthTrajectoriesModule_h
namespace ND {
class TTruthTrajectoriesModule;
} // end of namespace.

#include "ND__TAnalysisTruthModuleBase.h"
#include "Riostream.h"
#include <set>
#include "TClonesArray.h"
#include "TObject.h"
#include <string>
#include "TLorentzVector.h"
#include <vector>
#include "TVector3.h"

namespace ND {
class TTruthTrajectoriesModule : public ND::TAnalysisTruthModuleBase {

public:
// Nested classes forward declaration.
class TTruthTrajectory;

public:
// Nested classes declaration.
class TTruthTrajectory : public TObject {

public:
// Nested classes declaration.

public:
// Data Members.
   Int_t       ID;          ///< Trajectory's ID number. Uniquely identifies this trajectory within the event. Used by other oaAnalysis modules to reference trajectories.
   Int_t       PDG;         ///< Particle PDG code
   string      Name;        ///< Particle name
   Int_t       Category;    ///< Classifier of the particle type
   TLorentzVector InitMomentum;    ///< The Initial momentum of the particle at creation [MeV].
   TLorentzVector InitPosition;    ///< Initial Position at which the particle was created [mm].
   TLorentzVector FinalPosition;    ///< Final Position at which the particle stopped or left the simulation [mm].
   Int_t          ParentID;         ///< Parent particle's Trajectory ID. If this is a primary trajectory, the ParentID = 0.
   Int_t          PrimaryID;        ///< ID of the primary particle at the top of this particle's parent chain. If this is a primary trajectory, then PrimaryID = ID.
   double         Mass;             ///< Mass of the particle [MeV].
   int            Charge;           ///< Charge in units of |e|/3. (e.g. an electron has charge -3)
   vector<int>    TraceSubdetectors;    //
   vector<bool>   TraceInActive;        //
   vector<TLorentzVector> TraceEntrancePosition;    //
   vector<TLorentzVector> TraceExitPosition;        //
   vector<TVector3>       TraceEntranceMomentum;    //
   vector<TVector3>       TraceExitMomentum;        //
   Int_t                  InitSubdetector;          //
   Int_t                  FinalSubdetector;         //
   Bool_t                 EnteredSubdetector[13];    ///< DEPRECATED - use TraceSubdetectors
   Bool_t                 ExitedSubdetector[13];     ///< DEPRECATED - use TraceSubdetectors
   TLorentzVector         EntrancePosition[13];      ///< DEPRECATED - use TraceEntrancePosition
   TLorentzVector         ExitPosition[13];          ///< DEPRECATED - use TraceEntrancePosition
   TVector3               EntranceMomentum[13];      ///< DEPRECATED - use TraceEntrancePosition
   TVector3               ExitMomentum[13];          ///< DEPRECATED - use TraceEntrancePosition

   TTruthTrajectory();
   TTruthTrajectory(const TTruthTrajectory & );
   virtual ~TTruthTrajectory();

   ClassDef(TTruthTrajectory,2); // Generated by MakeProject.
};

public:
// Data Members.
   UInt_t      fMaxNTrajectories;    ///< The maximum number of trajectories that can be saved from a single event. Initialised by the constructor.
   Double_t    fMinLength;           ///< Minimum Length of Trajectories that will be saved in mm. All primary particles will be saved regardless of this.
   Bool_t      fSaveOnlyP0DTrackerECALTrajectories;    ///< Whether to save all trajectories, or only those which intersect the P0D, Tracker or ECals.
   Bool_t      fSaveParentChain;                       ///< Whether saving a trajectory should also trigger the saving of all the trajectories in its parent chain.
   std::set<int> fSaveList;                              ///< List of the trajectory IDs which are to be saved from the current event.
   Int_t         fNTraj;                                 ///< [branch] Total number of trajectories saved from the event 
   Int_t         fNTrajLepton;                           ///< [branch] Number of Charged Lepton trajectories saved from the event
   Int_t         fNTrajBaryon;                           ///< [branch] Number of Charged Baryon Trajectories saved from the event
   Int_t         fNTrajMeson;                            ///< [branch] Number of Charged Meson Trajectories saved from the event
   Int_t         fNTrajPhoton;                           ///< [branch] Number of Photon Trajectories saved from the event
   Int_t         fNTrajOtherCharged;                     ///< [branch] Number of Other Charged Trajectories saved from the event
   Int_t         fNTrajOtherNeutral;                     ///< [branch] Number of Other Neutral Trajectories saved from the event
   Int_t         fNTrajOther;                            ///< [branch] Number of Any Other Trajectories saved from the event
   TClonesArray* fTrajectories;                          //

   TTruthTrajectoriesModule();
   TTruthTrajectoriesModule(const TTruthTrajectoriesModule & );
   virtual ~TTruthTrajectoriesModule();

   ClassDef(TTruthTrajectoriesModule,2); // Generated by MakeProject.
};
} // namespace
#endif
