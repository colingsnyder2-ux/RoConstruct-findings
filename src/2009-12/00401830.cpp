// roc 2009-12 00401830  unit: CAboutRobloxDialog  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00401830
//
// 00401830  8b442404             mov eax, dword ptr [esp + 4]
// 00401834  56                   push esi
// 00401835  50                   push eax
// 00401836  8bf1                 mov esi, ecx
// 00401838  e873ffffff           call 0x4017b0
// 0040183d  c70690f49900         mov dword ptr [esi], 0x99f490
// 00401843  8bc6                 mov eax, esi
// 00401845  5e                   pop esi
// 00401846  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
