// roc 2009-12 00895450  unit: CXTPRibbonBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895450
//
// 00895450  56                   push esi
// 00895451  8bf1                 mov esi, ecx
// 00895453  83c8ff               or eax, 0xffffffff
// 00895456  0bc8                 or ecx, eax
// 00895458  51                   push ecx
// 00895459  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 0089545f  50                   push eax
// 00895460  8b4620               mov eax, dword ptr [esi + 0x20]
// 00895463  50                   push eax
// 00895464  81c184010000         add ecx, 0x184
// 0089546a  e8d1a50300           call 0x8cfa40
// 0089546f  6a00                 push 0
// 00895471  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00895477  e8c4a20500           call 0x8ef740
// 0089547c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00895480  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00895484  8b442408             mov eax, dword ptr [esp + 8]
// 00895488  51                   push ecx
// 00895489  52                   push edx
// 0089548a  50                   push eax
// 0089548b  8bce                 mov ecx, esi
// 0089548d  e8ee24f7ff           call 0x807980
// 00895492  5e                   pop esi
// 00895493  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetTrackingMode@CXTPRibbonBar@@UAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
