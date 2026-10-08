// from server: 100% by auto
// roc 2008-06 005a7080  unit: RBX::Log  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a7080
//
// 005a7080  56                   push esi
// 005a7081  8b31                 mov esi, dword ptr [ecx]
// 005a7083  85f6                 test esi, esi
// 005a7085  7436                 je 0x5a70bd
// 005a7087  8b460c               mov eax, dword ptr [esi + 0xc]
// 005a708a  85c0                 test eax, eax
// 005a708c  7409                 je 0x5a7097
// 005a708e  50                   push eax
// 005a708f  e8e6950f00           call 0x6a067a
// 005a7094  83c404               add esp, 4
// 005a7097  8b06                 mov eax, dword ptr [esi]
// 005a7099  50                   push eax
// 005a709a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005a70a1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005a70a8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005a70af  e8c6950f00           call 0x6a067a
// 005a70b4  56                   push esi
// 005a70b5  e8c0950f00           call 0x6a067a
// 005a70ba  83c408               add esp, 8
// 005a70bd  5e                   pop esi
// 005a70be  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1?$scoped_ptr@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
