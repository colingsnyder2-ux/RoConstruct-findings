// roc 2011-06 005a5df0  unit: RBX::VRenderHooksService::?$FactoryProduct  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a5df0
//
// 005a5df0  56                   push esi
// 005a5df1  8b31                 mov esi, dword ptr [ecx]
// 005a5df3  85f6                 test esi, esi
// 005a5df5  742e                 je 0x5a5e25
// 005a5df7  8b4604               mov eax, dword ptr [esi + 4]
// 005a5dfa  85c0                 test eax, eax
// 005a5dfc  7409                 je 0x5a5e07
// 005a5dfe  50                   push eax
// 005a5dff  e854422600           call 0x80a058
// 005a5e04  83c404               add esp, 4
// 005a5e07  56                   push esi
// 005a5e08  c7460400000000       mov dword ptr [esi + 4], 0
// 005a5e0f  c7460800000000       mov dword ptr [esi + 8], 0
// 005a5e16  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005a5e1d  e836422600           call 0x80a058
// 005a5e22  83c404               add esp, 4
// 005a5e25  5e                   pop esi
// 005a5e26  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1?$scoped_ptr@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
