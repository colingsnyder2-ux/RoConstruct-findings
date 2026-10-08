// roc 2012-06 009dd400  unit: CXTPTabClientWnd::CSingleWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dd400
//
// 009dd400  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 009dd406  83786400             cmp dword ptr [eax + 0x64], 0
// 009dd40a  7511                 jne 0x9dd41d
// 009dd40c  8b542404             mov edx, dword ptr [esp + 4]
// 009dd410  8b41c8               mov eax, dword ptr [ecx - 0x38]
// 009dd413  6a00                 push 0
// 009dd415  52                   push edx
// 009dd416  50                   push eax
// 009dd417  ff15ec3bb200         call dword ptr [0xb23bec]
// 009dd41d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CSingleWorkspace@CXTPTabClientWnd@@UAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
