// from server: 100% by auto
// roc 2007-08 0069e7a0  unit: CXTPPropertyGridItemEnum  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e7a0
//
// 0069e7a0  8bc1                 mov eax, ecx
// 0069e7a2  c7008c2c7d00         mov dword ptr [eax], 0x7d2c8c
// 0069e7a8  c7400400000000       mov dword ptr [eax + 4], 0
// 0069e7af  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
