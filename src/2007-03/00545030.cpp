// roc 2007-03 00545030  unit: seg_00540000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00545030
//
// 00545030  8b442404             mov eax, dword ptr [esp + 4]
// 00545034  56                   push esi
// 00545035  50                   push eax
// 00545036  8bf1                 mov esi, ecx
// 00545038  e8d3eaebff           call 0x403b10
// 0054503d  c706606f7a00         mov dword ptr [esi], 0x7a6f60
// 00545043  8bc6                 mov eax, esi
// 00545045  5e                   pop esi
// 00545046  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
