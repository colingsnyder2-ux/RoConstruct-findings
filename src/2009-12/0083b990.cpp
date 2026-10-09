// roc 2009-12 0083b990  unit: CXTPToolBar::CControlButtonExpand  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b990
//
// 0083b990  8b4108               mov eax, dword ptr [ecx + 8]
// 0083b993  85c0                 test eax, eax
// 0083b995  7402                 je 0x83b999
// 0083b997  ffe0                 jmp eax
// 0083b999  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?AccessibleNotifyWinEvent@CXTPAccessible@@QAEXKPAUHWND__@@JJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
