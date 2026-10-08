// from server: 100% by auto
// roc 2012-06 00432ea0  unit: ThreadLogManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00432ea0
//
// 00432ea0  56                   push esi
// 00432ea1  8bf1                 mov esi, ecx
// 00432ea3  e878fdffff           call 0x432c20
// 00432ea8  894604               mov dword ptr [esi + 4], eax
// 00432eab  c7460800000000       mov dword ptr [esi + 8], 0
// 00432eb2  8bc6                 mov eax, esi
// 00432eb4  5e                   pop esi
// 00432eb5  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
