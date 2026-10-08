// roc 2007-03 00721450  unit: seg_00720000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721450
//
// 00721450  56                   push esi
// 00721451  8bf1                 mov esi, ecx
// 00721453  e868ffffff           call 0x7213c0
// 00721458  c706283e7e00         mov dword ptr [esi], 0x7e3e28
// 0072145e  8bc6                 mov eax, esi
// 00721460  5e                   pop esi
// 00721461  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
