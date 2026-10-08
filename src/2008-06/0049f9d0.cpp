// roc 2008-06 0049f9d0  unit: RBX::Network::VClient::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f9d0
//
// 0049f9d0  6aff                 push -1
// 0049f9d2  683bf47b00           push 0x7bf43b
// 0049f9d7  64a100000000         mov eax, dword ptr fs:[0]
// 0049f9dd  50                   push eax
// 0049f9de  64892500000000       mov dword ptr fs:[0], esp
// 0049f9e5  51                   push ecx
// 0049f9e6  56                   push esi
// 0049f9e7  6a38                 push 0x38
// 0049f9e9  8bf1                 mov esi, ecx
// 0049f9eb  e8300f2000           call 0x6a0920
// 0049f9f0  83c404               add esp, 4
// 0049f9f3  89442404             mov dword ptr [esp + 4], eax
// 0049f9f7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049f9ff  85c0                 test eax, eax
// 0049fa01  741f                 je 0x49fa22
// 0049fa03  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049fa07  56                   push esi
// 0049fa08  51                   push ecx
// 0049fa09  8bc8                 mov ecx, eax
// 0049fa0b  e850ffffff           call 0x49f960
// 0049fa10  5e                   pop esi
// 0049fa11  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049fa15  64890d00000000       mov dword ptr fs:[0], ecx
// 0049fa1c  83c410               add esp, 0x10
// 0049fa1f  c20400               ret 4
// 0049fa22  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049fa26  33c0                 xor eax, eax
// 0049fa28  5e                   pop esi
// 0049fa29  64890d00000000       mov dword ptr fs:[0], ecx
// 0049fa30  83c410               add esp, 0x10
// 0049fa33  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
