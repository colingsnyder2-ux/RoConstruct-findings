// roc 2010-06 007efae0  unit: CXTPToolBar::CControlButtonExpand  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007efae0
//
// 007efae0  8b4108               mov eax, dword ptr [ecx + 8]
// 007efae3  85c0                 test eax, eax
// 007efae5  7402                 je 0x7efae9
// 007efae7  ffe0                 jmp eax
// 007efae9  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?AccessibleNotifyWinEvent@CXTPAccessible@@QAEXKPAUHWND__@@JJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
