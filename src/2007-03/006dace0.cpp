// roc 2007-03 006dace0  unit: seg_006d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dace0
//
// 006dace0  8b442404             mov eax, dword ptr [esp + 4]
// 006dace4  56                   push esi
// 006dace5  50                   push eax
// 006dace6  8bf1                 mov esi, ecx
// 006dace8  e823e8ffff           call 0x6d9510
// 006daced  c706547f7d00         mov dword ptr [esi], 0x7d7f54
// 006dacf3  8bc6                 mov eax, esi
// 006dacf5  5e                   pop esi
// 006dacf6  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
