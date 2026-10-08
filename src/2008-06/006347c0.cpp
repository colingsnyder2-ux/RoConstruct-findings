// roc 2008-06 006347c0  unit: G3D::VCoordinateFrame::V?$Value::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006347c0
//
// 006347c0  6aff                 push -1
// 006347c2  683bf47b00           push 0x7bf43b
// 006347c7  64a100000000         mov eax, dword ptr fs:[0]
// 006347cd  50                   push eax
// 006347ce  64892500000000       mov dword ptr fs:[0], esp
// 006347d5  51                   push ecx
// 006347d6  56                   push esi
// 006347d7  6a38                 push 0x38
// 006347d9  8bf1                 mov esi, ecx
// 006347db  e840c10600           call 0x6a0920
// 006347e0  83c404               add esp, 4
// 006347e3  89442404             mov dword ptr [esp + 4], eax
// 006347e7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006347ef  85c0                 test eax, eax
// 006347f1  741f                 je 0x634812
// 006347f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006347f7  56                   push esi
// 006347f8  51                   push ecx
// 006347f9  8bc8                 mov ecx, eax
// 006347fb  e8c0feffff           call 0x6346c0
// 00634800  5e                   pop esi
// 00634801  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634805  64890d00000000       mov dword ptr fs:[0], ecx
// 0063480c  83c410               add esp, 0x10
// 0063480f  c20400               ret 4
// 00634812  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634816  33c0                 xor eax, eax
// 00634818  5e                   pop esi
// 00634819  64890d00000000       mov dword ptr fs:[0], ecx
// 00634820  83c410               add esp, 0x10
// 00634823  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
