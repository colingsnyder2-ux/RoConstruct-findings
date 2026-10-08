// roc 2011-06 00864df0  unit: CXTPTabClientWnd::CSingleWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864df0
//
// 00864df0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00864df6  83786400             cmp dword ptr [eax + 0x64], 0
// 00864dfa  7511                 jne 0x864e0d
// 00864dfc  8b542404             mov edx, dword ptr [esp + 4]
// 00864e00  8b41c8               mov eax, dword ptr [ecx - 0x38]
// 00864e03  6a00                 push 0
// 00864e05  52                   push edx
// 00864e06  50                   push eax
// 00864e07  ff15ec19a400         call dword ptr [0xa419ec]
// 00864e0d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CSingleWorkspace@CXTPTabClientWnd@@UAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
