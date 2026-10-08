// roc 2008-06 00634bc0  unit: G3D::VColor3::V?$Value::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634bc0
//
// 00634bc0  6aff                 push -1
// 00634bc2  683bf47b00           push 0x7bf43b
// 00634bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00634bcd  50                   push eax
// 00634bce  64892500000000       mov dword ptr fs:[0], esp
// 00634bd5  51                   push ecx
// 00634bd6  56                   push esi
// 00634bd7  6a38                 push 0x38
// 00634bd9  8bf1                 mov esi, ecx
// 00634bdb  e840bd0600           call 0x6a0920
// 00634be0  83c404               add esp, 4
// 00634be3  89442404             mov dword ptr [esp + 4], eax
// 00634be7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00634bef  85c0                 test eax, eax
// 00634bf1  741f                 je 0x634c12
// 00634bf3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00634bf7  56                   push esi
// 00634bf8  51                   push ecx
// 00634bf9  8bc8                 mov ecx, eax
// 00634bfb  e850ffffff           call 0x634b50
// 00634c00  5e                   pop esi
// 00634c01  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634c05  64890d00000000       mov dword ptr fs:[0], ecx
// 00634c0c  83c410               add esp, 0x10
// 00634c0f  c20400               ret 4
// 00634c12  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634c16  33c0                 xor eax, eax
// 00634c18  5e                   pop esi
// 00634c19  64890d00000000       mov dword ptr fs:[0], ecx
// 00634c20  83c410               add esp, 0x10
// 00634c23  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
