// roc 2012-06 00a1ebd0  unit: CXTPRibbonBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1ebd0
//
// 00a1ebd0  56                   push esi
// 00a1ebd1  8bf1                 mov esi, ecx
// 00a1ebd3  83c8ff               or eax, 0xffffffff
// 00a1ebd6  0bc8                 or ecx, eax
// 00a1ebd8  51                   push ecx
// 00a1ebd9  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00a1ebdf  50                   push eax
// 00a1ebe0  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a1ebe3  50                   push eax
// 00a1ebe4  81c184010000         add ecx, 0x184
// 00a1ebea  e871e20200           call 0xa4ce60
// 00a1ebef  6a00                 push 0
// 00a1ebf1  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00a1ebf7  e8145c0500           call 0xa74810
// 00a1ebfc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a1ec00  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a1ec04  8b442408             mov eax, dword ptr [esp + 8]
// 00a1ec08  51                   push ecx
// 00a1ec09  52                   push edx
// 00a1ec0a  50                   push eax
// 00a1ec0b  8bce                 mov ecx, esi
// 00a1ec0d  e84e76f7ff           call 0x996260
// 00a1ec12  5e                   pop esi
// 00a1ec13  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetTrackingMode@CXTPRibbonBar@@UAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
