// from server: 100% by auto
// roc 2008-06 00702280  unit: CXTPTabClientWnd::CSingleWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702280
//
// 00702280  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00702286  83786400             cmp dword ptr [eax + 0x64], 0
// 0070228a  7511                 jne 0x70229d
// 0070228c  8b542404             mov edx, dword ptr [esp + 4]
// 00702290  8b41c8               mov eax, dword ptr [ecx - 0x38]
// 00702293  6a00                 push 0
// 00702295  52                   push edx
// 00702296  50                   push eax
// 00702297  ff15182e8000         call dword ptr [0x802e18]
// 0070229d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CSingleWorkspace@CXTPTabClientWnd@@UAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
