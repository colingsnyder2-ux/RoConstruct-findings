// roc 2007-03 007214e0  unit: seg_00720000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007214e0
//
// 007214e0  56                   push esi
// 007214e1  8bf1                 mov esi, ecx
// 007214e3  e868ffffff           call 0x721450
// 007214e8  c706443e7e00         mov dword ptr [esi], 0x7e3e44
// 007214ee  8bc6                 mov eax, esi
// 007214f0  5e                   pop esi
// 007214f1  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
