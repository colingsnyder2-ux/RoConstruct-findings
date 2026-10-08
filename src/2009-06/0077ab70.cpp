// roc 2009-06 0077ab70  unit: CXTPTabClientWnd::CSingleWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077ab70
//
// 0077ab70  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0077ab76  83786400             cmp dword ptr [eax + 0x64], 0
// 0077ab7a  7511                 jne 0x77ab8d
// 0077ab7c  8b542404             mov edx, dword ptr [esp + 4]
// 0077ab80  8b41c8               mov eax, dword ptr [ecx - 0x38]
// 0077ab83  6a00                 push 0
// 0077ab85  52                   push edx
// 0077ab86  50                   push eax
// 0077ab87  ff157cee8900         call dword ptr [0x89ee7c]
// 0077ab8d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CSingleWorkspace@CXTPTabClientWnd@@UAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
