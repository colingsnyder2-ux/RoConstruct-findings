// roc 2009-06 00760bc0  unit: CXTPToolBar::CControlButtonExpand  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00760bc0
//
// 00760bc0  8b4108               mov eax, dword ptr [ecx + 8]
// 00760bc3  85c0                 test eax, eax
// 00760bc5  7402                 je 0x760bc9
// 00760bc7  ffe0                 jmp eax
// 00760bc9  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?AccessibleNotifyWinEvent@CXTPAccessible@@QAEXKPAUHWND__@@JJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
