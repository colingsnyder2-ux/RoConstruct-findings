// roc 2009-12 008559b0  unit: CXTPTabClientWnd::CWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008559b0
//
// 008559b0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 008559b6  83786400             cmp dword ptr [eax + 0x64], 0
// 008559ba  7511                 jne 0x8559cd
// 008559bc  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008559c0  8b5020               mov edx, dword ptr [eax + 0x20]
// 008559c3  6a00                 push 0
// 008559c5  51                   push ecx
// 008559c6  52                   push edx
// 008559c7  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008559cd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CWorkspace@CXTPTabClientWnd@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
