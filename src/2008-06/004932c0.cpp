// roc 2008-06 004932c0  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004932c0
//
// 004932c0  6aff                 push -1
// 004932c2  6888667c00           push 0x7c6688
// 004932c7  64a100000000         mov eax, dword ptr fs:[0]
// 004932cd  50                   push eax
// 004932ce  64892500000000       mov dword ptr fs:[0], esp
// 004932d5  51                   push ecx
// 004932d6  56                   push esi
// 004932d7  8bf1                 mov esi, ecx
// 004932d9  89742404             mov dword ptr [esp + 4], esi
// 004932dd  e8dec7ffff           call 0x48fac0
// 004932e2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004932ea  e851ecffff           call 0x491f40
// 004932ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004932f3  89461c               mov dword ptr [esi + 0x1c], eax
// 004932f6  c706941e8200         mov dword ptr [esi], 0x821e94
// 004932fc  c74610841e8200       mov dword ptr [esi + 0x10], 0x821e84
// 00493303  c746147c1e8200       mov dword ptr [esi + 0x14], 0x821e7c
// 0049330a  c74620741e8200       mov dword ptr [esi + 0x20], 0x821e74
// 00493311  c74624641e8200       mov dword ptr [esi + 0x24], 0x821e64
// 00493318  c74644541e8200       mov dword ptr [esi + 0x44], 0x821e54
// 0049331f  c74664441e8200       mov dword ptr [esi + 0x64], 0x821e44
// 00493326  c78684000000341e8200 mov dword ptr [esi + 0x84], 0x821e34
// 00493330  c786a4000000241e8200 mov dword ptr [esi + 0xa4], 0x821e24
// 0049333a  c786c4000000141e8200 mov dword ptr [esi + 0xc4], 0x821e14
// 00493344  c786300100000c1e8200 mov dword ptr [esi + 0x130], 0x821e0c
// 0049334e  8bc6                 mov eax, esi
// 00493350  5e                   pop esi
// 00493351  64890d00000000       mov dword ptr fs:[0], ecx
// 00493358  83c410               add esp, 0x10
// 0049335b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
