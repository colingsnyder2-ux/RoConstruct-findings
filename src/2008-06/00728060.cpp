// from server: 100% by auto
// roc 2008-06 00728060  unit: CXTPRibbonTheme  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00728060
//
// 00728060  8b542418             mov edx, dword ptr [esp + 0x18]
// 00728064  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00728068  85d2                 test edx, edx
// 0072806a  7529                 jne 0x728095
// 0072806c  837c240400           cmp dword ptr [esp + 4], 0
// 00728071  753a                 jne 0x7280ad
// 00728073  85c0                 test eax, eax
// 00728075  7436                 je 0x7280ad
// 00728077  837c240800           cmp dword ptr [esp + 8], 0
// 0072807c  752f                 jne 0x7280ad
// 0072807e  837c241000           cmp dword ptr [esp + 0x10], 0
// 00728083  7528                 jne 0x7280ad
// 00728085  837c241400           cmp dword ptr [esp + 0x14], 0
// 0072808a  7521                 jne 0x7280ad
// 0072808c  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 00728092  c21c00               ret 0x1c
// 00728095  83fa02               cmp edx, 2
// 00728098  7513                 jne 0x7280ad
// 0072809a  f7d8                 neg eax
// 0072809c  1bc0                 sbb eax, eax
// 0072809e  83e009               and eax, 9
// 007280a1  83c023               add eax, 0x23
// 007280a4  50                   push eax
// 007280a5  e8c65ff8ff           call 0x6ae070
// 007280aa  c21c00               ret 0x1c
// 007280ad  f7d8                 neg eax
// 007280af  1bc0                 sbb eax, eax
// 007280b1  83e0f2               and eax, 0xfffffff2
// 007280b4  83c03c               add eax, 0x3c
// 007280b7  50                   push eax
// 007280b8  e8b35ff8ff           call 0x6ae070
// 007280bd  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetRectangleTextColor@CXTPRibbonTheme@@MAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
