// roc 2009-06 007b8200  unit: CXTPRibbonBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b8200
//
// 007b8200  56                   push esi
// 007b8201  8bf1                 mov esi, ecx
// 007b8203  83c8ff               or eax, 0xffffffff
// 007b8206  0bc8                 or ecx, eax
// 007b8208  51                   push ecx
// 007b8209  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 007b820f  50                   push eax
// 007b8210  8b4620               mov eax, dword ptr [esi + 0x20]
// 007b8213  50                   push eax
// 007b8214  81c184010000         add ecx, 0x184
// 007b821a  e871cc0300           call 0x7f4e90
// 007b821f  6a00                 push 0
// 007b8221  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 007b8227  e8d4b90500           call 0x813c00
// 007b822c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b8230  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007b8234  8b442408             mov eax, dword ptr [esp + 8]
// 007b8238  51                   push ecx
// 007b8239  52                   push edx
// 007b823a  50                   push eax
// 007b823b  8bce                 mov ecx, esi
// 007b823d  e8de85f7ff           call 0x730820
// 007b8242  5e                   pop esi
// 007b8243  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetTrackingMode@CXTPRibbonBar@@UAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
