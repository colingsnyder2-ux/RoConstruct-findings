// roc 2007-03 00640050  unit: seg_00640000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00640050
//
// 00640050  56                   push esi
// 00640051  8bf1                 mov esi, ecx
// 00640053  e888d60200           call 0x66d6e0
// 00640058  c706944f7c00         mov dword ptr [esi], 0x7c4f94
// 0064005e  8bc6                 mov eax, esi
// 00640060  5e                   pop esi
// 00640061  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
