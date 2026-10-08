// roc 2008-06 004b1d50  unit: RBX::VPartInstance::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1d50
//
// 004b1d50  6aff                 push -1
// 004b1d52  683bf47b00           push 0x7bf43b
// 004b1d57  64a100000000         mov eax, dword ptr fs:[0]
// 004b1d5d  50                   push eax
// 004b1d5e  64892500000000       mov dword ptr fs:[0], esp
// 004b1d65  51                   push ecx
// 004b1d66  56                   push esi
// 004b1d67  6a38                 push 0x38
// 004b1d69  8bf1                 mov esi, ecx
// 004b1d6b  e8b0eb1e00           call 0x6a0920
// 004b1d70  83c404               add esp, 4
// 004b1d73  89442404             mov dword ptr [esp + 4], eax
// 004b1d77  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b1d7f  85c0                 test eax, eax
// 004b1d81  741f                 je 0x4b1da2
// 004b1d83  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b1d87  56                   push esi
// 004b1d88  51                   push ecx
// 004b1d89  8bc8                 mov ecx, eax
// 004b1d8b  e8d0feffff           call 0x4b1c60
// 004b1d90  5e                   pop esi
// 004b1d91  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b1d95  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1d9c  83c410               add esp, 0x10
// 004b1d9f  c20400               ret 4
// 004b1da2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1da6  33c0                 xor eax, eax
// 004b1da8  5e                   pop esi
// 004b1da9  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1db0  83c410               add esp, 0x10
// 004b1db3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
