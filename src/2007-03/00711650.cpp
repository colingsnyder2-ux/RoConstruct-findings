// roc 2007-03 00711650  unit: seg_00710000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00711650
//
// 00711650  56                   push esi
// 00711651  8bf1                 mov esi, ecx
// 00711653  e81829f6ff           call 0x673f70
// 00711658  c706f4e97d00         mov dword ptr [esi], 0x7de9f4
// 0071165e  8bc6                 mov eax, esi
// 00711660  5e                   pop esi
// 00711661  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
