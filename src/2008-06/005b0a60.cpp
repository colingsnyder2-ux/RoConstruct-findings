// roc 2008-06 005b0a60  unit: RBX::Accoutrement  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0a60
//
// 005b0a60  56                   push esi
// 005b0a61  8bf1                 mov esi, ecx
// 005b0a63  e878adfaff           call 0x55b7e0
// 005b0a68  c706b44a8300         mov dword ptr [esi], 0x834ab4
// 005b0a6e  c74610a44a8300       mov dword ptr [esi + 0x10], 0x834aa4
// 005b0a75  c746149c4a8300       mov dword ptr [esi + 0x14], 0x834a9c
// 005b0a7c  c74620944a8300       mov dword ptr [esi + 0x20], 0x834a94
// 005b0a83  c74624844a8300       mov dword ptr [esi + 0x24], 0x834a84
// 005b0a8a  c74644744a8300       mov dword ptr [esi + 0x44], 0x834a74
// 005b0a91  c74664644a8300       mov dword ptr [esi + 0x64], 0x834a64
// 005b0a98  c78684000000544a8300 mov dword ptr [esi + 0x84], 0x834a54
// 005b0aa2  c786a4000000444a8300 mov dword ptr [esi + 0xa4], 0x834a44
// 005b0aac  c786c4000000344a8300 mov dword ptr [esi + 0xc4], 0x834a34
// 005b0ab6  8bc6                 mov eax, esi
// 005b0ab8  5e                   pop esi
// 005b0ab9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
