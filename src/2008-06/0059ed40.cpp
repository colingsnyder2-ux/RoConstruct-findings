// roc 2008-06 0059ed40  unit: RBX::PartInstance  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ed40
//
// 0059ed40  56                   push esi
// 0059ed41  8bf1                 mov esi, ecx
// 0059ed43  e898cafbff           call 0x55b7e0
// 0059ed48  c70684328300         mov dword ptr [esi], 0x833284
// 0059ed4e  c7461074328300       mov dword ptr [esi + 0x10], 0x833274
// 0059ed55  c746146c328300       mov dword ptr [esi + 0x14], 0x83326c
// 0059ed5c  c7462064328300       mov dword ptr [esi + 0x20], 0x833264
// 0059ed63  c7462454328300       mov dword ptr [esi + 0x24], 0x833254
// 0059ed6a  c7464444328300       mov dword ptr [esi + 0x44], 0x833244
// 0059ed71  c7466434328300       mov dword ptr [esi + 0x64], 0x833234
// 0059ed78  c7868400000024328300 mov dword ptr [esi + 0x84], 0x833224
// 0059ed82  c786a400000014328300 mov dword ptr [esi + 0xa4], 0x833214
// 0059ed8c  c786c400000004328300 mov dword ptr [esi + 0xc4], 0x833204
// 0059ed96  8bc6                 mov eax, esi
// 0059ed98  5e                   pop esi
// 0059ed99  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
