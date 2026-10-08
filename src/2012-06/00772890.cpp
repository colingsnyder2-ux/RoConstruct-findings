// from server: 100% by auto
// roc 2012-06 00772890  unit: RBX::VCustomEvent::?$FactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00772890
//
// 00772890  56                   push esi
// 00772891  8bf1                 mov esi, ecx
// 00772893  e898ffffff           call 0x772830
// 00772898  8b4604               mov eax, dword ptr [esi + 4]
// 0077289b  50                   push eax
// 0077289c  e873f82000           call 0x982114
// 007728a1  83c404               add esp, 4
// 007728a4  c7460400000000       mov dword ptr [esi + 4], 0
// 007728ab  5e                   pop esi
// 007728ac  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
