// roc 2009-12 00871680  unit: CXTPRibbonTheme  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00871680
//
// 00871680  8b542418             mov edx, dword ptr [esp + 0x18]
// 00871684  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00871688  85d2                 test edx, edx
// 0087168a  7529                 jne 0x8716b5
// 0087168c  837c240400           cmp dword ptr [esp + 4], 0
// 00871691  753a                 jne 0x8716cd
// 00871693  85c0                 test eax, eax
// 00871695  7436                 je 0x8716cd
// 00871697  837c240800           cmp dword ptr [esp + 8], 0
// 0087169c  752f                 jne 0x8716cd
// 0087169e  837c241000           cmp dword ptr [esp + 0x10], 0
// 008716a3  7528                 jne 0x8716cd
// 008716a5  837c241400           cmp dword ptr [esp + 0x14], 0
// 008716aa  7521                 jne 0x8716cd
// 008716ac  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 008716b2  c21c00               ret 0x1c
// 008716b5  83fa02               cmp edx, 2
// 008716b8  7513                 jne 0x8716cd
// 008716ba  f7d8                 neg eax
// 008716bc  1bc0                 sbb eax, eax
// 008716be  83e009               and eax, 9
// 008716c1  83c023               add eax, 0x23
// 008716c4  50                   push eax
// 008716c5  e876bff8ff           call 0x7fd640
// 008716ca  c21c00               ret 0x1c
// 008716cd  f7d8                 neg eax
// 008716cf  1bc0                 sbb eax, eax
// 008716d1  83e0f2               and eax, 0xfffffff2
// 008716d4  83c03c               add eax, 0x3c
// 008716d7  50                   push eax
// 008716d8  e863bff8ff           call 0x7fd640
// 008716dd  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetRectangleTextColor@CXTPRibbonTheme@@MAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
