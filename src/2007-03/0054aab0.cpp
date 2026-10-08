// roc 2007-03 0054aab0  unit: seg_00540000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054aab0
//
// 0054aab0  8b442404             mov eax, dword ptr [esp + 4]
// 0054aab4  56                   push esi
// 0054aab5  50                   push eax
// 0054aab6  8bf1                 mov esi, ecx
// 0054aab8  e8f39aecff           call 0x4145b0
// 0054aabd  c70640797a00         mov dword ptr [esi], 0x7a7940
// 0054aac3  8bc6                 mov eax, esi
// 0054aac5  5e                   pop esi
// 0054aac6  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
