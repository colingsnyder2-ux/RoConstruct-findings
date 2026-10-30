// from server: 100% by auto
// roc 2008-06 0079f8f0  unit: CXTPDialogBar  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079f8f0
//
// 0079f8f0  83ec10               sub esp, 0x10
// 0079f8f3  56                   push esi
// 0079f8f4  8bf1                 mov esi, ecx
// 0079f8f6  83bee001000000       cmp dword ptr [esi + 0x1e0], 0
// 0079f8fd  7454                 je 0x79f953
// 0079f8ff  8d442404             lea eax, [esp + 4]
// 0079f903  50                   push eax
// 0079f904  e837f4ffff           call 0x79ed40
// 0079f909  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0079f90d  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0079f911  8b442420             mov eax, dword ptr [esp + 0x20]
// 0079f915  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0079f919  8b542408             mov edx, dword ptr [esp + 8]
// 0079f91d  2b442418             sub eax, dword ptr [esp + 0x18]
// 0079f921  6a14                 push 0x14
// 0079f923  2b442410             sub eax, dword ptr [esp + 0x10]
// 0079f927  2bca                 sub ecx, edx
// 0079f929  51                   push ecx
// 0079f92a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079f92e  2bc1                 sub eax, ecx
// 0079f930  50                   push eax
// 0079f931  52                   push edx
// 0079f932  51                   push ecx
// 0079f933  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 0079f939  6a00                 push 0
// 0079f93b  51                   push ecx
// 0079f93c  ff15b02b8000         call dword ptr [0x802bb0]
// 0079f942  8b96e0010000         mov edx, dword ptr [esi + 0x1e0]
// 0079f948  6a00                 push 0
// 0079f94a  6a00                 push 0
// 0079f94c  52                   push edx
// 0079f94d  ff15182e8000         call dword ptr [0x802e18]
// 0079f953  5e                   pop esi
// 0079f954  83c410               add esp, 0x10
// 0079f957  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?MoveChildWindow@CXTPDialogBar@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
