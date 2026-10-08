// roc 2011-06 00889640  unit: CXTPRibbonTheme  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00889640
//
// 00889640  8b542418             mov edx, dword ptr [esp + 0x18]
// 00889644  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00889648  85d2                 test edx, edx
// 0088964a  7529                 jne 0x889675
// 0088964c  837c240400           cmp dword ptr [esp + 4], 0
// 00889651  753a                 jne 0x88968d
// 00889653  85c0                 test eax, eax
// 00889655  7436                 je 0x88968d
// 00889657  837c240800           cmp dword ptr [esp + 8], 0
// 0088965c  752f                 jne 0x88968d
// 0088965e  837c241000           cmp dword ptr [esp + 0x10], 0
// 00889663  7528                 jne 0x88968d
// 00889665  837c241400           cmp dword ptr [esp + 0x14], 0
// 0088966a  7521                 jne 0x88968d
// 0088966c  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 00889672  c21c00               ret 0x1c
// 00889675  83fa02               cmp edx, 2
// 00889678  7513                 jne 0x88968d
// 0088967a  f7d8                 neg eax
// 0088967c  1bc0                 sbb eax, eax
// 0088967e  83e009               and eax, 9
// 00889681  83c023               add eax, 0x23
// 00889684  50                   push eax
// 00889685  e8265ff8ff           call 0x80f5b0
// 0088968a  c21c00               ret 0x1c
// 0088968d  f7d8                 neg eax
// 0088968f  1bc0                 sbb eax, eax
// 00889691  83e0f2               and eax, 0xfffffff2
// 00889694  83c03c               add eax, 0x3c
// 00889697  50                   push eax
// 00889698  e8135ff8ff           call 0x80f5b0
// 0088969d  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetRectangleTextColor@CXTPRibbonTheme@@MAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
