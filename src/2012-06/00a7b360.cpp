// from server: 100% by auto
// roc 2012-06 00a7b360  unit: CXTButtonThemeOffice2003  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7b360
//
// 00a7b360  8bc1                 mov eax, ecx
// 00a7b362  c700e49ac200         mov dword ptr [eax], 0xc29ae4
// 00a7b368  c7400400000000       mov dword ptr [eax + 4], 0
// 00a7b36f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
