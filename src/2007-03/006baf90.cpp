// roc 2007-03 006baf90  unit: seg_006b0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006baf90
//
// 006baf90  56                   push esi
// 006baf91  8bf1                 mov esi, ecx
// 006baf93  e81870f8ff           call 0x641fb0
// 006baf98  c706d84b7d00         mov dword ptr [esi], 0x7d4bd8
// 006baf9e  8bc6                 mov eax, esi
// 006bafa0  5e                   pop esi
// 006bafa1  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
