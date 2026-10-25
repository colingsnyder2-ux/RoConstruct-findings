// from server: 100% by EspClaude
// roc 2008-06 004f1990  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f1990
//
// 004f1990  6aff                 push -1
// 004f1992  6833ae7c00           push 0x7cae33
// 004f1997  64a100000000         mov eax, dword ptr fs:[0]
// 004f199d  50                   push eax
// 004f199e  64892500000000       mov dword ptr fs:[0], esp
// 004f19a5  83ec08               sub esp, 8
// 004f19a8  56                   push esi
// 004f19a9  8bf1                 mov esi, ecx
// 004f19ab  8d442407             lea eax, [esp + 7]
// 004f19af  50                   push eax
// 004f19b0  8d4c240b             lea ecx, [esp + 0xb]
// 004f19b4  51                   push ecx
// 004f19b5  8bce                 mov ecx, esi
// 004f19b7  89742410             mov dword ptr [esp + 0x10], esi
// 004f19bb  e800f6ffff           call 0x4f0fc0
// 004f19c0  8d542407             lea edx, [esp + 7]
// 004f19c4  52                   push edx
// 004f19c5  8d44240b             lea eax, [esp + 0xb]
// 004f19c9  8d4e20               lea ecx, [esi + 0x20]
// 004f19cc  50                   push eax
// 004f19cd  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004f19d5  e8e6f5ffff           call 0x4f0fc0
// 004f19da  8d4e40               lea ecx, [esi + 0x40]
// 004f19dd  c644241401           mov byte ptr [esp + 0x14], 1
// 004f19e2  e889160700           call 0x563070
// 004f19e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f19eb  8bc6                 mov eax, esi
// 004f19ed  5e                   pop esi
// 004f19ee  64890d00000000       mov dword ptr fs:[0], ecx
// 004f19f5  83c414               add esp, 0x14
// 004f19f8  c3                   ret 

#include <set>
struct Obj { Obj(); int pad[4]; };
struct S {
    std::set<int> a;
    std::set<int> b;
    Obj c;
    S();
};
S::S() {}
