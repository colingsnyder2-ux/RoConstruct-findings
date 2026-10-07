// roc 2007-08 006713c0  unit: CXTPToolBar::CControlButtonExpand  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006713c0
//
// 006713c0  8b4108               mov eax, dword ptr [ecx + 8]
// 006713c3  85c0                 test eax, eax
// 006713c5  7402                 je 0x6713c9
// 006713c7  ffe0                 jmp eax
// 006713c9  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?AccessibleNotifyWinEvent@CXTPAccessible@@QAEXKPAUHWND__@@JJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
