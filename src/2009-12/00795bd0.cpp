// roc 2009-12 00795bd0  unit: seg_00790000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00795bd0
//
// 00795bd0  8b01                 mov eax, dword ptr [ecx]
// 00795bd2  8b4904               mov ecx, dword ptr [ecx + 4]
// 00795bd5  8908                 mov dword ptr [eax], ecx
// 00795bd7  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1?$repeater_count@PBD@re_detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
