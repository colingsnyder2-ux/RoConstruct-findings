// from server: 100% by auto
// roc 2011-06 0089d900  unit: CXTPControlEditCtrl  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089d900
//
// 0089d900  8bc1                 mov eax, ecx
// 0089d902  c700ec1dad00         mov dword ptr [eax], 0xad1dec
// 0089d908  c7400400000000       mov dword ptr [eax + 4], 0
// 0089d90f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
