// roc 2007-03 005abcf0  unit: seg_005a0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abcf0
//
// 005abcf0  8b4108               mov eax, dword ptr [ecx + 8]
// 005abcf3  8b00                 mov eax, dword ptr [eax]
// 005abcf5  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?getSleepStatus@Assembly@RBX@@QAE?AW4AssemblyState@Sim@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
