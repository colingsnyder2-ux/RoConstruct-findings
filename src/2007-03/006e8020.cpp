// roc 2007-03 006e8020  unit: seg_006e0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e8020
//
// 006e8020  56                   push esi
// 006e8021  8bf1                 mov esi, ecx
// 006e8023  e8b86cfaff           call 0x68ece0
// 006e8028  c706449c7d00         mov dword ptr [esi], 0x7d9c44
// 006e802e  8bc6                 mov eax, esi
// 006e8030  5e                   pop esi
// 006e8031  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
