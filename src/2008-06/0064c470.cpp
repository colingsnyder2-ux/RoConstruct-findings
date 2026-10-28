// from server: 85% by coldek
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <set>
#include <intrin.h>
#include <deque>
struct Assembly;
struct Stage {virtual ~Stage();virtual int getStageType()=0;Stage*upstream;Stage*downstream;};
struct Pipelined {
 virtual ~Pipelined();virtual void putInKernel();virtual void removeFromKernel();
 Stage*currentStage;
 __forceinline bool inPipeline()const{return currentStage!=0;}
 __forceinline bool inOrDownstreamOfStage(Stage*stage)const{return currentStage->getStageType()>=stage->getStageType();}
 __forceinline bool downstreamOfStage(Stage*stage)const{return currentStage->getStageType()>stage->getStageType();}
};
struct Edge:public Pipelined {int edgeState;virtual int getEdgeType()const=0;};
struct Velocity {float linear[3],rotational[3];Velocity() throw();};
struct Body {void setVelocity(const Velocity&);};
struct Primitive {char prefix[0xa0];Body*body;};
struct Clump {char prefix[0x1c];Primitive*rootPrimitive;};
struct SleepInfo {int state,sleepCount;};
struct EdgeArray {Edge**data;int count,capacity;};
struct Assembly:public Pipelined {
 char prefix[0x18-8];SleepInfo*sleepInfo;char reserved[0x24-0x1c];Clump*rootClump;
 char reserved28[0x44-0x28];int visitStamp,depth;
 EdgeArray&getExternalEdges();Assembly*otherAssembly(Edge*)const;
};
struct SimJobStage:public Stage {void onAssemblyRemoving(Assembly*);};
static __forceinline Stage* readCurrent(Pipelined*p){_ReadWriteBarrier();return p->currentStage;}
struct SleepStage:public Stage {
 __forceinline bool currentAtLeast(Stage*s){return s->getStageType()>=getStageType();}
 __forceinline bool currentDownstream(Stage*s){return s->getStageType()>getStageType();}
 char prefix[0x140-12];std::set<Assembly*>sleepingChecking;
 char reserved[0x1d8-0x160];int visitStamp;bool throttling;
 __forceinline int getState(Assembly*a){return a->inPipeline()&&currentAtLeast(readCurrent(a))?a->sleepInfo->state:0;}
 __forceinline bool edgeIsAwake(Edge*e){return currentAtLeast(readCurrent(e));}
 __forceinline bool isAffecting(Edge*e){int state=e->edgeState;return e->getEdgeType()!=1||state==3||state==4;}
 int getStateOut(Assembly*); // thiscall int helper ABI observed at 0064a5b0
 void changeAssemblyState(Assembly*,int);void wakeEdge(Edge*);
 std::set<Assembly*>*stateToSet(int);
 void wakeNeighbors(Assembly*,std::deque<Assembly*>&,int);
};
void SleepStage::wakeNeighbors(Assembly*assembly,std::deque<Assembly*>&pending,int maxDepth){
 int state=getState(assembly);
 int depth=assembly->depth;
 if(state!=0){
  if(state!=3)changeAssemblyState(assembly,3);
  const EdgeArray&edges=assembly->getExternalEdges();
  for(int i=0;i<edges.count;++i){
   Edge*edge=edges.data[i];
   if(edgeIsAwake(edge)){
    wakeEdge(edge);
    if(isAffecting(edge)){
     Assembly*other=assembly->otherAssembly(edge);
     if(depth<maxDepth){
      if(throttling||getStateOut(other)!=3){
       if(other->visitStamp!=visitStamp){other->visitStamp=visitStamp;other->depth=depth+1;pending.push_back(other);}
      }
     }else if(other->inPipeline()&&currentAtLeast(readCurrent(other))&&other->sleepInfo->state==5){
      stateToSet(getState(other))->erase(other);
      sleepingChecking.insert(other);
      static Velocity zero;
      other->rootClump->rootPrimitive->body->setVelocity(zero);
      if(currentDownstream(readCurrent(other)))static_cast<SimJobStage*>(downstream)->onAssemblyRemoving(other);
      other->sleepInfo->sleepCount=0;
      other->sleepInfo->state=4;
     }
    }
   }
  }
 }
}