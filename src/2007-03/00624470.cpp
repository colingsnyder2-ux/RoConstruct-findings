// roc 2007-03 00624470  unit: seg_00620000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624470
//
// 00624470  8b09                 mov ecx, dword ptr [ecx]
// 00624472  85c9                 test ecx, ecx
// 00624474  7408                 je 0x62447e
// 00624476  8b01                 mov eax, dword ptr [ecx]
// 00624478  8b10                 mov edx, dword ptr [eax]
// 0062447a  6a01                 push 1
// 0062447c  ffd2                 call edx
// 0062447e  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1any@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
