// roc 2008-06 007228a0  unit: CXTPRibbonBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007228a0
//
// 007228a0  56                   push esi
// 007228a1  8bf1                 mov esi, ecx
// 007228a3  83c8ff               or eax, 0xffffffff
// 007228a6  0bc8                 or ecx, eax
// 007228a8  51                   push ecx
// 007228a9  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 007228af  50                   push eax
// 007228b0  8b4620               mov eax, dword ptr [esi + 0x20]
// 007228b3  50                   push eax
// 007228b4  81c184010000         add ecx, 0x184
// 007228ba  e8119f0500           call 0x77c7d0
// 007228bf  6a00                 push 0
// 007228c1  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 007228c7  e8a4490700           call 0x797270
// 007228cc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007228d0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007228d4  8b442408             mov eax, dword ptr [esp + 8]
// 007228d8  51                   push ecx
// 007228d9  52                   push edx
// 007228da  50                   push eax
// 007228db  8bce                 mov ecx, esi
// 007228dd  e8ce59f9ff           call 0x6b82b0
// 007228e2  5e                   pop esi
// 007228e3  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetTrackingMode@CXTPRibbonBar@@UAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
