// roc 2011-06 00851320  unit: CXTPToolBar::CControlButtonExpand  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851320
//
// 00851320  8b4108               mov eax, dword ptr [ecx + 8]
// 00851323  85c0                 test eax, eax
// 00851325  7402                 je 0x851329
// 00851327  ffe0                 jmp eax
// 00851329  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?AccessibleNotifyWinEvent@CXTPAccessible@@QAEXKPAUHWND__@@JJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
