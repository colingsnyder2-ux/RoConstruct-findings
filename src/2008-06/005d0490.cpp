// roc 2008-06 005d0490  unit: RBX::HopperBin::W4BinType::?$EnumDesc  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0490
//
// 005d0490  6aff                 push -1
// 005d0492  6888827d00           push 0x7d8288
// 005d0497  64a100000000         mov eax, dword ptr fs:[0]
// 005d049d  50                   push eax
// 005d049e  64892500000000       mov dword ptr fs:[0], esp
// 005d04a5  51                   push ecx
// 005d04a6  56                   push esi
// 005d04a7  8bf1                 mov esi, ecx
// 005d04a9  89742404             mov dword ptr [esp + 4], esi
// 005d04ad  e8beefffff           call 0x5cf470
// 005d04b2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d04ba  e8f104ffff           call 0x5c09b0
// 005d04bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d04c3  89461c               mov dword ptr [esi + 0x1c], eax
// 005d04c6  c706bcaf8300         mov dword ptr [esi], 0x83afbc
// 005d04cc  c74610acaf8300       mov dword ptr [esi + 0x10], 0x83afac
// 005d04d3  c74614a4af8300       mov dword ptr [esi + 0x14], 0x83afa4
// 005d04da  c746209caf8300       mov dword ptr [esi + 0x20], 0x83af9c
// 005d04e1  c746248caf8300       mov dword ptr [esi + 0x24], 0x83af8c
// 005d04e8  c746447caf8300       mov dword ptr [esi + 0x44], 0x83af7c
// 005d04ef  c746646caf8300       mov dword ptr [esi + 0x64], 0x83af6c
// 005d04f6  c786840000005caf8300 mov dword ptr [esi + 0x84], 0x83af5c
// 005d0500  c786a40000004caf8300 mov dword ptr [esi + 0xa4], 0x83af4c
// 005d050a  c786c40000003caf8300 mov dword ptr [esi + 0xc4], 0x83af3c
// 005d0514  c7863001000034af8300 mov dword ptr [esi + 0x130], 0x83af34
// 005d051e  8bc6                 mov eax, esi
// 005d0520  5e                   pop esi
// 005d0521  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0528  83c410               add esp, 0x10
// 005d052b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
