// from server: 69% by king_originala
// from server: 62% by colin
// roc 2008-06 005ae280  unit: RBX::VScriptContext::?$BoundFuncDesc  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ae280
//
// 005ae280  55                   push ebp
// 005ae281  8bec                 mov ebp, esp
// 005ae283  6aff                 push -1
// 005ae285  6850337d00           push 0x7d3350
// 005ae28a  64a100000000         mov eax, dword ptr fs:[0]
// 005ae290  50                   push eax
// 005ae291  64892500000000       mov dword ptr fs:[0], esp
// 005ae298  83ec50               sub esp, 0x50
// 005ae29b  53                   push ebx
// 005ae29c  56                   push esi
// 005ae29d  8bf1                 mov esi, ecx
// 005ae29f  83be3801000000       cmp dword ptr [esi + 0x138], 0
// 005ae2a6  57                   push edi
// 005ae2a7  8965f0               mov dword ptr [ebp - 0x10], esp
// 005ae2aa  8975e8               mov dword ptr [ebp - 0x18], esi
// 005ae2ad  0f84c8010000         je 0x5ae47b
// 005ae2b3  8d8e3c010000         lea ecx, [esi + 0x13c]
// 005ae2b9  e8a25dfeff           call 0x594060
// 005ae2be  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 005ae2c4  50                   push eax
// 005ae2c5  8d4dd4               lea ecx, [ebp - 0x2c]
// 005ae2c8  51                   push ecx
// 005ae2c9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005ae2d0  e8db59feff           call 0x593cb0
// 005ae2d5  83c408               add esp, 8
// 005ae2d8  8b08                 mov ecx, dword ptr [eax]
// 005ae2da  c645fc01             mov byte ptr [ebp - 4], 1
// 005ae2de  e82d5ffeff           call 0x594210
// 005ae2e3  8b7dd8               mov edi, dword ptr [ebp - 0x28]
// 005ae2e6  c645fc00             mov byte ptr [ebp - 4], 0
// 005ae2ea  85ff                 test edi, edi
// 005ae2ec  742a                 je 0x5ae318
// 005ae2ee  8d5704               lea edx, [edi + 4]
// 005ae2f1  83c8ff               or eax, 0xffffffff
// 005ae2f4  f00fc102             lock xadd dword ptr [edx], eax
// 005ae2f8  751e                 jne 0x5ae318
// 005ae2fa  8b17                 mov edx, dword ptr [edi]
// 005ae2fc  8b4204               mov eax, dword ptr [edx + 4]
// 005ae2ff  8bcf                 mov ecx, edi
// 005ae301  ffd0                 call eax
// 005ae303  8d4f08               lea ecx, [edi + 8]
// 005ae306  83caff               or edx, 0xffffffff
// 005ae309  f00fc111             lock xadd dword ptr [ecx], edx
// 005ae30d  7509                 jne 0x5ae318
// 005ae30f  8b07                 mov eax, dword ptr [edi]
// 005ae311  8b5008               mov edx, dword ptr [eax + 8]
// 005ae314  8bcf                 mov ecx, edi
// 005ae316  ffd2                 call edx
// 005ae318  8d865c010000         lea eax, [esi + 0x15c]
// 005ae31e  50                   push eax
// 005ae31f  8d4da4               lea ecx, [ebp - 0x5c]
// 005ae322  e829e7ffff           call 0x5aca50
// 005ae327  8b7dbc               mov edi, dword ptr [ebp - 0x44]
// 005ae32a  8b5da4               mov ebx, dword ptr [ebp - 0x5c]
// 005ae32d  b800d05a00           mov eax, 0x5ad000
// 005ae332  8bd0                 mov edx, eax
// 005ae334  8b07                 mov eax, dword ptr [edi]
// 005ae336  83ec10               sub esp, 0x10
// 005ae339  8945d8               mov dword ptr [ebp - 0x28], eax
// 005ae33c  8bc4                 mov eax, esp
// 005ae33e  8910                 mov dword ptr [eax], edx
// 005ae340  8b55d8               mov edx, dword ptr [ebp - 0x28]
// 005ae343  57                   push edi
// 005ae344  33c9                 xor ecx, ecx
// 005ae346  894804               mov dword ptr [eax + 4], ecx
// 005ae349  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 005ae34c  53                   push ebx
// 005ae34d  897008               mov dword ptr [eax + 8], esi
// 005ae350  52                   push edx
// 005ae351  89480c               mov dword ptr [eax + 0xc], ecx
// 005ae354  8d45c4               lea eax, [ebp - 0x3c]
// 005ae357  53                   push ebx
// 005ae358  50                   push eax
// 005ae359  c645fc02             mov byte ptr [ebp - 4], 2
// 005ae35d  e8eee0ffff           call 0x5ac450
// 005ae362  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 005ae368  83c424               add esp, 0x24
// 005ae36b  c786a801000000000000 mov dword ptr [esi + 0x1a8], 0
// 005ae375  85ff                 test edi, edi
// 005ae377  7411                 je 0x5ae38a
// 005ae379  8d4f04               lea ecx, [edi + 4]
// 005ae37c  e80feeffff           call 0x5ad190
// 005ae381  57                   push edi
// 005ae382  e8f3220f00           call 0x6a067a
// 005ae387  83c404               add esp, 4
// 005ae38a  8d4da4               lea ecx, [ebp - 0x5c]
// 005ae38d  c645fc00             mov byte ptr [ebp - 4], 0
// 005ae391  e89ace0900           call 0x64b230
// 005ae396  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005ae39d  eb49                 jmp 0x5ae3e8

