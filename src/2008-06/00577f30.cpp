// roc 2008-06 00577f30  unit: RBX::VInstance::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577f30
//
// 00577f30  6aff                 push -1
// 00577f32  683bf47b00           push 0x7bf43b
// 00577f37  64a100000000         mov eax, dword ptr fs:[0]
// 00577f3d  50                   push eax
// 00577f3e  64892500000000       mov dword ptr fs:[0], esp
// 00577f45  51                   push ecx
// 00577f46  56                   push esi
// 00577f47  6a38                 push 0x38
// 00577f49  8bf1                 mov esi, ecx
// 00577f4b  e8d0891200           call 0x6a0920
// 00577f50  83c404               add esp, 4
// 00577f53  89442404             mov dword ptr [esp + 4], eax
// 00577f57  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00577f5f  85c0                 test eax, eax
// 00577f61  741f                 je 0x577f82
// 00577f63  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00577f67  56                   push esi
// 00577f68  51                   push ecx
// 00577f69  8bc8                 mov ecx, eax
// 00577f6b  e850ffffff           call 0x577ec0
// 00577f70  5e                   pop esi
// 00577f71  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00577f75  64890d00000000       mov dword ptr fs:[0], ecx
// 00577f7c  83c410               add esp, 0x10
// 00577f7f  c20400               ret 4
// 00577f82  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577f86  33c0                 xor eax, eax
// 00577f88  5e                   pop esi
// 00577f89  64890d00000000       mov dword ptr fs:[0], ecx
// 00577f90  83c410               add esp, 0x10
// 00577f93  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
