// roc 2007-08 00667870  unit: CXTTreeBase  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00667870
//
// 00667870  83ec08               sub esp, 8
// 00667873  56                   push esi
// 00667874  8bf1                 mov esi, ecx
// 00667876  837e0400             cmp dword ptr [esi + 4], 0
// 0066787a  750f                 jne 0x66788b
// 0066787c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0066787f  e8ba89fcff           call 0x63023e
// 00667884  5e                   pop esi
// 00667885  83c408               add esp, 8
// 00667888  c20c00               ret 0xc
// 0066788b  53                   push ebx
// 0066788c  57                   push edi
// 0066788d  8b3d4cec7700         mov edi, dword ptr [0x77ec4c]
// 00667893  6a11                 push 0x11
// 00667895  ffd7                 call edi
// 00667897  33db                 xor ebx, ebx
// 00667899  6685c0               test ax, ax
// 0066789c  0f9cc3               setl bl
// 0066789f  6a10                 push 0x10
// 006678a1  895c2414             mov dword ptr [esp + 0x14], ebx
// 006678a5  ffd7                 call edi
// 006678a7  33c9                 xor ecx, ecx
// 006678a9  6685c0               test ax, ax
// 006678ac  0f9cc1               setl cl
// 006678af  85db                 test ebx, ebx
// 006678b1  8bc1                 mov eax, ecx
// 006678b3  8944240c             mov dword ptr [esp + 0xc], eax
// 006678b7  7530                 jne 0x6678e9
// 006678b9  85c0                 test eax, eax
// 006678bb  752c                 jne 0x6678e9
// 006678bd  8bce                 mov ecx, esi
// 006678bf  e8bcf8ffff           call 0x667180
// 006678c4  83f801               cmp eax, 1
// 006678c7  7715                 ja 0x6678de
// 006678c9  751e                 jne 0x6678e9
// 006678cb  8bce                 mov ecx, esi
// 006678cd  e84edbffff           call 0x665420
// 006678d2  50                   push eax
// 006678d3  8bce                 mov ecx, esi
// 006678d5  e8b6d7ffff           call 0x665090
// 006678da  85c0                 test eax, eax
// 006678dc  750b                 jne 0x6678e9
// 006678de  6a00                 push 0
// 006678e0  6a00                 push 0
// 006678e2  8bce                 mov ecx, esi
// 006678e4  e837e8ffff           call 0x666120
// 006678e9  55                   push ebp
// 006678ea  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006678ee  8d45df               lea eax, [ebp - 0x21]
// 006678f1  33ff                 xor edi, edi
// 006678f3  83f807               cmp eax, 7
// 006678f6  773c                 ja 0x667934
// 006678f8  0fb690e4796600       movzx edx, byte ptr [eax + 0x6679e4]
// 006678ff  ff2495dc796600       jmp dword ptr [edx*4 + 0x6679dc]
// 00667906  8b4634               mov eax, dword ptr [esi + 0x34]
// 00667909  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066790c  6a00                 push 0
// 0066790e  6a09                 push 9
// 00667910  680a110000           push 0x110a
// 00667915  50                   push eax
// 00667916  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0066791c  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00667920  8bf8                 mov edi, eax
// 00667922  7503                 jne 0x667927
// 00667924  897e0c               mov dword ptr [esi + 0xc], edi
// 00667927  85db                 test ebx, ebx
// 00667929  7509                 jne 0x667934
// 0066792b  395c2410             cmp dword ptr [esp + 0x10], ebx
// 0066792f  7503                 jne 0x667934
// 00667931  895e0c               mov dword ptr [esi + 0xc], ebx
// 00667934  83fd26               cmp ebp, 0x26
// 00667937  7409                 je 0x667942
// 00667939  83fd21               cmp ebp, 0x21
// 0066793c  7404                 je 0x667942
// 0066793e  33db                 xor ebx, ebx
// 00667940  eb05                 jmp 0x667947
// 00667942  bb01000000           mov ebx, 1
// 00667947  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0066794a  e8ef88fcff           call 0x63023e
// 0066794f  85ff                 test edi, edi
// 00667951  747c                 je 0x6679cf
// 00667953  837c241400           cmp dword ptr [esp + 0x14], 0
// 00667958  7507                 jne 0x667961
// 0066795a  837c241000           cmp dword ptr [esp + 0x10], 0
// 0066795f  746e                 je 0x6679cf
// 00667961  83fd22               cmp ebp, 0x22
// 00667964  741b                 je 0x667981
// 00667966  83fd21               cmp ebp, 0x21
// 00667969  7416                 je 0x667981
// 0066796b  85db                 test ebx, ebx
// 0066796d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00667970  57                   push edi
// 00667971  7407                 je 0x66797a
// 00667973  e838daffff           call 0x6653b0
// 00667978  eb1d                 jmp 0x667997
// 0066797a  e811daffff           call 0x665390
// 0066797f  eb16                 jmp 0x667997
// 00667981  8b4634               mov eax, dword ptr [esi + 0x34]
// 00667984  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00667987  6a00                 push 0
// 00667989  6a09                 push 9
// 0066798b  680a110000           push 0x110a
// 00667990  51                   push ecx
// 00667991  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00667997  85c0                 test eax, eax
// 00667999  7502                 jne 0x66799d
// 0066799b  8bc7                 mov eax, edi
// 0066799d  837c241000           cmp dword ptr [esp + 0x10], 0
// 006679a2  7418                 je 0x6679bc
// 006679a4  8b560c               mov edx, dword ptr [esi + 0xc]
// 006679a7  6a01                 push 1
// 006679a9  50                   push eax
// 006679aa  52                   push edx
// 006679ab  8bce                 mov ecx, esi
// 006679ad  e87ee8ffff           call 0x666230
// 006679b2  5d                   pop ebp
// 006679b3  5f                   pop edi
// 006679b4  5b                   pop ebx
// 006679b5  5e                   pop esi
// 006679b6  83c408               add esp, 8
// 006679b9  c20c00               ret 0xc
// 006679bc  837c241400           cmp dword ptr [esp + 0x14], 0
// 006679c1  740c                 je 0x6679cf
// 006679c3  6a01                 push 1
// 006679c5  6a01                 push 1
// 006679c7  50                   push eax
// 006679c8  8bce                 mov ecx, esi
// 006679ca  e861e2ffff           call 0x665c30
// 006679cf  5d                   pop ebp
// 006679d0  5f                   pop edi
// 006679d1  5b                   pop ebx
// 006679d2  5e                   pop esi
// 006679d3  83c408               add esp, 8
// 006679d6  c20c00               ret 0xc
// 006679d9  8d4900               lea ecx, [ecx]
// 006679dc  06                   push es
// 006679dd  7966                 jns 0x667a45
// 006679df  003479               add byte ptr [ecx + edi*2], dh
// 006679e2  660000               add byte ptr [eax], al
// 006679e5  0001                 add byte ptr [ecx], al
// 006679e7  0101                 add dword ptr [ecx], eax
// 006679e9  0001                 add byte ptr [ecx], al
// copied from an identical function in another client (function ?OnKeyDown@CXTTreeBase@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp