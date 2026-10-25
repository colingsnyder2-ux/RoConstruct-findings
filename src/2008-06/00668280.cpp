// from server: 100% by king_originala
// roc 2008-06 00668280  unit: RBX::HUMAN::GettingUp  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668280
//
// 00668280  83ec10               sub esp, 0x10
// 00668283  837c241800           cmp dword ptr [esp + 0x18], 0
// 00668288  0f84a8000000         je 0x668336
// 0066828e  53                   push ebx
// 0066828f  55                   push ebp
// 00668290  56                   push esi
// 00668291  57                   push edi
// 00668292  8d5930               lea ebx, [ecx + 0x30]
// 00668295  8d442428             lea eax, [esp + 0x28]
// 00668299  50                   push eax
// 0066829a  8d4c241c             lea ecx, [esp + 0x1c]
// 0066829e  51                   push ecx
// 0066829f  8bcb                 mov ecx, ebx
// 006682a1  e82afdffff           call 0x667fd0
// 006682a6  8b38                 mov edi, dword ptr [eax]
// 006682a8  8b6804               mov ebp, dword ptr [eax + 4]
// 006682ab  897c2410             mov dword ptr [esp + 0x10], edi
// 006682af  896c2414             mov dword ptr [esp + 0x14], ebp
// 006682b3  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 006682b6  8b4104               mov eax, dword ptr [ecx + 4]
// 006682b9  80781500             cmp byte ptr [eax + 0x15], 0
// 006682bd  8bf1                 mov esi, ecx
// 006682bf  7518                 jne 0x6682d9
// 006682c1  8b542428             mov edx, dword ptr [esp + 0x28]
// 006682c5  3b500c               cmp edx, dword ptr [eax + 0xc]
// 006682c8  7306                 jae 0x6682d0
// 006682ca  8bf0                 mov esi, eax
// 006682cc  8b00                 mov eax, dword ptr [eax]
// 006682ce  eb03                 jmp 0x6682d3
// 006682d0  8b4008               mov eax, dword ptr [eax + 8]
// 006682d3  80781500             cmp byte ptr [eax + 0x15], 0
// 006682d7  74e8                 je 0x6682c1
// 006682d9  8b03                 mov eax, dword ptr [ebx]
// 006682db  85ff                 test edi, edi
// 006682dd  7404                 je 0x6682e3
// 006682df  3bf8                 cmp edi, eax
// 006682e1  7406                 je 0x6682e9
// 006682e3  ff1590288000         call dword ptr [0x802890]
// 006682e9  3bee                 cmp ebp, esi
// 006682eb  7445                 je 0x668332
// 006682ed  85ff                 test edi, edi
// 006682ef  752f                 jne 0x668320
// 006682f1  ff1590288000         call dword ptr [0x802890]
// 006682f7  33c0                 xor eax, eax
// 006682f9  3b6818               cmp ebp, dword ptr [eax + 0x18]
// 006682fc  7506                 jne 0x668304
// 006682fe  ff1590288000         call dword ptr [0x802890]
// 00668304  8b442424             mov eax, dword ptr [esp + 0x24]
// 00668308  394510               cmp dword ptr [ebp + 0x10], eax
// 0066830b  7417                 je 0x668324
// 0066830d  8d4c2410             lea ecx, [esp + 0x10]
// 00668311  e88a5c0200           call 0x68dfa0
// 00668316  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066831a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066831e  eb93                 jmp 0x6682b3
// 00668320  8b07                 mov eax, dword ptr [edi]
// 00668322  ebd5                 jmp 0x6682f9
// 00668324  55                   push ebp
// 00668325  57                   push edi
// 00668326  8d4c2420             lea ecx, [esp + 0x20]
// 0066832a  51                   push ecx
// 0066832b  8bcb                 mov ecx, ebx
// 0066832d  e89eb6eeff           call 0x5539d0
// 00668332  5f                   pop edi
// 00668333  5e                   pop esi
// 00668334  5d                   pop ebp
// 00668335  5b                   pop ebx
// 00668336  83c410               add esp, 0x10
// 00668339  c20800               ret 8

// from server: 96% by Espeon
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
#include <vector>
#include <set>
#include <map>
#include <intrin.h>
namespace RBX {
struct Primitive;
struct Edge;
struct World;
struct Kernel;
struct IStage {
 enum StageType {JOINT_STAGE=0,CLUMP_STAGE=1,KERNEL_STAGE=8};
 virtual ~IStage();
 virtual StageType getStageType()=0;
 virtual void stepWorld(int,int,bool);
 virtual Kernel* getKernel();
 IStage* upstream;
 IStage* downstream;
 IStage* getDownstream(){return downstream;}
};
struct IWorldStage:IStage {
 virtual void onEdgeAdded(Edge*);
 virtual void onEdgeRemoving(Edge*);
 virtual int getMetric(int);
 World* world;
 IWorldStage* getDownstreamWS(){return static_cast<IWorldStage*>(getDownstream());}
};
struct IPipelined {
 virtual ~IPipelined();
 virtual void putInKernel(Kernel*);
 virtual void removeFromKernel();
 IStage* currentStage;
 bool inPipeline()const{return currentStage!=0;}
 void putInPipeline(IStage*);
 bool downstreamOfStage(IStage* s)const{return currentStage->getStageType()>s->getStageType();}
};
struct Primitive:IPipelined {};
struct Edge:IPipelined {
 virtual int getEdgeType()const=0;
 virtual void setPrimitive(int,Primitive*);
 int edgeState;
 Primitive* prim0;
 Primitive* prim1;
 Edge* next0;
 Edge* next1;
 bool inEdgeList;
 Primitive* getPrimitive(int n)const{return (&prim0)[n];}
 Primitive* otherPrimitive(const Primitive*p)const{return p==prim0?prim1:prim0;}
};
struct Joint:Edge {};
struct ClumpStage:IWorldStage {void onPrimitiveAdded(Primitive*);};
struct JointStage:IWorldStage {
 struct JointMap:std::multimap<Primitive*,Joint*> {
  typedef std::multimap<Primitive*,Joint*> Base;
  __declspec(noinline) iterator lower_bound(Primitive* const& p){return Base::lower_bound(p);}
 };
 std::set<Joint*> incompleteJoints;
 JointMap jointMap;
 virtual ~JointStage();
 virtual StageType getStageType(){return JOINT_STAGE;}
 virtual void onEdgeAdded(Edge*);
 virtual void onEdgeRemoving(Edge*);
 ClumpStage* getClumpStage(){return static_cast<ClumpStage*>(getDownstream());}
 void removeFromList(Joint*j){incompleteJoints.erase(j);}
 void removeFromMap(Joint*,Primitive*);
 void moveEdgeToDownstream(Edge*e){getDownstreamWS()->onEdgeAdded(e);}
 bool edgeHasPrimitivesDownstream(Edge*);
 void onPrimitiveAdded(Primitive*);
};

void JointStage::removeFromMap(Joint* j, Primitive* p){
 do {
  if(p==0) break;
  JointMap::iterator pos;
  for(pos=jointMap.lower_bound(p);pos!=jointMap.upper_bound(p);++pos){
   if(pos->second==j){jointMap.erase(pos);return;}
  }
 }while(0);
}
}
