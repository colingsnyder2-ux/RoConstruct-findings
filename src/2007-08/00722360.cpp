// from server: 100% by auto
// roc 2007-08 00722360  unit: CXTButtonThemeOffice2003  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00722360
//
// 00722360  8bc1                 mov eax, ecx
// 00722362  c7009c247e00         mov dword ptr [eax], 0x7e249c
// 00722368  c7400400000000       mov dword ptr [eax + 4], 0
// 0072236f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
