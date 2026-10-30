// roc 2011-06 00864bb0  unit: CXTPTabClientWnd::CWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864bb0
//
// 00864bb0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00864bb6  83786400             cmp dword ptr [eax + 0x64], 0
// 00864bba  7511                 jne 0x864bcd
// 00864bbc  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00864bc0  8b5020               mov edx, dword ptr [eax + 0x20]
// 00864bc3  6a00                 push 0
// 00864bc5  51                   push ecx
// 00864bc6  52                   push edx
// 00864bc7  ff15ec19a400         call dword ptr [0xa419ec]
// 00864bcd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CWorkspace@CXTPTabClientWnd@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
