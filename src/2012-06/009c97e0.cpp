// roc 2012-06 009c97e0  unit: CXTPToolBar::CControlButtonExpand  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c97e0
//
// 009c97e0  8b4108               mov eax, dword ptr [ecx + 8]
// 009c97e3  85c0                 test eax, eax
// 009c97e5  7402                 je 0x9c97e9
// 009c97e7  ffe0                 jmp eax
// 009c97e9  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?AccessibleNotifyWinEvent@CXTPAccessible@@QAEXKPAUHWND__@@JJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
