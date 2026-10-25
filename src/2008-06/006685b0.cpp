// from server: 91% by king_originala
// roc 2008-06 006685b0  unit: RBX::JointStage  size: 671 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006685b0
//
// 006685b0  55                   push ebp
// 006685b1  8bec                 mov ebp, esp
// 006685b3  83e4f8               and esp, 0xfffffff8
// 006685b6  64a100000000         mov eax, dword ptr fs:[0]
// 006685bc  6aff                 push -1
// 006685be  6820c37d00           push 0x7dc320
// 006685c3  50                   push eax
// 006685c4  64892500000000       mov dword ptr fs:[0], esp
// 006685cb  83ec40               sub esp, 0x40
// 006685ce  53                   push ebx
// 006685cf  56                   push esi
// 006685d0  8b7508               mov esi, dword ptr [ebp + 8]
// 006685d3  57                   push edi
// 006685d4  8bf9                 mov edi, ecx
// 006685d6  57                   push edi
// 006685d7  8bce                 mov ecx, esi
// 006685d9  e852d2fdff           call 0x645830
// 006685de  8b4f08               mov ecx, dword ptr [edi + 8]
// 006685e1  56                   push esi
// 006685e2  e8f944feff           call 0x64cae0
// 006685e7  6a04                 push 4
// 006685e9  e832830300           call 0x6a0920
// 006685ee  33c9                 xor ecx, ecx
// 006685f0  83c404               add esp, 4
// 006685f3  3bc1                 cmp eax, ecx
// 006685f5  7408                 je 0x6685ff
// 006685f7  8d542430             lea edx, [esp + 0x30]
// 006685fb  8910                 mov dword ptr [eax], edx
// 006685fd  eb02                 jmp 0x668601
// 006685ff  33c0                 xor eax, eax
// 00668601  89442430             mov dword ptr [esp + 0x30], eax
// 00668605  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00668609  894c2440             mov dword ptr [esp + 0x40], ecx
// 0066860d  894c2444             mov dword ptr [esp + 0x44], ecx
// 00668611  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00668614  8b4104               mov eax, dword ptr [ecx + 4]
// 00668617  80781500             cmp byte ptr [eax + 0x15], 0
// 0066861b  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00668623  7514                 jne 0x668639
// 00668625  39700c               cmp dword ptr [eax + 0xc], esi
// 00668628  7305                 jae 0x66862f
// 0066862a  8b4008               mov eax, dword ptr [eax + 8]
// 0066862d  eb04                 jmp 0x668633
// 0066862f  8bc8                 mov ecx, eax
// 00668631  8b00                 mov eax, dword ptr [eax]
// 00668633  80781500             cmp byte ptr [eax + 0x15], 0
// 00668637  74ec                 je 0x668625
// 00668639  8b7730               mov esi, dword ptr [edi + 0x30]
// 0066863c  89742418             mov dword ptr [esp + 0x18], esi
// 00668640  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00668644  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00668647  8b4104               mov eax, dword ptr [ecx + 4]
// 0066864a  80781500             cmp byte ptr [eax + 0x15], 0
// 0066864e  8bd9                 mov ebx, ecx
// 00668650  7517                 jne 0x668669
// 00668652  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00668655  3b480c               cmp ecx, dword ptr [eax + 0xc]
// 00668658  7306                 jae 0x668660
// 0066865a  8bd8                 mov ebx, eax
// 0066865c  8b00                 mov eax, dword ptr [eax]
// 0066865e  eb03                 jmp 0x668663
// 00668660  8b4008               mov eax, dword ptr [eax + 8]
// 00668663  80781500             cmp byte ptr [eax + 0x15], 0
// 00668667  74e9                 je 0x668652
// 00668669  8b4730               mov eax, dword ptr [edi + 0x30]
// 0066866c  85f6                 test esi, esi
// 0066866e  7404                 je 0x668674
// 00668670  3bf0                 cmp esi, eax
// 00668672  7406                 je 0x66867a
// 00668674  ff1590288000         call dword ptr [0x802890]
// 0066867a  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 0066867e  0f84c2000000         je 0x668746
// 00668684  85f6                 test esi, esi
// 00668686  0f85af000000         jne 0x66873b
// 0066868c  ff1590288000         call dword ptr [0x802890]
// 00668692  33c0                 xor eax, eax
// 00668694  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00668698  3b5018               cmp edx, dword ptr [eax + 0x18]
// 0066869b  7506                 jne 0x6686a3
// 0066869d  ff1590288000         call dword ptr [0x802890]
// 006686a3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006686a7  83c010               add eax, 0x10
// 006686aa  89442414             mov dword ptr [esp + 0x14], eax
// 006686ae  8b00                 mov eax, dword ptr [eax]
// 006686b0  8b480c               mov ecx, dword ptr [eax + 0xc]
// 006686b3  83790400             cmp dword ptr [ecx + 4], 0
// 006686b7  8b5810               mov ebx, dword ptr [eax + 0x10]
// 006686ba  746d                 je 0x668729
// 006686bc  837b0400             cmp dword ptr [ebx + 4], 0
// 006686c0  7467                 je 0x668729
// 006686c2  8b07                 mov eax, dword ptr [edi]
// 006686c4  8b7104               mov esi, dword ptr [ecx + 4]
// 006686c7  8b5004               mov edx, dword ptr [eax + 4]
// 006686ca  8bcf                 mov ecx, edi
// 006686cc  ffd2                 call edx
// 006686ce  8b16                 mov edx, dword ptr [esi]
// 006686d0  8b5204               mov edx, dword ptr [edx + 4]
// 006686d3  8bce                 mov ecx, esi
// 006686d5  8944240c             mov dword ptr [esp + 0xc], eax
// 006686d9  ffd2                 call edx
// 006686db  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006686df  3bc1                 cmp eax, ecx
// 006686e1  7e46                 jle 0x668729
// 006686e3  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006686e6  8b01                 mov eax, dword ptr [ecx]
// 006686e8  8b5004               mov edx, dword ptr [eax + 4]
// 006686eb  ffd2                 call edx
// 006686ed  8bf0                 mov esi, eax
// 006686ef  8b07                 mov eax, dword ptr [edi]
// 006686f1  8b5004               mov edx, dword ptr [eax + 4]
// 006686f4  8bcf                 mov ecx, edi
// 006686f6  ffd2                 call edx
// 006686f8  3bf0                 cmp esi, eax
// 006686fa  7e2d                 jle 0x668729
// 006686fc  8b442418             mov eax, dword ptr [esp + 0x18]
// 00668700  85c0                 test eax, eax
// 00668702  753e                 jne 0x668742
// 00668704  ff1590288000         call dword ptr [0x802890]
// 0066870a  33c0                 xor eax, eax
// 0066870c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00668710  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00668713  7506                 jne 0x66871b
// 00668715  ff1590288000         call dword ptr [0x802890]
// 0066871b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066871f  52                   push edx
// 00668720  8d4c2434             lea ecx, [esp + 0x34]
// 00668724  e8778cdbff           call 0x4213a0
// 00668729  8d4c2418             lea ecx, [esp + 0x18]
// 0066872d  e86e580200           call 0x68dfa0
// 00668732  8b742418             mov esi, dword ptr [esp + 0x18]
// 00668736  e909ffffff           jmp 0x668644
// 0066873b  8b06                 mov eax, dword ptr [esi]
// 0066873d  e952ffffff           jmp 0x668694
// 00668742  8b00                 mov eax, dword ptr [eax]
// 00668744  ebc6                 jmp 0x66870c
// 00668746  8b442440             mov eax, dword ptr [esp + 0x40]
// 0066874a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0066874e  2bc1                 sub eax, ecx
// 00668750  c1f802               sar eax, 2
// 00668753  33db                 xor ebx, ebx
// 00668755  85c0                 test eax, eax
// 00668757  0f86b6000000         jbe 0x668813
// 0066875d  3bd8                 cmp ebx, eax
// 0066875f  720a                 jb 0x66876b
// 00668761  ff1590288000         call dword ptr [0x802890]
// 00668767  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0066876b  8b3499               mov esi, dword ptr [ecx + ebx*4]
// 0066876e  8d442414             lea eax, [esp + 0x14]
// 00668772  50                   push eax
// 00668773  8d4c2424             lea ecx, [esp + 0x24]
// 00668777  51                   push ecx
// 00668778  8d4f10               lea ecx, [edi + 0x10]
// 0066877b  8974241c             mov dword ptr [esp + 0x1c], esi
// 0066877f  e82c51e4ff           call 0x4ad8b0
// 00668784  8b442420             mov eax, dword ptr [esp + 0x20]
// 00668788  8b542424             mov edx, dword ptr [esp + 0x24]
// 0066878c  89442418             mov dword ptr [esp + 0x18], eax
// 00668790  8954241c             mov dword ptr [esp + 0x1c], edx
// 00668794  85c0                 test eax, eax
// 00668796  7406                 je 0x66879e
// 00668798  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0066879c  7406                 je 0x6687a4
// 0066879e  ff1590288000         call dword ptr [0x802890]
// 006687a4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006687a8  3944241c             cmp dword ptr [esp + 0x1c], eax
// 006687ac  740f                 je 0x6687bd
// 006687ae  8d4c2418             lea ecx, [esp + 0x18]
// 006687b2  e8890bf8ff           call 0x5e9340
// 006687b7  8b442418             mov eax, dword ptr [esp + 0x18]
// 006687bb  ebd7                 jmp 0x668794
// 006687bd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006687c1  8b542420             mov edx, dword ptr [esp + 0x20]
// 006687c5  50                   push eax
// 006687c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006687ca  50                   push eax
// 006687cb  51                   push ecx
// 006687cc  52                   push edx
// 006687cd  8d44241c             lea eax, [esp + 0x1c]
// 006687d1  50                   push eax
// 006687d2  8d4f10               lea ecx, [edi + 0x10]
// 006687d5  e85625feff           call 0x64ad30
// 006687da  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006687dd  51                   push ecx
// 006687de  56                   push esi
// 006687df  8bcf                 mov ecx, edi
// 006687e1  e89afaffff           call 0x668280
// 006687e6  8b5610               mov edx, dword ptr [esi + 0x10]
// 006687e9  52                   push edx
// 006687ea  56                   push esi
// 006687eb  8bcf                 mov ecx, edi
// 006687ed  e88efaffff           call 0x668280
// 006687f2  8b4f08               mov ecx, dword ptr [edi + 8]
// 006687f5  8b01                 mov eax, dword ptr [ecx]
// 006687f7  8b5010               mov edx, dword ptr [eax + 0x10]
// 006687fa  56                   push esi
// 006687fb  ffd2                 call edx
// 006687fd  8b442440             mov eax, dword ptr [esp + 0x40]
// 00668801  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00668805  2bc1                 sub eax, ecx
// 00668807  43                   inc ebx
// 00668808  c1f802               sar eax, 2
// 0066880b  3bd8                 cmp ebx, eax
// 0066880d  0f8258ffffff         jb 0x66876b
// 00668813  85c9                 test ecx, ecx
// 00668815  7409                 je 0x668820
// 00668817  51                   push ecx
// 00668818  e85d7e0300           call 0x6a067a
// 0066881d  83c404               add esp, 4
// 00668820  33c0                 xor eax, eax
// 00668822  8944243c             mov dword ptr [esp + 0x3c], eax
// 00668826  89442440             mov dword ptr [esp + 0x40], eax
// 0066882a  89442444             mov dword ptr [esp + 0x44], eax
// 0066882e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00668832  50                   push eax
// 00668833  e8427e0300           call 0x6a067a
// 00668838  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0066883c  83c404               add esp, 4
// 0066883f  5f                   pop edi
// 00668840  5e                   pop esi
// 00668841  64890d00000000       mov dword ptr fs:[0], ecx
// 00668848  5b                   pop ebx
// 00668849  8be5                 mov esp, ebp
// 0066884b  5d                   pop ebp
// 0066884c  c20400               ret 4

