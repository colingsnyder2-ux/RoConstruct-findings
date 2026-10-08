// roc 2007-03 006d4ac0  unit: seg_006d0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d4ac0
//
// 006d4ac0  56                   push esi
// 006d4ac1  8bf1                 mov esi, ecx
// 006d4ac3  e8a69ff4ff           call 0x61ea6e
// 006d4ac8  c7068c797d00         mov dword ptr [esi], 0x7d798c
// 006d4ace  8bc6                 mov eax, esi
// 006d4ad0  5e                   pop esi
// 006d4ad1  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
