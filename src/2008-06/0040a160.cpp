// roc 2008-06 0040a160  unit: VAuthoringSettings::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a160
//
// 0040a160  56                   push esi
// 0040a161  8bf1                 mov esi, ecx
// 0040a163  e898fcffff           call 0x409e00
// 0040a168  c70684b98000         mov dword ptr [esi], 0x80b984
// 0040a16e  c7461078b98000       mov dword ptr [esi + 0x10], 0x80b978
// 0040a175  c7461470b98000       mov dword ptr [esi + 0x14], 0x80b970
// 0040a17c  c7462068b98000       mov dword ptr [esi + 0x20], 0x80b968
// 0040a183  c7462458b98000       mov dword ptr [esi + 0x24], 0x80b958
// 0040a18a  c7464448b98000       mov dword ptr [esi + 0x44], 0x80b948
// 0040a191  c7466438b98000       mov dword ptr [esi + 0x64], 0x80b938
// 0040a198  c7868400000028b98000 mov dword ptr [esi + 0x84], 0x80b928
// 0040a1a2  c786a400000018b98000 mov dword ptr [esi + 0xa4], 0x80b918
// 0040a1ac  c786c400000008b98000 mov dword ptr [esi + 0xc4], 0x80b908
// 0040a1b6  8bc6                 mov eax, esi
// 0040a1b8  5e                   pop esi
// 0040a1b9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
