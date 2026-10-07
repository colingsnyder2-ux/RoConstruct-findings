// roc 2008-06 00702040  unit: CXTPTabClientWnd::CWorkspace  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702040
//
// 00702040  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00702046  83786400             cmp dword ptr [eax + 0x64], 0
// 0070204a  7511                 jne 0x70205d
// 0070204c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00702050  8b5020               mov edx, dword ptr [eax + 0x20]
// 00702053  6a00                 push 0
// 00702055  51                   push ecx
// 00702056  52                   push edx
// 00702057  ff15182e8000         call dword ptr [0x802e18]
// 0070205d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CWorkspace@CXTPTabClientWnd@@MAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
