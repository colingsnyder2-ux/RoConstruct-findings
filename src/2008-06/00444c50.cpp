// roc 2008-06 00444c50  unit: RBX::MergeBinder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00444c50
//
// 00444c50  56                   push esi
// 00444c51  8bf1                 mov esi, ecx
// 00444c53  e8b8fcffff           call 0x444910
// 00444c58  c706fc5a8100         mov dword ptr [esi], 0x815afc
// 00444c5e  c74610f05a8100       mov dword ptr [esi + 0x10], 0x815af0
// 00444c65  c74614e85a8100       mov dword ptr [esi + 0x14], 0x815ae8
// 00444c6c  c74620e05a8100       mov dword ptr [esi + 0x20], 0x815ae0
// 00444c73  c74624d05a8100       mov dword ptr [esi + 0x24], 0x815ad0
// 00444c7a  c74644c05a8100       mov dword ptr [esi + 0x44], 0x815ac0
// 00444c81  c74664b05a8100       mov dword ptr [esi + 0x64], 0x815ab0
// 00444c88  c78684000000a05a8100 mov dword ptr [esi + 0x84], 0x815aa0
// 00444c92  c786a4000000905a8100 mov dword ptr [esi + 0xa4], 0x815a90
// 00444c9c  c786c4000000805a8100 mov dword ptr [esi + 0xc4], 0x815a80
// 00444ca6  c7863001000000000000 mov dword ptr [esi + 0x130], 0
// 00444cb0  8bc6                 mov eax, esi
// 00444cb2  5e                   pop esi
// 00444cb3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
