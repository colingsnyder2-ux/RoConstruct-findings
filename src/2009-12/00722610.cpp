// roc 2009-12 00722610  unit: UString_sink::?$stream_buffer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722610
//
// 00722610  8b442404             mov eax, dword ptr [esp + 4]
// 00722614  56                   push esi
// 00722615  50                   push eax
// 00722616  8bf1                 mov esi, ecx
// 00722618  e8036eceff           call 0x409420
// 0072261d  c7061cfd9d00         mov dword ptr [esi], 0x9dfd1c
// 00722623  8bc6                 mov eax, esi
// 00722625  5e                   pop esi
// 00722626  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
