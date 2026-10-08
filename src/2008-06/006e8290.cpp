// from server: 100% by auto
// roc 2008-06 006e8290  unit: CXTPToolBar::CControlButtonExpand  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8290
//
// 006e8290  8b4108               mov eax, dword ptr [ecx + 8]
// 006e8293  85c0                 test eax, eax
// 006e8295  7402                 je 0x6e8299
// 006e8297  ffe0                 jmp eax
// 006e8299  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?AccessibleNotifyWinEvent@CXTPAccessible@@QAEXKPAUHWND__@@JJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
