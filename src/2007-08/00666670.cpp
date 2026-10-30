// from server: 100% by auto
// roc 2007-08 00666670  unit: CRobloxTreeCtrl  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666670
//
// 00666670  83ec10               sub esp, 0x10
// 00666673  55                   push ebp
// 00666674  56                   push esi
// 00666675  6a00                 push 0
// 00666677  8be9                 mov ebp, ecx
// 00666679  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0066667c  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066667f  6a00                 push 0
// 00666681  680a110000           push 0x110a
// 00666686  50                   push eax
// 00666687  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0066668d  8bf0                 mov esi, eax
// 0066668f  85f6                 test esi, esi
// 00666691  0f84bf000000         je 0x666756
// 00666697  53                   push ebx
// 00666698  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0066669c  57                   push edi
// 0066669d  8d4900               lea ecx, [ecx]
// 006666a0  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 006666a3  6a02                 push 2
// 006666a5  56                   push esi
// 006666a6  e88f1f0d00           call 0x73863a
// 006666ab  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006666ae  51                   push ecx
// 006666af  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 006666b2  8d542414             lea edx, [esp + 0x14]
// 006666b6  8bf8                 mov edi, eax
// 006666b8  52                   push edx
// 006666b9  d1ef                 shr edi, 1
// 006666bb  56                   push esi
// 006666bc  83e701               and edi, 1
// 006666bf  e8ba9dfcff           call 0x63047e
// 006666c4  8b442424             mov eax, dword ptr [esp + 0x24]
// 006666c8  50                   push eax
// 006666c9  8d4c2414             lea ecx, [esp + 0x14]
// 006666cd  51                   push ecx
// 006666ce  8bd1                 mov edx, ecx
// 006666d0  52                   push edx
// 006666d1  ff155cee7700         call dword ptr [0x77ee5c]
// 006666d7  85c0                 test eax, eax
// 006666d9  6a00                 push 0
// 006666db  8bcb                 mov ecx, ebx
// 006666dd  56                   push esi
// 006666de  7433                 je 0x666713
// 006666e0  e8851f0d00           call 0x73866a
// 006666e5  85ff                 test edi, edi
// 006666e7  7504                 jne 0x6666ed
// 006666e9  85c0                 test eax, eax
// 006666eb  743c                 je 0x666729
// 006666ed  8a4c2428             mov cl, byte ptr [esp + 0x28]
// 006666f1  f6c108               test cl, 8
// 006666f4  740a                 je 0x666700
// 006666f6  85c0                 test eax, eax
// 006666f8  7406                 je 0x666700
// 006666fa  6a02                 push 2
// 006666fc  6a00                 push 0
// 006666fe  eb2d                 jmp 0x66672d
// 00666700  f6c104               test cl, 4
// 00666703  7430                 je 0x666735
// 00666705  85c0                 test eax, eax
// 00666707  742c                 je 0x666735
// 00666709  50                   push eax
// 0066670a  8bcb                 mov ecx, ebx
// 0066670c  e8531f0d00           call 0x738664
// 00666711  eb22                 jmp 0x666735
// 00666713  e8521f0d00           call 0x73866a
// 00666718  85ff                 test edi, edi
// 0066671a  7409                 je 0x666725
// 0066671c  85c0                 test eax, eax
// 0066671e  7509                 jne 0x666729
// 00666720  6a02                 push 2
// 00666722  50                   push eax
// 00666723  eb08                 jmp 0x66672d
// 00666725  85c0                 test eax, eax
// 00666727  740c                 je 0x666735
// 00666729  6a02                 push 2
// 0066672b  6a02                 push 2
// 0066672d  56                   push esi
// 0066672e  8bcd                 mov ecx, ebp
// 00666730  e8fbf4ffff           call 0x665c30
// 00666735  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00666738  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066673b  56                   push esi
// 0066673c  6a06                 push 6
// 0066673e  680a110000           push 0x110a
// 00666743  50                   push eax
// 00666744  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0066674a  8bf0                 mov esi, eax
// 0066674c  85f6                 test esi, esi
// 0066674e  0f854cffffff         jne 0x6666a0
// 00666754  5f                   pop edi
// 00666755  5b                   pop ebx
// 00666756  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00666759  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0066675c  52                   push edx
// 0066675d  ff1518ee7700         call dword ptr [0x77ee18]
// 00666763  5e                   pop esi
// 00666764  5d                   pop ebp
// 00666765  83c410               add esp, 0x10
// 00666768  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?UpdateSelectionForRect@CXTTreeBase@@MAEXPBUtagRECT@@IAAV?$CTypedPtrList@VCPtrList@@PAU_TREEITEM@@@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
