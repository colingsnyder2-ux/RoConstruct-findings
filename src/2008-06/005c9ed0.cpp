// roc 2008-06 005c9ed0  unit: RBX::Stats::TypedMemItem  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9ed0
//
// 005c9ed0  6aff                 push -1
// 005c9ed2  68f8517d00           push 0x7d51f8
// 005c9ed7  64a100000000         mov eax, dword ptr fs:[0]
// 005c9edd  50                   push eax
// 005c9ede  64892500000000       mov dword ptr fs:[0], esp
// 005c9ee5  51                   push ecx
// 005c9ee6  56                   push esi
// 005c9ee7  8bf1                 mov esi, ecx
// 005c9ee9  89742404             mov dword ptr [esp + 4], esi
// 005c9eed  e8cefbffff           call 0x5c9ac0
// 005c9ef2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c9efa  e8e1f6ffff           call 0x5c95e0
// 005c9eff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c9f03  89461c               mov dword ptr [esi + 0x1c], eax
// 005c9f06  c706449e8300         mov dword ptr [esi], 0x839e44
// 005c9f0c  c74610349e8300       mov dword ptr [esi + 0x10], 0x839e34
// 005c9f13  c746142c9e8300       mov dword ptr [esi + 0x14], 0x839e2c
// 005c9f1a  c74620249e8300       mov dword ptr [esi + 0x20], 0x839e24
// 005c9f21  c74624149e8300       mov dword ptr [esi + 0x24], 0x839e14
// 005c9f28  c74644049e8300       mov dword ptr [esi + 0x44], 0x839e04
// 005c9f2f  c74664f49d8300       mov dword ptr [esi + 0x64], 0x839df4
// 005c9f36  c78684000000e49d8300 mov dword ptr [esi + 0x84], 0x839de4
// 005c9f40  c786a4000000d49d8300 mov dword ptr [esi + 0xa4], 0x839dd4
// 005c9f4a  c786c4000000c49d8300 mov dword ptr [esi + 0xc4], 0x839dc4
// 005c9f54  8bc6                 mov eax, esi
// 005c9f56  5e                   pop esi
// 005c9f57  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9f5e  83c410               add esp, 0x10
// 005c9f61  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
