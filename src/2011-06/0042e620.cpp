// from server: 100% by auto
// roc 2011-06 0042e620  unit: MainLogManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042e620
//
// 0042e620  56                   push esi
// 0042e621  8bf1                 mov esi, ecx
// 0042e623  e8f8fcffff           call 0x42e320
// 0042e628  894604               mov dword ptr [esi + 4], eax
// 0042e62b  c7460800000000       mov dword ptr [esi + 8], 0
// 0042e632  8bc6                 mov eax, esi
// 0042e634  5e                   pop esi
// 0042e635  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
