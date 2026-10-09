// roc 2008-06 0040cf70  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040cf70
//
// 0040cf70  56                   push esi
// 0040cf71  8bf1                 mov esi, ecx
// 0040cf73  e8e8fbffff           call 0x40cb60
// 0040cf78  c706a4ca8000         mov dword ptr [esi], 0x80caa4
// 0040cf7e  c7461098ca8000       mov dword ptr [esi + 0x10], 0x80ca98
// 0040cf85  c7461490ca8000       mov dword ptr [esi + 0x14], 0x80ca90
// 0040cf8c  c7462088ca8000       mov dword ptr [esi + 0x20], 0x80ca88
// 0040cf93  c7462478ca8000       mov dword ptr [esi + 0x24], 0x80ca78
// 0040cf9a  c7464468ca8000       mov dword ptr [esi + 0x44], 0x80ca68
// 0040cfa1  c7466458ca8000       mov dword ptr [esi + 0x64], 0x80ca58
// 0040cfa8  c7868400000048ca8000 mov dword ptr [esi + 0x84], 0x80ca48
// 0040cfb2  c786a400000038ca8000 mov dword ptr [esi + 0xa4], 0x80ca38
// 0040cfbc  c786c400000028ca8000 mov dword ptr [esi + 0xc4], 0x80ca28
// 0040cfc6  8bc6                 mov eax, esi
// 0040cfc8  5e                   pop esi
// 0040cfc9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
