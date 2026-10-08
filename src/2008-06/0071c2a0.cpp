// from server: 100% by auto
// roc 2008-06 0071c2a0  unit: CXTPDockBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071c2a0
//
// 0071c2a0  8bc1                 mov eax, ecx
// 0071c2a2  c700b4f38500         mov dword ptr [eax], 0x85f3b4
// 0071c2a8  c7400400000000       mov dword ptr [eax + 4], 0
// 0071c2af  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
