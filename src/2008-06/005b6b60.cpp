// roc 2008-06 005b6b60  unit: RBX::DropperTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6b60
//
// 005b6b60  56                   push esi
// 005b6b61  8bf1                 mov esi, ecx
// 005b6b63  e8784cfaff           call 0x55b7e0
// 005b6b68  c7065c748300         mov dword ptr [esi], 0x83745c
// 005b6b6e  c7461050748300       mov dword ptr [esi + 0x10], 0x837450
// 005b6b75  c7461448748300       mov dword ptr [esi + 0x14], 0x837448
// 005b6b7c  c7462040748300       mov dword ptr [esi + 0x20], 0x837440
// 005b6b83  c7462430748300       mov dword ptr [esi + 0x24], 0x837430
// 005b6b8a  c7464420748300       mov dword ptr [esi + 0x44], 0x837420
// 005b6b91  c7466410748300       mov dword ptr [esi + 0x64], 0x837410
// 005b6b98  c7868400000000748300 mov dword ptr [esi + 0x84], 0x837400
// 005b6ba2  c786a4000000f0738300 mov dword ptr [esi + 0xa4], 0x8373f0
// 005b6bac  c786c4000000e0738300 mov dword ptr [esi + 0xc4], 0x8373e0
// 005b6bb6  8bc6                 mov eax, esi
// 005b6bb8  5e                   pop esi
// 005b6bb9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
