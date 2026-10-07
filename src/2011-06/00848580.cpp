// roc 2011-06 00848580  unit: CRobloxTreeCtrl  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848580
//
// 00848580  83ec10               sub esp, 0x10
// 00848583  55                   push ebp
// 00848584  56                   push esi
// 00848585  6a00                 push 0
// 00848587  8be9                 mov ebp, ecx
// 00848589  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0084858c  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084858f  6a00                 push 0
// 00848591  680a110000           push 0x110a
// 00848596  50                   push eax
// 00848597  ff15c019a400         call dword ptr [0xa419c0]
// 0084859d  8bf0                 mov esi, eax
// 0084859f  85f6                 test esi, esi
// 008485a1  0f84bf000000         je 0x848666
// 008485a7  53                   push ebx
// 008485a8  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008485ac  57                   push edi
// 008485ad  8d4900               lea ecx, [ecx]
// 008485b0  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 008485b3  6a02                 push 2
// 008485b5  56                   push esi
// 008485b6  e89d421800           call 0x9cc858
// 008485bb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008485be  51                   push ecx
// 008485bf  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 008485c2  8d542414             lea edx, [esp + 0x14]
// 008485c6  8bf8                 mov edi, eax
// 008485c8  52                   push edx
// 008485c9  d1ef                 shr edi, 1
// 008485cb  56                   push esi
// 008485cc  83e701               and edi, 1
// 008485cf  e82024fcff           call 0x80a9f4
// 008485d4  8b442424             mov eax, dword ptr [esp + 0x24]
// 008485d8  50                   push eax
// 008485d9  8d4c2414             lea ecx, [esp + 0x14]
// 008485dd  51                   push ecx
// 008485de  8bd1                 mov edx, ecx
// 008485e0  52                   push edx
// 008485e1  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008485e7  6a00                 push 0
// 008485e9  8bcb                 mov ecx, ebx
// 008485eb  56                   push esi
// 008485ec  85c0                 test eax, eax
// 008485ee  7433                 je 0x848623
// 008485f0  e893421800           call 0x9cc888
// 008485f5  85ff                 test edi, edi
// 008485f7  7504                 jne 0x8485fd
// 008485f9  85c0                 test eax, eax
// 008485fb  743c                 je 0x848639
// 008485fd  8a4c2428             mov cl, byte ptr [esp + 0x28]
// 00848601  f6c108               test cl, 8
// 00848604  740a                 je 0x848610
// 00848606  85c0                 test eax, eax
// 00848608  7406                 je 0x848610
// 0084860a  6a02                 push 2
// 0084860c  6a00                 push 0
// 0084860e  eb2d                 jmp 0x84863d
// 00848610  f6c104               test cl, 4
// 00848613  7430                 je 0x848645
// 00848615  85c0                 test eax, eax
// 00848617  742c                 je 0x848645
// 00848619  50                   push eax
// 0084861a  8bcb                 mov ecx, ebx
// 0084861c  e861421800           call 0x9cc882
// 00848621  eb22                 jmp 0x848645
// 00848623  e860421800           call 0x9cc888
// 00848628  85ff                 test edi, edi
// 0084862a  7409                 je 0x848635
// 0084862c  85c0                 test eax, eax
// 0084862e  7509                 jne 0x848639
// 00848630  6a02                 push 2
// 00848632  50                   push eax
// 00848633  eb08                 jmp 0x84863d
// 00848635  85c0                 test eax, eax
// 00848637  740c                 je 0x848645
// 00848639  6a02                 push 2
// 0084863b  6a02                 push 2
// 0084863d  56                   push esi
// 0084863e  8bcd                 mov ecx, ebp
// 00848640  e81bf5ffff           call 0x847b60
// 00848645  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00848648  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084864b  56                   push esi
// 0084864c  6a06                 push 6
// 0084864e  680a110000           push 0x110a
// 00848653  50                   push eax
// 00848654  ff15c019a400         call dword ptr [0xa419c0]
// 0084865a  8bf0                 mov esi, eax
// 0084865c  85f6                 test esi, esi
// 0084865e  0f854cffffff         jne 0x8485b0
// 00848664  5f                   pop edi
// 00848665  5b                   pop ebx
// 00848666  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00848669  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0084866c  52                   push edx
// 0084866d  ff152c1ba400         call dword ptr [0xa41b2c]
// 00848673  5e                   pop esi
// 00848674  5d                   pop ebp
// 00848675  83c410               add esp, 0x10
// 00848678  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?UpdateSelectionForRect@CXTPTreeBase@@MAEXPBUtagRECT@@IAAV?$CTypedPtrList@VCPtrList@@PAU_TREEITEM@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
