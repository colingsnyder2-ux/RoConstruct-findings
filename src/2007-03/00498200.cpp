// roc 2007-03 00498200  unit: seg_00490000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00498200
//
// 00498200  8b4104               mov eax, dword ptr [ecx + 4]
// 00498203  85c0                 test eax, eax
// 00498205  7501                 jne 0x498208
// 00498207  c3                   ret 
// 00498208  8b4908               mov ecx, dword ptr [ecx + 8]
// 0049820b  2bc8                 sub ecx, eax
// 0049820d  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00498212  f7e9                 imul ecx
// 00498214  d1fa                 sar edx, 1
// 00498216  8bc2                 mov eax, edx
// 00498218  c1e81f               shr eax, 0x1f
// 0049821b  03c2                 add eax, edx
// 0049821d  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?size@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
