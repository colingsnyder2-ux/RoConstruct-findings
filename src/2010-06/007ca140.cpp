// roc 2010-06 007ca140  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ca140
//
// 007ca140  83ec18               sub esp, 0x18
// 007ca143  53                   push ebx
// 007ca144  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007ca148  817b0404010000       cmp dword ptr [ebx + 4], 0x104
// 007ca14f  56                   push esi
// 007ca150  8bf1                 mov esi, ecx
// 007ca152  0f8597000000         jne 0x7ca1ef
// 007ca158  b800200000           mov eax, 0x2000
// 007ca15d  6685430e             test word ptr [ebx + 0xe], ax
// 007ca161  0f8488000000         je 0x7ca1ef
// 007ca167  e8d4faffff           call 0x7c9c40
// 007ca16c  83780400             cmp dword ptr [eax + 4], 0
// 007ca170  7f7d                 jg 0x7ca1ef
// 007ca172  6a00                 push 0
// 007ca174  8bce                 mov ecx, esi
// 007ca176  e8c5faffff           call 0x7c9c40
// 007ca17b  8bc8                 mov ecx, eax
// 007ca17d  e82e8e0500           call 0x822fb0
// 007ca182  85c0                 test eax, eax
// 007ca184  7569                 jne 0x7ca1ef
// 007ca186  8bce                 mov ecx, esi
// 007ca188  e8b3faffff           call 0x7c9c40
// 007ca18d  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 007ca193  85c0                 test eax, eax
// 007ca195  7403                 je 0x7ca19a
// 007ca197  8b4020               mov eax, dword ptr [eax + 0x20]
// 007ca19a  50                   push eax
// 007ca19b  e8508c0500           call 0x822df0
// 007ca1a0  83c404               add esp, 4
// 007ca1a3  85c0                 test eax, eax
// 007ca1a5  7448                 je 0x7ca1ef
// 007ca1a7  837b0812             cmp dword ptr [ebx + 8], 0x12
// 007ca1ab  7513                 jne 0x7ca1c0
// 007ca1ad  6a01                 push 1
// 007ca1af  8bce                 mov ecx, esi
// 007ca1b1  e85afaffff           call 0x7c9c10
// 007ca1b6  5e                   pop esi
// 007ca1b7  33c0                 xor eax, eax
// 007ca1b9  5b                   pop ebx
// 007ca1ba  83c418               add esp, 0x18
// 007ca1bd  c20400               ret 4
// 007ca1c0  837e2400             cmp dword ptr [esi + 0x24], 0
// 007ca1c4  7412                 je 0x7ca1d8
// 007ca1c6  6a10                 push 0x10
// 007ca1c8  ff157cbc9e00         call dword ptr [0x9ebc7c]
// 007ca1ce  b900800000           mov ecx, 0x8000
// 007ca1d3  6685c1               test cx, ax
// 007ca1d6  7517                 jne 0x7ca1ef
// 007ca1d8  8b4308               mov eax, dword ptr [ebx + 8]
// 007ca1db  85c0                 test eax, eax
// 007ca1dd  7410                 je 0x7ca1ef
// 007ca1df  50                   push eax
// 007ca1e0  8bce                 mov ecx, esi
// 007ca1e2  e8f9fdffff           call 0x7c9fe0
// 007ca1e7  85c0                 test eax, eax
// 007ca1e9  0f858b000000         jne 0x7ca27a
// 007ca1ef  8b4304               mov eax, dword ptr [ebx + 4]
// 007ca1f2  3d05010000           cmp eax, 0x105
// 007ca1f7  7407                 je 0x7ca200
// 007ca1f9  3d01010000           cmp eax, 0x101
// 007ca1fe  752e                 jne 0x7ca22e
// 007ca200  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 007ca207  7425                 je 0x7ca22e
// 007ca209  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 007ca210  741c                 je 0x7ca22e
// 007ca212  6a00                 push 0
// 007ca214  8bce                 mov ecx, esi
// 007ca216  e825faffff           call 0x7c9c40
// 007ca21b  8bc8                 mov ecx, eax
// 007ca21d  e88e8d0500           call 0x822fb0
// 007ca222  85c0                 test eax, eax
// 007ca224  7508                 jne 0x7ca22e
// 007ca226  50                   push eax
// 007ca227  8bce                 mov ecx, esi
// 007ca229  e8e2f9ffff           call 0x7c9c10
// 007ca22e  8b4304               mov eax, dword ptr [ebx + 4]
// 007ca231  83f87b               cmp eax, 0x7b
// 007ca234  7407                 je 0x7ca23d
// 007ca236  3d05010000           cmp eax, 0x105
// 007ca23b  754a                 jne 0x7ca287
// 007ca23d  6a00                 push 0
// 007ca23f  8bce                 mov ecx, esi
// 007ca241  e8faf9ffff           call 0x7c9c40
// 007ca246  8bc8                 mov ecx, eax
// 007ca248  e8638d0500           call 0x822fb0
// 007ca24d  85c0                 test eax, eax
// 007ca24f  7436                 je 0x7ca287
// 007ca251  68a0477b00           push 0x7b47a0
// 007ca256  b94462c200           mov ecx, 0xc26244
// 007ca25b  e8182b1b00           call 0x97cd78
// 007ca260  85c0                 test eax, eax
// 007ca262  7505                 jne 0x7ca269
// 007ca264  e8e3d9fdff           call 0x7a7c4c
// 007ca269  8b530c               mov edx, dword ptr [ebx + 0xc]
// 007ca26c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007ca26f  52                   push edx
// 007ca270  51                   push ecx
// 007ca271  6a7b                 push 0x7b
// 007ca273  8bc8                 mov ecx, eax
// 007ca275  e806680700           call 0x840a80
// 007ca27a  5e                   pop esi
// 007ca27b  b801000000           mov eax, 1
// 007ca280  5b                   pop ebx
// 007ca281  83c418               add esp, 0x18
// 007ca284  c20400               ret 4
// 007ca287  817b040a020000       cmp dword ptr [ebx + 4], 0x20a
// 007ca28e  57                   push edi
// 007ca28f  0f85be000000         jne 0x7ca353
// 007ca295  68a0477b00           push 0x7b47a0
// 007ca29a  b94462c200           mov ecx, 0xc26244
// 007ca29f  e8d42a1b00           call 0x97cd78
// 007ca2a4  85c0                 test eax, eax
// 007ca2a6  7505                 jne 0x7ca2ad
// 007ca2a8  e89fd9fdff           call 0x7a7c4c
// 007ca2ad  83782000             cmp dword ptr [eax + 0x20], 0
// 007ca2b1  7e35                 jle 0x7ca2e8
// 007ca2b3  68a0477b00           push 0x7b47a0
// 007ca2b8  b94462c200           mov ecx, 0xc26244
// 007ca2bd  e8b62a1b00           call 0x97cd78
// 007ca2c2  85c0                 test eax, eax
// 007ca2c4  7505                 jne 0x7ca2cb
// 007ca2c6  e881d9fdff           call 0x7a7c4c
// 007ca2cb  8b530c               mov edx, dword ptr [ebx + 0xc]
// 007ca2ce  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007ca2d1  52                   push edx
// 007ca2d2  51                   push ecx
// 007ca2d3  680a020000           push 0x20a
// 007ca2d8  8bc8                 mov ecx, eax
// 007ca2da  e8a1670700           call 0x840a80
// 007ca2df  5f                   pop edi
// 007ca2e0  5e                   pop esi
// 007ca2e1  5b                   pop ebx
// 007ca2e2  83c418               add esp, 0x18
// 007ca2e5  c20400               ret 4
// 007ca2e8  8b16                 mov edx, dword ptr [esi]
// 007ca2ea  8b4258               mov eax, dword ptr [edx + 0x58]
// 007ca2ed  8bce                 mov ecx, esi
// 007ca2ef  ffd0                 call eax
// 007ca2f1  8d4c240c             lea ecx, [esp + 0xc]
// 007ca2f5  51                   push ecx
// 007ca2f6  8bf8                 mov edi, eax
// 007ca2f8  ff1574bc9e00         call dword ptr [0x9ebc74]
// 007ca2fe  85ff                 test edi, edi
// 007ca300  7451                 je 0x7ca353
// 007ca302  83bff800000003       cmp dword ptr [edi + 0xf8], 3
// 007ca309  7548                 jne 0x7ca353
// 007ca30b  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007ca30f  55                   push ebp
// 007ca310  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007ca314  57                   push edi
// 007ca315  8d4c241c             lea ecx, [esp + 0x1c]
// 007ca319  e8924f0300           call 0x7ff2b0
// 007ca31e  55                   push ebp
// 007ca31f  53                   push ebx
// 007ca320  50                   push eax
// 007ca321  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 007ca327  5d                   pop ebp
// 007ca328  85c0                 test eax, eax
// 007ca32a  7423                 je 0x7ca34f
// 007ca32c  8b442428             mov eax, dword ptr [esp + 0x28]
// 007ca330  33d2                 xor edx, edx
// 007ca332  6639500a             cmp word ptr [eax + 0xa], dx
// 007ca336  8bcf                 mov ecx, edi
// 007ca338  0f9ec2               setle dl
// 007ca33b  52                   push edx
// 007ca33c  e84ff30700           call 0x849690
// 007ca341  5f                   pop edi
// 007ca342  5e                   pop esi
// 007ca343  b801000000           mov eax, 1
// 007ca348  5b                   pop ebx
// 007ca349  83c418               add esp, 0x18
// 007ca34c  c20400               ret 4
// 007ca34f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007ca353  8b4304               mov eax, dword ptr [ebx + 4]
// 007ca356  3d00010000           cmp eax, 0x100
// 007ca35b  7228                 jb 0x7ca385
// 007ca35d  3d08010000           cmp eax, 0x108
// 007ca362  7721                 ja 0x7ca385
// 007ca364  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 007ca36a  85c0                 test eax, eax
// 007ca36c  7403                 je 0x7ca371
// 007ca36e  8b4020               mov eax, dword ptr [eax + 0x20]
// 007ca371  53                   push ebx
// 007ca372  50                   push eax
// 007ca373  8bce                 mov ecx, esi
// 007ca375  e836deffff           call 0x7c81b0
// 007ca37a  8bc8                 mov ecx, eax
// 007ca37c  e8ef800700           call 0x842470
// 007ca381  85c0                 test eax, eax
// 007ca383  75bc                 jne 0x7ca341
// 007ca385  5f                   pop edi
// 007ca386  5e                   pop esi
// 007ca387  33c0                 xor eax, eax
// 007ca389  5b                   pop ebx
// 007ca38a  83c418               add esp, 0x18
// 007ca38d  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateFrameMessage@CXTPCommandBars@@QAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp