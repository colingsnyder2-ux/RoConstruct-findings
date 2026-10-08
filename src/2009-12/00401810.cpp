// roc 2009-12 00401810  unit: CAboutRobloxDialog  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00401810
//
// 00401810  8b442404             mov eax, dword ptr [esp + 4]
// 00401814  56                   push esi
// 00401815  50                   push eax
// 00401816  8bf1                 mov esi, ecx
// 00401818  e893ffffff           call 0x4017b0
// 0040181d  c7069cf49900         mov dword ptr [esi], 0x99f49c
// 00401823  8bc6                 mov eax, esi
// 00401825  5e                   pop esi
// 00401826  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
