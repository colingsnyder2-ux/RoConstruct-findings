// roc 2007-03 0071d090  unit: seg_00710000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071d090
//
// 0071d090  56                   push esi
// 0071d091  8bf1                 mov esi, ecx
// 0071d093  e878feffff           call 0x71cf10
// 0071d098  c7064c2e7e00         mov dword ptr [esi], 0x7e2e4c
// 0071d09e  8bc6                 mov eax, esi
// 0071d0a0  5e                   pop esi
// 0071d0a1  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
