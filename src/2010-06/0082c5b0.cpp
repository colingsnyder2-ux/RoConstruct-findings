// roc 2010-06 0082c5b0  unit: CXTPRibbonTheme  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082c5b0
//
// 0082c5b0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0082c5b4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0082c5b8  85d2                 test edx, edx
// 0082c5ba  7529                 jne 0x82c5e5
// 0082c5bc  837c240400           cmp dword ptr [esp + 4], 0
// 0082c5c1  753a                 jne 0x82c5fd
// 0082c5c3  85c0                 test eax, eax
// 0082c5c5  7436                 je 0x82c5fd
// 0082c5c7  837c240800           cmp dword ptr [esp + 8], 0
// 0082c5cc  752f                 jne 0x82c5fd
// 0082c5ce  837c241000           cmp dword ptr [esp + 0x10], 0
// 0082c5d3  7528                 jne 0x82c5fd
// 0082c5d5  837c241400           cmp dword ptr [esp + 0x14], 0
// 0082c5da  7521                 jne 0x82c5fd
// 0082c5dc  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 0082c5e2  c21c00               ret 0x1c
// 0082c5e5  83fa02               cmp edx, 2
// 0082c5e8  7513                 jne 0x82c5fd
// 0082c5ea  f7d8                 neg eax
// 0082c5ec  1bc0                 sbb eax, eax
// 0082c5ee  83e009               and eax, 9
// 0082c5f1  83c023               add eax, 0x23
// 0082c5f4  50                   push eax
// 0082c5f5  e8160bf8ff           call 0x7ad110
// 0082c5fa  c21c00               ret 0x1c
// 0082c5fd  f7d8                 neg eax
// 0082c5ff  1bc0                 sbb eax, eax
// 0082c601  83e0f2               and eax, 0xfffffff2
// 0082c604  83c03c               add eax, 0x3c
// 0082c607  50                   push eax
// 0082c608  e8030bf8ff           call 0x7ad110
// 0082c60d  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetRectangleTextColor@CXTPRibbonTheme@@MAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
