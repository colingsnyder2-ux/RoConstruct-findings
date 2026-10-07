// roc 2007-08 00725d10  unit: boost::thread_resource_error  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725d10
//
// 00725d10  56                   push esi
// 00725d11  8b31                 mov esi, dword ptr [ecx]
// 00725d13  85f6                 test esi, esi
// 00725d15  742e                 je 0x725d45
// 00725d17  8b4604               mov eax, dword ptr [esi + 4]
// 00725d1a  85c0                 test eax, eax
// 00725d1c  7409                 je 0x725d27
// 00725d1e  50                   push eax
// 00725d1f  e83e9ff0ff           call 0x62fc62
// 00725d24  83c404               add esp, 4
// 00725d27  56                   push esi
// 00725d28  c7460400000000       mov dword ptr [esi + 4], 0
// 00725d2f  c7460800000000       mov dword ptr [esi + 8], 0
// 00725d36  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00725d3d  e8209ff0ff           call 0x62fc62
// 00725d42  83c404               add esp, 4
// 00725d45  5e                   pop esi
// 00725d46  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1?$scoped_ptr@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
