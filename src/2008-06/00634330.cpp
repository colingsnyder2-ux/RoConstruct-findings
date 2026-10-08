// roc 2008-06 00634330  unit: G3D::VVector3::V?$Value::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634330
//
// 00634330  6aff                 push -1
// 00634332  683bf47b00           push 0x7bf43b
// 00634337  64a100000000         mov eax, dword ptr fs:[0]
// 0063433d  50                   push eax
// 0063433e  64892500000000       mov dword ptr fs:[0], esp
// 00634345  51                   push ecx
// 00634346  56                   push esi
// 00634347  6a38                 push 0x38
// 00634349  8bf1                 mov esi, ecx
// 0063434b  e8d0c50600           call 0x6a0920
// 00634350  83c404               add esp, 4
// 00634353  89442404             mov dword ptr [esp + 4], eax
// 00634357  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063435f  85c0                 test eax, eax
// 00634361  741f                 je 0x634382
// 00634363  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00634367  56                   push esi
// 00634368  51                   push ecx
// 00634369  8bc8                 mov ecx, eax
// 0063436b  e850ffffff           call 0x6342c0
// 00634370  5e                   pop esi
// 00634371  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634375  64890d00000000       mov dword ptr fs:[0], ecx
// 0063437c  83c410               add esp, 0x10
// 0063437f  c20400               ret 4
// 00634382  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634386  33c0                 xor eax, eax
// 00634388  5e                   pop esi
// 00634389  64890d00000000       mov dword ptr fs:[0], ecx
// 00634390  83c410               add esp, 0x10
// 00634393  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
