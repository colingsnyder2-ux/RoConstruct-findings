// roc 2009-06 00793050  unit: CXTPReportColumns  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00793050
//
// 00793050  8bc1                 mov eax, ecx
// 00793052  c70014019000         mov dword ptr [eax], 0x900114
// 00793058  c7400400000000       mov dword ptr [eax + 4], 0
// 0079305f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
