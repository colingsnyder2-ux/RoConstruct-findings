// roc 2010-06 00809b20  unit: CXTPTabClientWnd::CSingleWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00809b20
//
// 00809b20  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00809b26  83786400             cmp dword ptr [eax + 0x64], 0
// 00809b2a  7511                 jne 0x809b3d
// 00809b2c  8b542404             mov edx, dword ptr [esp + 4]
// 00809b30  8b41c8               mov eax, dword ptr [ecx - 0x38]
// 00809b33  6a00                 push 0
// 00809b35  52                   push edx
// 00809b36  50                   push eax
// 00809b37  ff1578ba9e00         call dword ptr [0x9eba78]
// 00809b3d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CSingleWorkspace@CXTPTabClientWnd@@UAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
