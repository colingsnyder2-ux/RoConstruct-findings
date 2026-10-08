// roc 2007-03 006e7ba0  unit: seg_006e0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e7ba0
//
// 006e7ba0  56                   push esi
// 006e7ba1  8bf1                 mov esi, ecx
// 006e7ba3  e8b8fe0100           call 0x707a60
// 006e7ba8  c7061c9a7d00         mov dword ptr [esi], 0x7d9a1c
// 006e7bae  8bc6                 mov eax, esi
// 006e7bb0  5e                   pop esi
// 006e7bb1  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
