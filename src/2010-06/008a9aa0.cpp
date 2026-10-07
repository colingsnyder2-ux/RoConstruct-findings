// roc 2010-06 008a9aa0  unit: CXTButtonThemeOffice2003  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9aa0
//
// 008a9aa0  8bc1                 mov eax, ecx
// 008a9aa2  c700cc3fa700         mov dword ptr [eax], 0xa73fcc
// 008a9aa8  c7400400000000       mov dword ptr [eax + 4], 0
// 008a9aaf  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
