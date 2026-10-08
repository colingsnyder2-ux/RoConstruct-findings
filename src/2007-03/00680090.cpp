// roc 2007-03 00680090  unit: seg_00680000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00680090
//
// 00680090  8b442404             mov eax, dword ptr [esp + 4]
// 00680094  56                   push esi
// 00680095  50                   push eax
// 00680096  8bf1                 mov esi, ecx
// 00680098  e883e8ffff           call 0x67e920
// 0068009d  c7061cdf7c00         mov dword ptr [esi], 0x7cdf1c
// 006800a3  8bc6                 mov eax, esi
// 006800a5  5e                   pop esi
// 006800a6  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
