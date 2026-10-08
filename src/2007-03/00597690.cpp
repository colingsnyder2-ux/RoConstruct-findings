// roc 2007-03 00597690  unit: seg_00590000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00597690
//
// 00597690  6aff                 push -1
// 00597692  68f8bc7500           push 0x75bcf8
// 00597697  64a100000000         mov eax, dword ptr fs:[0]
// 0059769d  50                   push eax
// 0059769e  64892500000000       mov dword ptr fs:[0], esp
// 005976a5  51                   push ecx
// 005976a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005976aa  56                   push esi
// 005976ab  8bf1                 mov esi, ecx
// 005976ad  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005976b1  89742404             mov dword ptr [esp + 4], esi
// 005976b5  c7067c647800         mov dword ptr [esi], 0x78647c
// 005976bb  894604               mov dword ptr [esi + 4], eax
// 005976be  894e08               mov dword ptr [esi + 8], ecx
// 005976c1  8d542418             lea edx, [esp + 0x18]
// 005976c5  52                   push edx
// 005976c6  8d44241c             lea eax, [esp + 0x1c]
// 005976ca  50                   push eax
// 005976cb  8d4e10               lea ecx, [esi + 0x10]
// 005976ce  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005976d6  e865880400           call 0x5dff40
// 005976db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005976df  c706241b7b00         mov dword ptr [esi], 0x7b1b24
// 005976e5  8bc6                 mov eax, esi
// 005976e7  5e                   pop esi
// 005976e8  64890d00000000       mov dword ptr fs:[0], ecx
// 005976ef  83c410               add esp, 0x10
// 005976f2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
