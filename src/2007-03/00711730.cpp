// roc 2007-03 00711730  unit: seg_00710000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00711730
//
// 00711730  56                   push esi
// 00711731  8bf1                 mov esi, ecx
// 00711733  e83828f6ff           call 0x673f70
// 00711738  c7066cea7d00         mov dword ptr [esi], 0x7dea6c
// 0071173e  8bc6                 mov eax, esi
// 00711740  5e                   pop esi
// 00711741  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