// from server: 59% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <set>
#include <algorithm>
#include <exception>
#include <intrin.h>
struct Script;
struct lua_State;
struct RefCount {
 virtual void unused()=0; virtual void dispose()=0; virtual void destroy()=0;
 volatile long strong,weak;
 void weak_release(){if(_InterlockedDecrement(&weak)==0)destroy();}
 void release(){if(_InterlockedDecrement(&strong)==0){dispose();weak_release();}}
};
struct Count {
 RefCount* count;
 ~Count(){if(count)count->release();}
};
template<class T> struct Shared {
 T* object; Count count;
 T* operator->()const{return object;}
};
struct ThreadRef {
 char storage[32];
 void reset();
 struct Node {void eraseAllRefs(); static Shared<Node> get(lua_State*);};
};
struct WaitingThreads {void clear();};
struct YieldingThreads {void* context; WaitingThreads waitingThreads; ~YieldingThreads(){waitingThreads.clear();}};
struct LuaAllocator {void getHeapStats(size_t&,size_t&,size_t&,size_t&)const; void clearHeapMax();};
struct StandardOut {static Shared<StandardOut> singleton(); void __cdecl print(int,const char*,...);};
extern "C" void lua_close(lua_State*);
extern int contextCount;
class __multiple_inheritance S;
struct Placeholder {};
struct Bound {void(S::*function)(Script*); S* object; Placeholder arg;
 void operator()(Script*p)const{(object->*function)(p);}
};
struct InstanceRegion {virtual ~InstanceRegion(); char unmodeled[0x12c];};
struct Service {};
struct RunService; struct RunTransition; struct Heartbeat;
template<class T,class E> struct Listener {virtual void onEvent(const T*,E)=0; virtual ~Listener(){};};
class S : public InstanceRegion, public Service, public Listener<RunService,RunTransition>, public Listener<RunService,Heartbeat> {
 lua_State* globalState;
 ThreadRef commandLineSandbox;
 std::set<Script*> scripts;
 char interveningMembers[0x1a8-0x15c-sizeof(std::set<Script*>)];
 YieldingThreads* yieldEvent;
 char otherMembers[0x1f0-0x1ac];
 LuaAllocator* allocator;
 public: void disassociateState(Script*); void closeState();
};
void S::closeState(){
 if(globalState){
  commandLineSandbox.reset();
  try{
   ThreadRef::Node::get(globalState)->eraseAllRefs();
   std::set<Script*> copy=scripts;
   Bound bound={&S::disassociateState,this,Placeholder()};
   std::for_each(copy.begin(),copy.end(),bound);
   YieldingThreads* old=yieldEvent; yieldEvent=0; delete old;
  }catch(std::exception&e){StandardOut::singleton()->print(3,"Exception thrown while cleaning up Lua: %s",e.what());}
  lua_close(globalState); --contextCount;
  size_t heapSize,heapCount,maxHeapSize,maxHeapCount;
  allocator->getHeapStats(heapSize,heapCount,maxHeapSize,maxHeapCount);
  allocator->clearHeapMax();
  if(contextCount==0 && (heapSize>0 || heapCount>0)) StandardOut::singleton()->print(3,"Script memory leaks: %d bytes, %d blocks",heapSize,heapCount);
  globalState=0;
 }
}
