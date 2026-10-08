// roc 2010-06 00596570  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00596570
//
// 00596570  6aff                 push -1
// 00596572  68901e9900           push 0x991e90
// 00596577  64a100000000         mov eax, dword ptr fs:[0]
// 0059657d  50                   push eax
// 0059657e  64892500000000       mov dword ptr fs:[0], esp
// 00596585  51                   push ecx
// 00596586  56                   push esi
// 00596587  8bf1                 mov esi, ecx
// 00596589  89742404             mov dword ptr [esp + 4], esi
// 0059658d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00596590  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00596598  85c9                 test ecx, ecx
// 0059659a  7408                 je 0x5965a4
// 0059659c  8b01                 mov eax, dword ptr [ecx]
// 0059659e  8b10                 mov edx, dword ptr [eax]
// 005965a0  6a01                 push 1
// 005965a2  ffd2                 call edx
// 005965a4  8d4e18               lea ecx, [esi + 0x18]
// 005965a7  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005965af  e80c40f1ff           call 0x4aa5c0
// 005965b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005965b8  c7061809a000         mov dword ptr [esi], 0xa00918
// 005965be  5e                   pop esi
// 005965bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005965c6  83c410               add esp, 0x10
// 005965c9  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
