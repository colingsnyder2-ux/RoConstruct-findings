// roc 2010-06 008098e0  unit: CXTPTabClientWnd::CWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008098e0
//
// 008098e0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 008098e6  83786400             cmp dword ptr [eax + 0x64], 0
// 008098ea  7511                 jne 0x8098fd
// 008098ec  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008098f0  8b5020               mov edx, dword ptr [eax + 0x20]
// 008098f3  6a00                 push 0
// 008098f5  51                   push ecx
// 008098f6  52                   push edx
// 008098f7  ff1578ba9e00         call dword ptr [0x9eba78]
// 008098fd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CWorkspace@CXTPTabClientWnd@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
