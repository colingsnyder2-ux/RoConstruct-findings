// roc 2009-06 0081ac60  unit: CXTButtonThemeOffice2003  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081ac60
//
// 0081ac60  8bc1                 mov eax, ecx
// 0081ac62  c70064f89000         mov dword ptr [eax], 0x90f864
// 0081ac68  c7400400000000       mov dword ptr [eax + 4], 0
// 0081ac6f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
