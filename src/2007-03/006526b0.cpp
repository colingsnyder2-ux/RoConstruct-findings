// roc 2007-03 006526b0  unit: seg_00650000  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006526b0
//
// 006526b0  83ec10               sub esp, 0x10
// 006526b3  55                   push ebp
// 006526b4  56                   push esi
// 006526b5  6a00                 push 0
// 006526b7  8be9                 mov ebp, ecx
// 006526b9  8b4534               mov eax, dword ptr [ebp + 0x34]
// 006526bc  8b4020               mov eax, dword ptr [eax + 0x20]
// 006526bf  6a00                 push 0
// 006526c1  680a110000           push 0x110a
// 006526c6  50                   push eax
// 006526c7  ff1550ee7700         call dword ptr [0x77ee50]
// 006526cd  8bf0                 mov esi, eax
// 006526cf  85f6                 test esi, esi
// 006526d1  0f84bf000000         je 0x652796
// 006526d7  53                   push ebx
// 006526d8  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006526dc  57                   push edi
// 006526dd  8d4900               lea ecx, [ecx]
// 006526e0  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 006526e3  6a02                 push 2
// 006526e5  56                   push esi
// 006526e6  e89b860e00           call 0x73ad86
// 006526eb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006526ee  51                   push ecx
// 006526ef  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 006526f2  8d542414             lea edx, [esp + 0x14]
// 006526f6  8bf8                 mov edi, eax
// 006526f8  52                   push edx
// 006526f9  d1ef                 shr edi, 1
// 006526fb  56                   push esi
// 006526fc  83e701               and edi, 1
// 006526ff  e80ec2fcff           call 0x61e912
// 00652704  8b442424             mov eax, dword ptr [esp + 0x24]
// 00652708  50                   push eax
// 00652709  8d4c2414             lea ecx, [esp + 0x14]
// 0065270d  51                   push ecx
// 0065270e  8bd1                 mov edx, ecx
// 00652710  52                   push edx
// 00652711  ff153cef7700         call dword ptr [0x77ef3c]
// 00652717  85c0                 test eax, eax
// 00652719  6a00                 push 0
// 0065271b  8bcb                 mov ecx, ebx
// 0065271d  56                   push esi
// 0065271e  7433                 je 0x652753
// 00652720  e891860e00           call 0x73adb6
// 00652725  85ff                 test edi, edi
// 00652727  7504                 jne 0x65272d
// 00652729  85c0                 test eax, eax
// 0065272b  743c                 je 0x652769
// 0065272d  8a4c2428             mov cl, byte ptr [esp + 0x28]
// 00652731  f6c108               test cl, 8
// 00652734  740a                 je 0x652740
// 00652736  85c0                 test eax, eax
// 00652738  7406                 je 0x652740
// 0065273a  6a02                 push 2
// 0065273c  6a00                 push 0
// 0065273e  eb2d                 jmp 0x65276d
// 00652740  f6c104               test cl, 4
// 00652743  7430                 je 0x652775
// 00652745  85c0                 test eax, eax
// 00652747  742c                 je 0x652775
// 00652749  50                   push eax
// 0065274a  8bcb                 mov ecx, ebx
// 0065274c  e85f860e00           call 0x73adb0
// 00652751  eb22                 jmp 0x652775
// 00652753  e85e860e00           call 0x73adb6
// 00652758  85ff                 test edi, edi
// 0065275a  7409                 je 0x652765
// 0065275c  85c0                 test eax, eax
// 0065275e  7509                 jne 0x652769
// 00652760  6a02                 push 2
// 00652762  50                   push eax
// 00652763  eb08                 jmp 0x65276d
// 00652765  85c0                 test eax, eax
// 00652767  740c                 je 0x652775
// 00652769  6a02                 push 2
// 0065276b  6a02                 push 2
// 0065276d  56                   push esi
// 0065276e  8bcd                 mov ecx, ebp
// 00652770  e88bf5ffff           call 0x651d00
// 00652775  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00652778  8b4020               mov eax, dword ptr [eax + 0x20]
// 0065277b  56                   push esi
// 0065277c  6a06                 push 6
// 0065277e  680a110000           push 0x110a
// 00652783  50                   push eax
// 00652784  ff1550ee7700         call dword ptr [0x77ee50]
// 0065278a  8bf0                 mov esi, eax
// 0065278c  85f6                 test esi, esi
// 0065278e  0f854cffffff         jne 0x6526e0
// 00652794  5f                   pop edi
// 00652795  5b                   pop ebx
// 00652796  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00652799  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0065279c  52                   push edx
// 0065279d  ff15e0ee7700         call dword ptr [0x77eee0]
// 006527a3  5e                   pop esi
// 006527a4  5d                   pop ebp
// 006527a5  83c410               add esp, 0x10
// 006527a8  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?UpdateSelectionForRect@CXTTreeBase@@MAEXPBUtagRECT@@IAAV?$CTypedPtrList@VCPtrList@@PAU_TREEITEM@@@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
