// from server: 100% by colin
// roc 2008-06 004b3c90  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3c90
//
// 004b3c90  6aff                 push -1
// 004b3c92  68b8877c00           push 0x7c87b8
// 004b3c97  64a100000000         mov eax, dword ptr fs:[0]
// 004b3c9d  50                   push eax
// 004b3c9e  64892500000000       mov dword ptr fs:[0], esp
// 004b3ca5  83ec08               sub esp, 8
// 004b3ca8  56                   push esi
// 004b3ca9  8bf1                 mov esi, ecx
// 004b3cab  8d442407             lea eax, [esp + 7]
// 004b3caf  50                   push eax
// 004b3cb0  8d4c240b             lea ecx, [esp + 0xb]
// 004b3cb4  51                   push ecx
// 004b3cb5  8bce                 mov ecx, esi
// 004b3cb7  89742410             mov dword ptr [esp + 0x10], esi
// 004b3cbb  e8705e1e00           call 0x699b30
// 004b3cc0  8b1568248000         mov edx, dword ptr [0x802468]
// 004b3cc6  a160248000           mov eax, dword ptr [0x802460]
// 004b3ccb  52                   push edx
// 004b3ccc  50                   push eax
// 004b3ccd  6880000000           push 0x80
// 004b3cd2  6a1c                 push 0x1c
// 004b3cd4  8d4e20               lea ecx, [esi + 0x20]
// 004b3cd7  51                   push ecx
// 004b3cd8  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004b3ce0  e8b3d81e00           call 0x6a1598
// 004b3ce5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b3ce9  c786200e000001000000 mov dword ptr [esi + 0xe20], 1
// 004b3cf3  8bc6                 mov eax, esi
// 004b3cf5  5e                   pop esi
// 004b3cf6  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3cfd  83c414               add esp, 0x14
// 004b3d00  c3                   ret 

#include <set>
struct E { int v[8]; };
bool operator<(const E&, const E&);
typedef void (__thiscall *ElementRoutine)(void*);
extern ElementRoutine elementConstructor;
extern ElementRoutine elementDestructor;
void __stdcall constructArray(void*, unsigned int, unsigned int, ElementRoutine, ElementRoutine);
struct S : std::set<E> {
 char elements[0xE00];
 int flag;
 S();
};
S::S() {
 constructArray(elements,0x1C,0x80,elementConstructor,elementDestructor);
 flag=1;
}
