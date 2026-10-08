// roc 2012-06 009dd1c0  unit: CXTPTabClientWnd::CWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dd1c0
//
// 009dd1c0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 009dd1c6  83786400             cmp dword ptr [eax + 0x64], 0
// 009dd1ca  7511                 jne 0x9dd1dd
// 009dd1cc  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009dd1d0  8b5020               mov edx, dword ptr [eax + 0x20]
// 009dd1d3  6a00                 push 0
// 009dd1d5  51                   push ecx
// 009dd1d6  52                   push edx
// 009dd1d7  ff15ec3bb200         call dword ptr [0xb23bec]
// 009dd1dd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CWorkspace@CXTPTabClientWnd@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
