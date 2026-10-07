// roc 2011-06 00903160  unit: CXTButtonThemeOffice2003  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903160
//
// 00903160  8bc1                 mov eax, ecx
// 00903162  c70024e4ad00         mov dword ptr [eax], 0xade424
// 00903168  c7400400000000       mov dword ptr [eax + 4], 0
// 0090316f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
