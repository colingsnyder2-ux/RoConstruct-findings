// roc 2008-06 00633b30  unit: RBX::H$1?sIntValue::V?$Value::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633b30
//
// 00633b30  6aff                 push -1
// 00633b32  683bf47b00           push 0x7bf43b
// 00633b37  64a100000000         mov eax, dword ptr fs:[0]
// 00633b3d  50                   push eax
// 00633b3e  64892500000000       mov dword ptr fs:[0], esp
// 00633b45  51                   push ecx
// 00633b46  56                   push esi
// 00633b47  6a38                 push 0x38
// 00633b49  8bf1                 mov esi, ecx
// 00633b4b  e8d0cd0600           call 0x6a0920
// 00633b50  83c404               add esp, 4
// 00633b53  89442404             mov dword ptr [esp + 4], eax
// 00633b57  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00633b5f  85c0                 test eax, eax
// 00633b61  741f                 je 0x633b82
// 00633b63  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00633b67  56                   push esi
// 00633b68  51                   push ecx
// 00633b69  8bc8                 mov ecx, eax
// 00633b6b  e850ffffff           call 0x633ac0
// 00633b70  5e                   pop esi
// 00633b71  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00633b75  64890d00000000       mov dword ptr fs:[0], ecx
// 00633b7c  83c410               add esp, 0x10
// 00633b7f  c20400               ret 4
// 00633b82  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633b86  33c0                 xor eax, eax
// 00633b88  5e                   pop esi
// 00633b89  64890d00000000       mov dword ptr fs:[0], ecx
// 00633b90  83c410               add esp, 0x10
// 00633b93  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
