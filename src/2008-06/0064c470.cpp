// from server: 68% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <set>
#include <deque>
struct Assembly;
struct Stage {virtual ~Stage();virtual int getStageType()=0;Stage*upstream;Stage*downstream;};
struct Pipelined {
 virtual ~Pipelined();virtual void putInKernel();virtual void removeFromKernel();
 Stage*currentStage;
 bool inPipeline()const{return currentStage!=0;}
 bool inOrDownstreamOfStage(Stage*stage)const{return currentStage->getStageType()>=stage->getStageType();}
 bool downstreamOfStage(Stage*stage)const{return currentStage->getStageType()>stage->getStageType();}
};
struct Edge:public Pipelined {int edgeState;virtual int getEdgeType()const=0;};
// Native Velocity constructor only copies two Vector3::zero values; it cannot throw.
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
struct SleepStage:public Stage {
 char prefix[0x140-12];std::set<Assembly*>sleepingChecking;
 char reserved[0x1d8-0x160];int visitStamp;bool throttling;
 int getState(Assembly*a){return a->inPipeline()&&a->inOrDownstreamOfStage(this)?a->sleepInfo->state:0;}
 bool edgeIsAwake(Edge*e){return e->inOrDownstreamOfStage(this);}
 bool isAffecting(Edge*e){int state=e->edgeState;return e->getEdgeType()!=1||state==3||state==4;}
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
      if(throttling||getState(other)!=3){
       if(other->visitStamp!=visitStamp){other->visitStamp=visitStamp;other->depth=depth+1;pending.push_back(other);}
      }
     }else if(other->inPipeline()&&other->inOrDownstreamOfStage(this)&&other->sleepInfo->state==5){
      stateToSet(getState(other))->erase(other);
      sleepingChecking.insert(other);
      static Velocity zero;
      other->rootClump->rootPrimitive->body->setVelocity(zero);
      if(other->downstreamOfStage(this))static_cast<SimJobStage*>(downstream)->onAssemblyRemoving(other);
      other->sleepInfo->sleepCount=0;
      other->sleepInfo->state=4;
     }
    }
   }
  }
 }
}
