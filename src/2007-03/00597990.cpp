// roc 2007-03 00597990  unit: seg_00590000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00597990
//
// 00597990  6aff                 push -1
// 00597992  686bc37500           push 0x75c36b
// 00597997  64a100000000         mov eax, dword ptr fs:[0]
// 0059799d  50                   push eax
// 0059799e  64892500000000       mov dword ptr fs:[0], esp
// 005979a5  51                   push ecx
// 005979a6  56                   push esi
// 005979a7  6a28                 push 0x28
// 005979a9  8bf1                 mov esi, ecx
// 005979ab  e858670800           call 0x61e108
// 005979b0  83c404               add esp, 4
// 005979b3  89442404             mov dword ptr [esp + 4], eax
// 005979b7  85c0                 test eax, eax
// 005979b9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005979c1  741f                 je 0x5979e2
// 005979c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005979c7  56                   push esi
// 005979c8  51                   push ecx
// 005979c9  8bc8                 mov ecx, eax
// 005979cb  e8c0fcffff           call 0x597690
// 005979d0  5e                   pop esi
// 005979d1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005979d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005979dc  83c410               add esp, 0x10
// 005979df  c20400               ret 4
// 005979e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005979e6  33c0                 xor eax, eax
// 005979e8  5e                   pop esi
// 005979e9  64890d00000000       mov dword ptr fs:[0], ecx
// 005979f0  83c410               add esp, 0x10
// 005979f3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
