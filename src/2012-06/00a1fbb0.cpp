// roc 2012-06 00a1fbb0  unit: CXTPRibbonBar  size: 992 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1fbb0
//
// 00a1fbb0  6aff                 push -1
// 00a1fbb2  686044ae00           push 0xae4460
// 00a1fbb7  64a100000000         mov eax, dword ptr fs:[0]
// 00a1fbbd  50                   push eax
// 00a1fbbe  83ec68               sub esp, 0x68
// 00a1fbc1  53                   push ebx
// 00a1fbc2  55                   push ebp
// 00a1fbc3  56                   push esi
// 00a1fbc4  57                   push edi
// 00a1fbc5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a1fbca  33c4                 xor eax, esp
// 00a1fbcc  50                   push eax
// 00a1fbcd  8d44247c             lea eax, [esp + 0x7c]
// 00a1fbd1  64a300000000         mov dword ptr fs:[0], eax
// 00a1fbd7  8bf1                 mov esi, ecx
// 00a1fbd9  e872e8ffff           call 0xa1e450
// 00a1fbde  85c0                 test eax, eax
// 00a1fbe0  0f8496030000         je 0xa1ff7c
// 00a1fbe6  83be4802000000       cmp dword ptr [esi + 0x248], 0
// 00a1fbed  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 00a1fbf3  8b8e30020000         mov ecx, dword ptr [esi + 0x230]
// 00a1fbf9  8b9e34020000         mov ebx, dword ptr [esi + 0x234]
// 00a1fbff  8b9638020000         mov edx, dword ptr [esi + 0x238]
// 00a1fc05  89442448             mov dword ptr [esp + 0x48], eax
// 00a1fc09  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00a1fc0d  895c2450             mov dword ptr [esp + 0x50], ebx
// 00a1fc11  89542454             mov dword ptr [esp + 0x54], edx
// 00a1fc15  754a                 jne 0xa1fc61
// 00a1fc17  83be4c02000000       cmp dword ptr [esi + 0x24c], 0
// 00a1fc1e  7441                 je 0xa1fc61
// 00a1fc20  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 00a1fc26  85c9                 test ecx, ecx
// 00a1fc28  7422                 je 0xa1fc4c
// 00a1fc2a  8d442428             lea eax, [esp + 0x28]
// 00a1fc2e  50                   push eax
// 00a1fc2f  e83c4af6ff           call 0x984670
// 00a1fc34  8b4808               mov ecx, dword ptr [eax + 8]
// 00a1fc37  2b08                 sub ecx, dword ptr [eax]
// 00a1fc39  8dbe1c020000         lea edi, [esi + 0x21c]
// 00a1fc3f  83c102               add ecx, 2
// 00a1fc42  03d9                 add ebx, ecx
// 00a1fc44  895c2450             mov dword ptr [esp + 0x50], ebx
// 00a1fc48  891f                 mov dword ptr [edi], ebx
// 00a1fc4a  eb22                 jmp 0xa1fc6e
// 00a1fc4c  b90c000000           mov ecx, 0xc
// 00a1fc51  03d9                 add ebx, ecx
// 00a1fc53  8dbe1c020000         lea edi, [esi + 0x21c]
// 00a1fc59  895c2450             mov dword ptr [esp + 0x50], ebx
// 00a1fc5d  891f                 mov dword ptr [edi], ebx
// 00a1fc5f  eb0d                 jmp 0xa1fc6e
// 00a1fc61  83861c02000046       add dword ptr [esi + 0x21c], 0x46
// 00a1fc68  8dbe1c020000         lea edi, [esi + 0x21c]
// 00a1fc6e  8bce                 mov ecx, esi
// 00a1fc70  e8cb5cf7ff           call 0x995940
// 00a1fc75  8bd8                 mov ebx, eax
// 00a1fc77  8bcb                 mov ecx, ebx
// 00a1fc79  e854990700           call 0xa995d2
// 00a1fc7e  8bcb                 mov ecx, ebx
// 00a1fc80  8be8                 mov ebp, eax
// 00a1fc82  e851990700           call 0xa995d8
// 00a1fc87  8b9680020000         mov edx, dword ptr [esi + 0x280]
// 00a1fc8d  2480                 and al, 0x80
// 00a1fc8f  33c9                 xor ecx, ecx
// 00a1fc91  3c80                 cmp al, 0x80
// 00a1fc93  8b4240               mov eax, dword ptr [edx + 0x40]
// 00a1fc96  0f94c1               sete cl
// 00a1fc99  014704               add dword ptr [edi + 4], eax
// 00a1fc9c  83470cfd             add dword ptr [edi + 0xc], -3
// 00a1fca0  8b8680020000         mov eax, dword ptr [esi + 0x280]
// 00a1fca6  8b5044               mov edx, dword ptr [eax + 0x44]
// 00a1fca9  89542424             mov dword ptr [esp + 0x24], edx
// 00a1fcad  33d2                 xor edx, edx
// 00a1fcaf  8bc5                 mov eax, ebp
// 00a1fcb1  2500000001           and eax, 0x1000000
// 00a1fcb6  3d00000001           cmp eax, 0x1000000
// 00a1fcbb  0f94c2               sete dl
// 00a1fcbe  33db                 xor ebx, ebx
// 00a1fcc0  8bc5                 mov eax, ebp
// 00a1fcc2  2500000800           and eax, 0x80000
// 00a1fcc7  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00a1fccf  89542418             mov dword ptr [esp + 0x18], edx
// 00a1fcd3  8bd5                 mov edx, ebp
// 00a1fcd5  81e200000100         and edx, 0x10000
// 00a1fcdb  81fa00000100         cmp edx, 0x10000
// 00a1fce1  0f94c3               sete bl
// 00a1fce4  8bd5                 mov edx, ebp
// 00a1fce6  81e200000200         and edx, 0x20000
// 00a1fcec  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00a1fcf0  33db                 xor ebx, ebx
// 00a1fcf2  81fa00000200         cmp edx, 0x20000
// 00a1fcf8  0f94c3               sete bl
// 00a1fcfb  8bd3                 mov edx, ebx
// 00a1fcfd  89542428             mov dword ptr [esp + 0x28], edx
// 00a1fd01  85c9                 test ecx, ecx
// 00a1fd03  7518                 jne 0xa1fd1d
// 00a1fd05  85c0                 test eax, eax
// 00a1fd07  7414                 je 0xa1fd1d
// 00a1fd09  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 00a1fd0d  7504                 jne 0xa1fd13
// 00a1fd0f  85d2                 test edx, edx
// 00a1fd11  740a                 je 0xa1fd1d
// 00a1fd13  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00a1fd1b  eb08                 jmp 0xa1fd25
// 00a1fd1d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a1fd25  8bd8                 mov ebx, eax
// 00a1fd27  85c0                 test eax, eax
// 00a1fd29  743a                 je 0xa1fd65
// 00a1fd2b  85c9                 test ecx, ecx
// 00a1fd2d  7536                 jne 0xa1fd65
// 00a1fd2f  8bce                 mov ecx, esi
// 00a1fd31  e80a5cf7ff           call 0x995940
// 00a1fd36  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a1fd39  6a00                 push 0
// 00a1fd3b  50                   push eax
// 00a1fd3c  ff15e03bb200         call dword ptr [0xb23be0]
// 00a1fd42  50                   push eax
// 00a1fd43  e8202af6ff           call 0x982768
// 00a1fd48  85c0                 test eax, eax
// 00a1fd4a  7419                 je 0xa1fd65
// 00a1fd4c  8b4804               mov ecx, dword ptr [eax + 4]
// 00a1fd4f  6a00                 push 0
// 00a1fd51  6860f00000           push 0xf060
// 00a1fd56  51                   push ecx
// 00a1fd57  ff15383cb200         call dword ptr [0xb23c38]
// 00a1fd5d  a803                 test al, 3
// 00a1fd5f  7404                 je 0xa1fd65
// 00a1fd61  33c9                 xor ecx, ecx
// 00a1fd63  eb04                 jmp 0xa1fd69
// 00a1fd65  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a1fd69  33c0                 xor eax, eax
// 00a1fd6b  39442418             cmp dword ptr [esp + 0x18], eax
// 00a1fd6f  740e                 je 0xa1fd7f
// 00a1fd71  f7c500000040         test ebp, 0x40000000
// 00a1fd77  7406                 je 0xa1fd7f
// 00a1fd79  33db                 xor ebx, ebx
// 00a1fd7b  89442414             mov dword ptr [esp + 0x14], eax
// 00a1fd7f  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00a1fd83  3be8                 cmp ebp, eax
// 00a1fd85  7509                 jne 0xa1fd90
// 00a1fd87  3bd8                 cmp ebx, eax
// 00a1fd89  7405                 je 0xa1fd90
// 00a1fd8b  b801000000           mov eax, 1
// 00a1fd90  57                   push edi
// 00a1fd91  51                   push ecx
// 00a1fd92  50                   push eax
// 00a1fd93  6860f00000           push 0xf060
// 00a1fd98  8bce                 mov ecx, esi
// 00a1fd9a  e821fcffff           call 0xa1f9c0
// 00a1fd9f  85ed                 test ebp, ebp
// 00a1fda1  7511                 jne 0xa1fdb4
// 00a1fda3  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00a1fda7  740b                 je 0xa1fdb4
// 00a1fda9  396c2418             cmp dword ptr [esp + 0x18], ebp
// 00a1fdad  7405                 je 0xa1fdb4
// 00a1fdaf  8d4501               lea eax, [ebp + 1]
// 00a1fdb2  eb02                 jmp 0xa1fdb6
// 00a1fdb4  33c0                 xor eax, eax
// 00a1fdb6  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a1fdba  57                   push edi
// 00a1fdbb  53                   push ebx
// 00a1fdbc  50                   push eax
// 00a1fdbd  6820f10000           push 0xf120
// 00a1fdc2  8bce                 mov ecx, esi
// 00a1fdc4  e8f7fbffff           call 0xa1f9c0
// 00a1fdc9  85ed                 test ebp, ebp
// 00a1fdcb  7511                 jne 0xa1fdde
// 00a1fdcd  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00a1fdd1  740b                 je 0xa1fdde
// 00a1fdd3  396c2418             cmp dword ptr [esp + 0x18], ebp
// 00a1fdd7  7505                 jne 0xa1fdde
// 00a1fdd9  8d4501               lea eax, [ebp + 1]
// 00a1fddc  eb02                 jmp 0xa1fde0
// 00a1fdde  33c0                 xor eax, eax
// 00a1fde0  57                   push edi
// 00a1fde1  53                   push ebx
// 00a1fde2  50                   push eax
// 00a1fde3  6830f00000           push 0xf030
// 00a1fde8  8bce                 mov ecx, esi
// 00a1fdea  e8d1fbffff           call 0xa1f9c0
// 00a1fdef  85ed                 test ebp, ebp
// 00a1fdf1  750b                 jne 0xa1fdfe
// 00a1fdf3  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00a1fdf7  7405                 je 0xa1fdfe
// 00a1fdf9  8d4501               lea eax, [ebp + 1]
// 00a1fdfc  eb02                 jmp 0xa1fe00
// 00a1fdfe  33c0                 xor eax, eax
// 00a1fe00  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a1fe04  57                   push edi
// 00a1fe05  52                   push edx
// 00a1fe06  50                   push eax
// 00a1fe07  6820f00000           push 0xf020
// 00a1fe0c  8bce                 mov ecx, esi
// 00a1fe0e  e8adfbffff           call 0xa1f9c0
// 00a1fe13  85ed                 test ebp, ebp
// 00a1fe15  7407                 je 0xa1fe1e
// 00a1fe17  8386240200009c       add dword ptr [esi + 0x224], -0x64
// 00a1fe1e  8b8e28020000         mov ecx, dword ptr [esi + 0x228]
// 00a1fe24  8b9624020000         mov edx, dword ptr [esi + 0x224]
// 00a1fe2a  8b9e20020000         mov ebx, dword ptr [esi + 0x220]
// 00a1fe30  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 00a1fe36  51                   push ecx
// 00a1fe37  8dae0c020000         lea ebp, [esi + 0x20c]
// 00a1fe3d  52                   push edx
// 00a1fe3e  53                   push ebx
// 00a1fe3f  83c046               add eax, 0x46
// 00a1fe42  50                   push eax
// 00a1fe43  55                   push ebp
// 00a1fe44  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a1fe4a  56                   push esi
// 00a1fe4b  8d4c246c             lea ecx, [esp + 0x6c]
// 00a1fe4f  e84831f6ff           call 0x982f9c
// 00a1fe54  8bce                 mov ecx, esi
// 00a1fe56  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 00a1fe61  e88ae5ffff           call 0xa1e3f0
// 00a1fe66  05b4050000           add eax, 0x5b4
// 00a1fe6b  50                   push eax
// 00a1fe6c  8d44246c             lea eax, [esp + 0x6c]
// 00a1fe70  50                   push eax
// 00a1fe71  8d4c2460             lea ecx, [esp + 0x60]
// 00a1fe75  e8b656fbff           call 0x9d5530
// 00a1fe7a  8d9e94020000         lea ebx, [esi + 0x294]
// 00a1fe80  53                   push ebx
// 00a1fe81  8bce                 mov ecx, esi
// 00a1fe83  c684248800000001     mov byte ptr [esp + 0x88], 1
// 00a1fe8b  e8b05af7ff           call 0x995940
// 00a1fe90  8bc8                 mov ecx, eax
// 00a1fe92  e85f28f6ff           call 0x9826f6
// 00a1fe97  8d4c2428             lea ecx, [esp + 0x28]
// 00a1fe9b  51                   push ecx
// 00a1fe9c  8bcb                 mov ecx, ebx
// 00a1fe9e  ff155846b200         call dword ptr [0xb24658]
// 00a1fea4  50                   push eax
// 00a1fea5  8bcb                 mov ecx, ebx
// 00a1fea7  ff159847b200         call dword ptr [0xb24798]
// 00a1fead  8b542478             mov edx, dword ptr [esp + 0x78]
// 00a1feb1  50                   push eax
// 00a1feb2  52                   push edx
// 00a1feb3  ff154021b200         call dword ptr [0xb22140]
// 00a1feb9  8b4508               mov eax, dword ptr [ebp + 8]
// 00a1febc  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a1fec0  2b4500               sub eax, dword ptr [ebp]
// 00a1fec3  83c614               add esi, 0x14
// 00a1fec6  3bc6                 cmp eax, esi
// 00a1fec8  7d06                 jge 0xa1fed0
// 00a1feca  8b7508               mov esi, dword ptr [ebp + 8]
// 00a1fecd  2b7500               sub esi, dword ptr [ebp]
// 00a1fed0  8b4d00               mov ecx, dword ptr [ebp]
// 00a1fed3  8b5504               mov edx, dword ptr [ebp + 4]
// 00a1fed6  8b4508               mov eax, dword ptr [ebp + 8]
// 00a1fed9  2bc1                 sub eax, ecx
// 00a1fedb  8954243c             mov dword ptr [esp + 0x3c], edx
// 00a1fedf  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00a1fee2  2bc6                 sub eax, esi
// 00a1fee4  89542444             mov dword ptr [esp + 0x44], edx
// 00a1fee8  99                   cdq 
// 00a1fee9  2bc2                 sub eax, edx
// 00a1feeb  d1f8                 sar eax, 1
// 00a1feed  03c8                 add ecx, eax
// 00a1feef  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a1fef3  03ce                 add ecx, esi
// 00a1fef5  8d442438             lea eax, [esp + 0x38]
// 00a1fef9  894c2440             mov dword ptr [esp + 0x40], ecx
// 00a1fefd  50                   push eax
// 00a1fefe  8d4c244c             lea ecx, [esp + 0x4c]
// 00a1ff02  51                   push ecx
// 00a1ff03  8d542430             lea edx, [esp + 0x30]
// 00a1ff07  52                   push edx
// 00a1ff08  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a1ff0e  85c0                 test eax, eax
// 00a1ff10  7429                 je 0xa1ff3b
// 00a1ff12  8b4708               mov eax, dword ptr [edi + 8]
// 00a1ff15  2b07                 sub eax, dword ptr [edi]
// 00a1ff17  3bc6                 cmp eax, esi
// 00a1ff19  7d05                 jge 0xa1ff20
// 00a1ff1b  8b7708               mov esi, dword ptr [edi + 8]
// 00a1ff1e  2b37                 sub esi, dword ptr [edi]
// 00a1ff20  8b4708               mov eax, dword ptr [edi + 8]
// 00a1ff23  2b07                 sub eax, dword ptr [edi]
// 00a1ff25  2bc6                 sub eax, esi
// 00a1ff27  99                   cdq 
// 00a1ff28  2bc2                 sub eax, edx
// 00a1ff2a  d1f8                 sar eax, 1
// 00a1ff2c  0307                 add eax, dword ptr [edi]
// 00a1ff2e  8d0c30               lea ecx, [eax + esi]
// 00a1ff31  89442438             mov dword ptr [esp + 0x38], eax
// 00a1ff35  894c2440             mov dword ptr [esp + 0x40], ecx
// 00a1ff39  eb04                 jmp 0xa1ff3f
// 00a1ff3b  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a1ff3f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a1ff43  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a1ff47  894500               mov dword ptr [ebp], eax
// 00a1ff4a  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a1ff4e  895504               mov dword ptr [ebp + 4], edx
// 00a1ff51  894508               mov dword ptr [ebp + 8], eax
// 00a1ff54  894d0c               mov dword ptr [ebp + 0xc], ecx
// 00a1ff57  8d4c2458             lea ecx, [esp + 0x58]
// 00a1ff5b  c684248400000000     mov byte ptr [esp + 0x84], 0
// 00a1ff63  e84856fbff           call 0x9d55b0
// 00a1ff68  8d4c2468             lea ecx, [esp + 0x68]
// 00a1ff6c  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 00a1ff77  e81a30f6ff           call 0x982f96
// 00a1ff7c  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a1ff80  64890d00000000       mov dword ptr fs:[0], ecx
// 00a1ff87  59                   pop ecx
// 00a1ff88  5f                   pop edi
// 00a1ff89  5e                   pop esi
// 00a1ff8a  5d                   pop ebp
// 00a1ff8b  5b                   pop ebx
// 00a1ff8c  83c474               add esp, 0x74
// 00a1ff8f  c3                   ret 
// copied from an identical function in another client (function ?RepositionCaptionButtons@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonBar.cpp