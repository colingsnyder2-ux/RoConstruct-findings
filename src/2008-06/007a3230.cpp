// roc 2008-06 007a3230  unit: CXTButtonThemeOffice2003  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a3230
//
// 007a3230  8bc1                 mov eax, ecx
// 007a3232  c70024f38600         mov dword ptr [eax], 0x86f324
// 007a3238  c7400400000000       mov dword ptr [eax + 4], 0
// 007a323f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ??0abstract_variables_map@program_options@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
