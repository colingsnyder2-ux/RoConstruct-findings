// roc 2007-03 0071d450  unit: seg_00710000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071d450
//
// 0071d450  56                   push esi
// 0071d451  8bf1                 mov esi, ecx
// 0071d453  e838260000           call 0x71fa90
// 0071d458  c7065c357e00         mov dword ptr [esi], 0x7e355c
// 0071d45e  8bc6                 mov eax, esi
// 0071d460  5e                   pop esi
// 0071d461  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
