// roc 2009-12 00855bf0  unit: CXTPTabClientWnd::CSingleWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855bf0
//
// 00855bf0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00855bf6  83786400             cmp dword ptr [eax + 0x64], 0
// 00855bfa  7511                 jne 0x855c0d
// 00855bfc  8b542404             mov edx, dword ptr [esp + 4]
// 00855c00  8b41c8               mov eax, dword ptr [ecx - 0x38]
// 00855c03  6a00                 push 0
// 00855c05  52                   push edx
// 00855c06  50                   push eax
// 00855c07  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00855c0d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CSingleWorkspace@CXTPTabClientWnd@@UAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
