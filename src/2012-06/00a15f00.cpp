// from server: 100% by auto
// roc 2012-06 00a15f00  unit: CXTPControlEditCtrl  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a15f00
//
// 00a15f00  8bc1                 mov eax, ecx
// 00a15f02  c7009cd4c100         mov dword ptr [eax], 0xc1d49c
// 00a15f08  c7400400000000       mov dword ptr [eax + 4], 0
// 00a15f0f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
