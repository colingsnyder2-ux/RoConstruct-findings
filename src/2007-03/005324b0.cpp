// roc 2007-03 005324b0  unit: seg_00530000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005324b0
//
// 005324b0  6aff                 push -1
// 005324b2  686bc37500           push 0x75c36b
// 005324b7  64a100000000         mov eax, dword ptr fs:[0]
// 005324bd  50                   push eax
// 005324be  64892500000000       mov dword ptr fs:[0], esp
// 005324c5  51                   push ecx
// 005324c6  56                   push esi
// 005324c7  6a28                 push 0x28
// 005324c9  8bf1                 mov esi, ecx
// 005324cb  e838bc0e00           call 0x61e108
// 005324d0  83c404               add esp, 4
// 005324d3  89442404             mov dword ptr [esp + 4], eax
// 005324d7  85c0                 test eax, eax
// 005324d9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005324e1  741f                 je 0x532502
// 005324e3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005324e7  56                   push esi
// 005324e8  51                   push ecx
// 005324e9  8bc8                 mov ecx, eax
// 005324eb  e8d0f9ffff           call 0x531ec0
// 005324f0  5e                   pop esi
// 005324f1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005324f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005324fc  83c410               add esp, 0x10
// 005324ff  c20400               ret 4
// 00532502  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00532506  33c0                 xor eax, eax
// 00532508  5e                   pop esi
// 00532509  64890d00000000       mov dword ptr fs:[0], ecx
// 00532510  83c410               add esp, 0x10
// 00532513  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
