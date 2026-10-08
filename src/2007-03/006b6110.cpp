// roc 2007-03 006b6110  unit: seg_006b0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b6110
//
// 006b6110  56                   push esi
// 006b6111  8bf1                 mov esi, ecx
// 006b6113  e878fcffff           call 0x6b5d90
// 006b6118  c706e4497d00         mov dword ptr [esi], 0x7d49e4
// 006b611e  8bc6                 mov eax, esi
// 006b6120  5e                   pop esi
// 006b6121  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
