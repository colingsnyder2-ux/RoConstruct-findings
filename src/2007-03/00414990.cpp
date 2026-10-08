// roc 2007-03 00414990  unit: seg_00410000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00414990
//
// 00414990  8b442404             mov eax, dword ptr [esp + 4]
// 00414994  56                   push esi
// 00414995  50                   push eax
// 00414996  8bf1                 mov esi, ecx
// 00414998  e813fcffff           call 0x4145b0
// 0041499d  c70650627800         mov dword ptr [esi], 0x786250
// 004149a3  8bc6                 mov eax, esi
// 004149a5  5e                   pop esi
// 004149a6  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
