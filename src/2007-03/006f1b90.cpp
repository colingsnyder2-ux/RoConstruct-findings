// roc 2007-03 006f1b90  unit: seg_006f0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f1b90
//
// 006f1b90  56                   push esi
// 006f1b91  8bf1                 mov esi, ecx
// 006f1b93  e8e897f8ff           call 0x67b380
// 006f1b98  c7060caf7d00         mov dword ptr [esi], 0x7daf0c
// 006f1b9e  8bc6                 mov eax, esi
// 006f1ba0  5e                   pop esi
// 006f1ba1  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
