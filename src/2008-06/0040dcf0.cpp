// roc 2008-06 0040dcf0  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040dcf0
//
// 0040dcf0  56                   push esi
// 0040dcf1  8bf1                 mov esi, ecx
// 0040dcf3  e808fdffff           call 0x40da00
// 0040dcf8  c70664ce8000         mov dword ptr [esi], 0x80ce64
// 0040dcfe  c7461058ce8000       mov dword ptr [esi + 0x10], 0x80ce58
// 0040dd05  c7461450ce8000       mov dword ptr [esi + 0x14], 0x80ce50
// 0040dd0c  c7462048ce8000       mov dword ptr [esi + 0x20], 0x80ce48
// 0040dd13  c7462438ce8000       mov dword ptr [esi + 0x24], 0x80ce38
// 0040dd1a  c7464428ce8000       mov dword ptr [esi + 0x44], 0x80ce28
// 0040dd21  c7466418ce8000       mov dword ptr [esi + 0x64], 0x80ce18
// 0040dd28  c7868400000008ce8000 mov dword ptr [esi + 0x84], 0x80ce08
// 0040dd32  c786a4000000f8cd8000 mov dword ptr [esi + 0xa4], 0x80cdf8
// 0040dd3c  c786c4000000e8cd8000 mov dword ptr [esi + 0xc4], 0x80cde8
// 0040dd46  8bc6                 mov eax, esi
// 0040dd48  5e                   pop esi
// 0040dd49  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
