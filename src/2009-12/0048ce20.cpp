// roc 2009-12 0048ce20  unit: G3D::Shader  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0048ce20
//
// 0048ce20  8b442404             mov eax, dword ptr [esp + 4]
// 0048ce24  56                   push esi
// 0048ce25  50                   push eax
// 0048ce26  8bf1                 mov esi, ecx
// 0048ce28  e88349f7ff           call 0x4017b0
// 0048ce2d  c7064c2e9b00         mov dword ptr [esi], 0x9b2e4c
// 0048ce33  8bc6                 mov eax, esi
// 0048ce35  5e                   pop esi
// 0048ce36  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
