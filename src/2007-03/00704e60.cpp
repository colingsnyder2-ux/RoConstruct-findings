// roc 2007-03 00704e60  unit: seg_00700000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704e60
//
// 00704e60  56                   push esi
// 00704e61  8bf1                 mov esi, ecx
// 00704e63  e868ffffff           call 0x704dd0
// 00704e68  c706a4d77d00         mov dword ptr [esi], 0x7dd7a4
// 00704e6e  8bc6                 mov eax, esi
// 00704e70  5e                   pop esi
// 00704e71  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
