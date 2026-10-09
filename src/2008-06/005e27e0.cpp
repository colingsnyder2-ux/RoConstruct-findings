// roc 2008-06 005e27e0  unit: RBX::JointInstance  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e27e0
//
// 005e27e0  56                   push esi
// 005e27e1  8bf1                 mov esi, ecx
// 005e27e3  e8f88ff7ff           call 0x55b7e0
// 005e27e8  c7063ce28300         mov dword ptr [esi], 0x83e23c
// 005e27ee  c746102ce28300       mov dword ptr [esi + 0x10], 0x83e22c
// 005e27f5  c7461424e28300       mov dword ptr [esi + 0x14], 0x83e224
// 005e27fc  c746201ce28300       mov dword ptr [esi + 0x20], 0x83e21c
// 005e2803  c746240ce28300       mov dword ptr [esi + 0x24], 0x83e20c
// 005e280a  c74644fce18300       mov dword ptr [esi + 0x44], 0x83e1fc
// 005e2811  c74664ece18300       mov dword ptr [esi + 0x64], 0x83e1ec
// 005e2818  c78684000000dce18300 mov dword ptr [esi + 0x84], 0x83e1dc
// 005e2822  c786a4000000cce18300 mov dword ptr [esi + 0xa4], 0x83e1cc
// 005e282c  c786c4000000bce18300 mov dword ptr [esi + 0xc4], 0x83e1bc
// 005e2836  8bc6                 mov eax, esi
// 005e2838  5e                   pop esi
// 005e2839  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
