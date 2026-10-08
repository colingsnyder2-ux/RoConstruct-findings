// roc 2007-03 006dad40  unit: seg_006d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dad40
//
// 006dad40  8b442404             mov eax, dword ptr [esp + 4]
// 006dad44  56                   push esi
// 006dad45  50                   push eax
// 006dad46  8bf1                 mov esi, ecx
// 006dad48  e8c3e7ffff           call 0x6d9510
// 006dad4d  c706f47f7d00         mov dword ptr [esi], 0x7d7ff4
// 006dad53  8bc6                 mov eax, esi
// 006dad55  5e                   pop esi
// 006dad56  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
