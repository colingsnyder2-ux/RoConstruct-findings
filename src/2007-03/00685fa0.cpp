// roc 2007-03 00685fa0  unit: seg_00680000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00685fa0
//
// 00685fa0  8b4108               mov eax, dword ptr [ecx + 8]
// 00685fa3  85c0                 test eax, eax
// 00685fa5  7402                 je 0x685fa9
// 00685fa7  ffe0                 jmp eax
// 00685fa9  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?AccessibleNotifyWinEvent@CXTPAccessible@@QAEXKPAUHWND__@@JJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
