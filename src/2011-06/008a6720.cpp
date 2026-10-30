// roc 2011-06 008a6720  unit: CXTPRibbonBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6720
//
// 008a6720  56                   push esi
// 008a6721  8bf1                 mov esi, ecx
// 008a6723  83c8ff               or eax, 0xffffffff
// 008a6726  0bc8                 or ecx, eax
// 008a6728  51                   push ecx
// 008a6729  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008a672f  50                   push eax
// 008a6730  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6733  50                   push eax
// 008a6734  81c184010000         add ecx, 0x184
// 008a673a  e8d1e30200           call 0x8d4b10
// 008a673f  6a00                 push 0
// 008a6741  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 008a6747  e8945d0500           call 0x8fc4e0
// 008a674c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a6750  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a6754  8b442408             mov eax, dword ptr [esp + 8]
// 008a6758  51                   push ecx
// 008a6759  52                   push edx
// 008a675a  50                   push eax
// 008a675b  8bce                 mov ecx, esi
// 008a675d  e8fe77f7ff           call 0x81df60
// 008a6762  5e                   pop esi
// 008a6763  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetTrackingMode@CXTPRibbonBar@@UAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