// from server: 86% by EspClaude
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
 typedef std::multimap<Primitive*,Joint*> JointMap;
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
static inline bool exDownstreamOfStage(IPipelined*p,IStage*s){
 _ReadWriteBarrier();
 IStage* current=p->currentStage;
 IStage::StageType other=s->getStageType();
 IStage::StageType mine=current->getStageType();
 return mine>other;
}
bool JointStage::edgeHasPrimitivesDownstream(Edge*e){
 Primitive* prim0=e->getPrimitive(0);
 Primitive* prim1=e->getPrimitive(1);
 return prim0->inPipeline()&&prim1->inPipeline()&&exDownstreamOfStage(prim0,this)&&prim1->downstreamOfStage(this);
}
void JointStage::onPrimitiveAdded(Primitive* p)
{
	p->putInPipeline(this);

	getClumpStage()->onPrimitiveAdded(p);

	std::vector<Joint*> jointsToPush;

	JointMap::iterator pos;

	for (pos = jointMap.lower_bound(p); pos != jointMap.upper_bound(p); ++pos) {
		if (edgeHasPrimitivesDownstream(pos->second)) {
			jointsToPush.push_back(pos->second);
		}
	}

	for (unsigned int i = 0; i < jointsToPush.size(); ++i) {
		Joint* j = jointsToPush[i];

		removeFromList(j);
		removeFromMap(j, j->getPrimitive(0));
		removeFromMap(j, j->getPrimitive(1));

		moveEdgeToDownstream(j);
	}
}


}
