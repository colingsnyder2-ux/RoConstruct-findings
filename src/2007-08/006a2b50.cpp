// roc 2007-08 006a2b50  unit: CXTPDockBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2b50
//
// 006a2b50  8bc1                 mov eax, ecx
// 006a2b52  c700e4347d00         mov dword ptr [eax], 0x7d34e4
// 006a2b58  c7400400000000       mov dword ptr [eax + 4], 0
// 006a2b5f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
