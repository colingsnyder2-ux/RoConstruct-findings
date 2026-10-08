// roc 2007-03 006dad00  unit: seg_006d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dad00
//
// 006dad00  8b442404             mov eax, dword ptr [esp + 4]
// 006dad04  56                   push esi
// 006dad05  50                   push eax
// 006dad06  8bf1                 mov esi, ecx
// 006dad08  e803e8ffff           call 0x6d9510
// 006dad0d  c706a47f7d00         mov dword ptr [esi], 0x7d7fa4
// 006dad13  8bc6                 mov eax, esi
// 006dad15  5e                   pop esi
// 006dad16  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
