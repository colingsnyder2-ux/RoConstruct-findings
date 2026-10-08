// roc 2007-03 004f9d90  unit: seg_004f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f9d90
//
// 004f9d90  8b442404             mov eax, dword ptr [esp + 4]
// 004f9d94  56                   push esi
// 004f9d95  8bf1                 mov esi, ecx
// 004f9d97  50                   push eax
// 004f9d98  c706981f7900         mov dword ptr [esi], 0x791f98
// 004f9d9e  c7460400000000       mov dword ptr [esi + 4], 0
// 004f9da5  e896ffffff           call 0x4f9d40
// 004f9daa  8bc6                 mov eax, esi
// 004f9dac  5e                   pop esi
// 004f9dad  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage.cpp
