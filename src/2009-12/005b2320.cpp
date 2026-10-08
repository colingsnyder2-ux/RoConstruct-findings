// roc 2009-12 005b2320  unit: RBX::BrickBuilder  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005b2320
//
// 005b2320  56                   push esi
// 005b2321  8bf1                 mov esi, ecx
// 005b2323  e8f8feffff           call 0x5b2220
// 005b2328  8b4614               mov eax, dword ptr [esi + 0x14]
// 005b232b  50                   push eax
// 005b232c  e829152400           call 0x7f385a
// 005b2331  8b0e                 mov ecx, dword ptr [esi]
// 005b2333  51                   push ecx
// 005b2334  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005b233b  e81a152400           call 0x7f385a
// 005b2340  83c408               add esp, 8
// 005b2343  5e                   pop esi
// 005b2344  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
