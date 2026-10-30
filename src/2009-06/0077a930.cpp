// roc 2009-06 0077a930  unit: CXTPTabClientWnd::CWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a930
//
// 0077a930  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0077a936  83786400             cmp dword ptr [eax + 0x64], 0
// 0077a93a  7511                 jne 0x77a94d
// 0077a93c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0077a940  8b5020               mov edx, dword ptr [eax + 0x20]
// 0077a943  6a00                 push 0
// 0077a945  51                   push ecx
// 0077a946  52                   push edx
// 0077a947  ff157cee8900         call dword ptr [0x89ee7c]
// 0077a94d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CWorkspace@CXTPTabClientWnd@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
