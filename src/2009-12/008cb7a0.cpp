// roc 2009-12 008cb7a0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridCoolTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb7a0
//
// 008cb7a0  8b442404             mov eax, dword ptr [esp + 4]
// 008cb7a4  56                   push esi
// 008cb7a5  50                   push eax
// 008cb7a6  8bf1                 mov esi, ecx
// 008cb7a8  e843e3ffff           call 0x8c9af0
// 008cb7ad  c706e4a2a000         mov dword ptr [esi], 0xa0a2e4
// 008cb7b3  8bc6                 mov eax, esi
// 008cb7b5  5e                   pop esi
// 008cb7b6  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
