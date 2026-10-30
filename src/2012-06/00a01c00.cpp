// roc 2012-06 00a01c00  unit: CXTPRibbonTheme  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a01c00
//
// 00a01c00  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a01c04  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a01c08  85d2                 test edx, edx
// 00a01c0a  7529                 jne 0xa01c35
// 00a01c0c  837c240400           cmp dword ptr [esp + 4], 0
// 00a01c11  753a                 jne 0xa01c4d
// 00a01c13  85c0                 test eax, eax
// 00a01c15  7436                 je 0xa01c4d
// 00a01c17  837c240800           cmp dword ptr [esp + 8], 0
// 00a01c1c  752f                 jne 0xa01c4d
// 00a01c1e  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a01c23  7528                 jne 0xa01c4d
// 00a01c25  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a01c2a  7521                 jne 0xa01c4d
// 00a01c2c  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 00a01c32  c21c00               ret 0x1c
// 00a01c35  83fa02               cmp edx, 2
// 00a01c38  7513                 jne 0xa01c4d
// 00a01c3a  f7d8                 neg eax
// 00a01c3c  1bc0                 sbb eax, eax
// 00a01c3e  83e009               and eax, 9
// 00a01c41  83c023               add eax, 0x23
// 00a01c44  50                   push eax
// 00a01c45  e8465cf8ff           call 0x987890
// 00a01c4a  c21c00               ret 0x1c
// 00a01c4d  f7d8                 neg eax
// 00a01c4f  1bc0                 sbb eax, eax
// 00a01c51  83e0f2               and eax, 0xfffffff2
// 00a01c54  83c03c               add eax, 0x3c
// 00a01c57  50                   push eax
// 00a01c58  e8335cf8ff           call 0x987890
// 00a01c5d  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetRectangleTextColor@CXTPRibbonTheme@@MAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
