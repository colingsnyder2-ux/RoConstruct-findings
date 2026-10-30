// roc 2009-06 00794ce0  unit: CXTPRibbonTheme  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00794ce0
//
// 00794ce0  8b542418             mov edx, dword ptr [esp + 0x18]
// 00794ce4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00794ce8  85d2                 test edx, edx
// 00794cea  7529                 jne 0x794d15
// 00794cec  837c240400           cmp dword ptr [esp + 4], 0
// 00794cf1  753a                 jne 0x794d2d
// 00794cf3  85c0                 test eax, eax
// 00794cf5  7436                 je 0x794d2d
// 00794cf7  837c240800           cmp dword ptr [esp + 8], 0
// 00794cfc  752f                 jne 0x794d2d
// 00794cfe  837c241000           cmp dword ptr [esp + 0x10], 0
// 00794d03  7528                 jne 0x794d2d
// 00794d05  837c241400           cmp dword ptr [esp + 0x14], 0
// 00794d0a  7521                 jne 0x794d2d
// 00794d0c  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 00794d12  c21c00               ret 0x1c
// 00794d15  83fa02               cmp edx, 2
// 00794d18  7513                 jne 0x794d2d
// 00794d1a  f7d8                 neg eax
// 00794d1c  1bc0                 sbb eax, eax
// 00794d1e  83e009               and eax, 9
// 00794d21  83c023               add eax, 0x23
// 00794d24  50                   push eax
// 00794d25  e856daf8ff           call 0x722780
// 00794d2a  c21c00               ret 0x1c
// 00794d2d  f7d8                 neg eax
// 00794d2f  1bc0                 sbb eax, eax
// 00794d31  83e0f2               and eax, 0xfffffff2
// 00794d34  83c03c               add eax, 0x3c
// 00794d37  50                   push eax
// 00794d38  e843daf8ff           call 0x722780
// 00794d3d  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetRectangleTextColor@CXTPRibbonTheme@@MAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
