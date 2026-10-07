// roc 2012-06 005a4560  unit: RBX::Network::InstancePacketCache  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a4560
//
// 005a4560  56                   push esi
// 005a4561  8bf1                 mov esi, ecx
// 005a4563  e8b8fcffff           call 0x5a4220
// 005a4568  8b4604               mov eax, dword ptr [esi + 4]
// 005a456b  50                   push eax
// 005a456c  e8a3db3d00           call 0x982114
// 005a4571  83c404               add esp, 4
// 005a4574  c7460400000000       mov dword ptr [esi + 4], 0
// 005a457b  5e                   pop esi
// 005a457c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
