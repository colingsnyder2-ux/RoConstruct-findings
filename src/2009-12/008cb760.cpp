// roc 2009-12 008cb760  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOffice2007Theme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb760
//
// 008cb760  8b442404             mov eax, dword ptr [esp + 4]
// 008cb764  56                   push esi
// 008cb765  50                   push eax
// 008cb766  8bf1                 mov esi, ecx
// 008cb768  e883e3ffff           call 0x8c9af0
// 008cb76d  c70694a2a000         mov dword ptr [esi], 0xa0a294
// 008cb773  8bc6                 mov eax, esi
// 008cb775  5e                   pop esi
// 008cb776  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
