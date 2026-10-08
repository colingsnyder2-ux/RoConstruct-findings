// from server: 100% by auto
// roc 2012-06 00523b40  unit: RBX::Network::Player::W4ChatMode::?$EnumDesc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00523b40
//
// 00523b40  56                   push esi
// 00523b41  8bf1                 mov esi, ecx
// 00523b43  e858511800           call 0x6a8ca0
// 00523b48  8b4604               mov eax, dword ptr [esi + 4]
// 00523b4b  50                   push eax
// 00523b4c  e8c3e54500           call 0x982114
// 00523b51  83c404               add esp, 4
// 00523b54  c7460400000000       mov dword ptr [esi + 4], 0
// 00523b5b  5e                   pop esi
// 00523b5c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
