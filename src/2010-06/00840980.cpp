// from server: 100% by auto
// roc 2010-06 00840980  unit: CXTPControlEditCtrl  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00840980
//
// 00840980  8bc1                 mov eax, ecx
// 00840982  c700cc73a600         mov dword ptr [eax], 0xa673cc
// 00840988  c7400400000000       mov dword ptr [eax + 4], 0
// 0084098f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
