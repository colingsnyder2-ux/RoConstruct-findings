// roc 2009-06 00817f90  unit: CXTPDialogBar  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817f90
//
// 00817f90  83ec10               sub esp, 0x10
// 00817f93  56                   push esi
// 00817f94  8bf1                 mov esi, ecx
// 00817f96  83bee001000000       cmp dword ptr [esi + 0x1e0], 0
// 00817f9d  7454                 je 0x817ff3
// 00817f9f  8d442404             lea eax, [esp + 4]
// 00817fa3  50                   push eax
// 00817fa4  e847f4ffff           call 0x8173f0
// 00817fa9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00817fad  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00817fb1  8b442420             mov eax, dword ptr [esp + 0x20]
// 00817fb5  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00817fb9  8b542408             mov edx, dword ptr [esp + 8]
// 00817fbd  2b442418             sub eax, dword ptr [esp + 0x18]
// 00817fc1  6a14                 push 0x14
// 00817fc3  2b442410             sub eax, dword ptr [esp + 0x10]
// 00817fc7  2bca                 sub ecx, edx
// 00817fc9  51                   push ecx
// 00817fca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00817fce  2bc1                 sub eax, ecx
// 00817fd0  50                   push eax
// 00817fd1  52                   push edx
// 00817fd2  51                   push ecx
// 00817fd3  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 00817fd9  6a00                 push 0
// 00817fdb  51                   push ecx
// 00817fdc  ff15f4ec8900         call dword ptr [0x89ecf4]
// 00817fe2  8b96e0010000         mov edx, dword ptr [esi + 0x1e0]
// 00817fe8  6a00                 push 0
// 00817fea  6a00                 push 0
// 00817fec  52                   push edx
// 00817fed  ff157cee8900         call dword ptr [0x89ee7c]
// 00817ff3  5e                   pop esi
// 00817ff4  83c410               add esp, 0x10
// 00817ff7  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?MoveChildWindow@CXTPDialogBar@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
