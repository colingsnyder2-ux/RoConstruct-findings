// roc 2012-06 009a41c0  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a41c0
//
// 009a41c0  83ec18               sub esp, 0x18
// 009a41c3  53                   push ebx
// 009a41c4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 009a41c8  817b0404010000       cmp dword ptr [ebx + 4], 0x104
// 009a41cf  56                   push esi
// 009a41d0  8bf1                 mov esi, ecx
// 009a41d2  0f8597000000         jne 0x9a426f
// 009a41d8  b800200000           mov eax, 0x2000
// 009a41dd  6685430e             test word ptr [ebx + 0xe], ax
// 009a41e1  0f8488000000         je 0x9a426f
// 009a41e7  e8d4faffff           call 0x9a3cc0
// 009a41ec  83780400             cmp dword ptr [eax + 4], 0
// 009a41f0  7f7d                 jg 0x9a426f
// 009a41f2  6a00                 push 0
// 009a41f4  8bce                 mov ecx, esi
// 009a41f6  e8c5faffff           call 0x9a3cc0
// 009a41fb  8bc8                 mov ecx, eax
// 009a41fd  e8ee490500           call 0x9f8bf0
// 009a4202  85c0                 test eax, eax
// 009a4204  7569                 jne 0x9a426f
// 009a4206  8bce                 mov ecx, esi
// 009a4208  e8b3faffff           call 0x9a3cc0
// 009a420d  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 009a4213  85c0                 test eax, eax
// 009a4215  7403                 je 0x9a421a
// 009a4217  8b4020               mov eax, dword ptr [eax + 0x20]
// 009a421a  50                   push eax
// 009a421b  e810480500           call 0x9f8a30
// 009a4220  83c404               add esp, 4
// 009a4223  85c0                 test eax, eax
// 009a4225  7448                 je 0x9a426f
// 009a4227  837b0812             cmp dword ptr [ebx + 8], 0x12
// 009a422b  7513                 jne 0x9a4240
// 009a422d  6a01                 push 1
// 009a422f  8bce                 mov ecx, esi
// 009a4231  e85afaffff           call 0x9a3c90
// 009a4236  5e                   pop esi
// 009a4237  33c0                 xor eax, eax
// 009a4239  5b                   pop ebx
// 009a423a  83c418               add esp, 0x18
// 009a423d  c20400               ret 4
// 009a4240  837e2400             cmp dword ptr [esi + 0x24], 0
// 009a4244  7412                 je 0x9a4258
// 009a4246  6a10                 push 0x10
// 009a4248  ff15843ab200         call dword ptr [0xb23a84]
// 009a424e  b900800000           mov ecx, 0x8000
// 009a4253  6685c1               test cx, ax
// 009a4256  7517                 jne 0x9a426f
// 009a4258  8b4308               mov eax, dword ptr [ebx + 8]
// 009a425b  85c0                 test eax, eax
// 009a425d  7410                 je 0x9a426f
// 009a425f  50                   push eax
// 009a4260  8bce                 mov ecx, esi
// 009a4262  e8f9fdffff           call 0x9a4060
// 009a4267  85c0                 test eax, eax
// 009a4269  0f858b000000         jne 0x9a42fa
// 009a426f  8b4304               mov eax, dword ptr [ebx + 4]
// 009a4272  3d05010000           cmp eax, 0x105
// 009a4277  7407                 je 0x9a4280
// 009a4279  3d01010000           cmp eax, 0x101
// 009a427e  752e                 jne 0x9a42ae
// 009a4280  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 009a4287  7425                 je 0x9a42ae
// 009a4289  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 009a4290  741c                 je 0x9a42ae
// 009a4292  6a00                 push 0
// 009a4294  8bce                 mov ecx, esi
// 009a4296  e825faffff           call 0x9a3cc0
// 009a429b  8bc8                 mov ecx, eax
// 009a429d  e84e490500           call 0x9f8bf0
// 009a42a2  85c0                 test eax, eax
// 009a42a4  7508                 jne 0x9a42ae
// 009a42a6  50                   push eax
// 009a42a7  8bce                 mov ecx, esi
// 009a42a9  e8e2f9ffff           call 0x9a3c90
// 009a42ae  8b4304               mov eax, dword ptr [ebx + 4]
// 009a42b1  83f87b               cmp eax, 0x7b
// 009a42b4  7407                 je 0x9a42bd
// 009a42b6  3d05010000           cmp eax, 0x105
// 009a42bb  754a                 jne 0x9a4307
// 009a42bd  6a00                 push 0
// 009a42bf  8bce                 mov ecx, esi
// 009a42c1  e8faf9ffff           call 0x9a3cc0
// 009a42c6  8bc8                 mov ecx, eax
// 009a42c8  e823490500           call 0x9f8bf0
// 009a42cd  85c0                 test eax, eax
// 009a42cf  7436                 je 0x9a4307
// 009a42d1  68b0ee9800           push 0x98eeb0
// 009a42d6  b99ca0e500           mov ecx, 0xe5a09c
// 009a42db  e89e520f00           call 0xa9957e
// 009a42e0  85c0                 test eax, eax
// 009a42e2  7505                 jne 0x9a42e9
// 009a42e4  e8d7e0fdff           call 0x9823c0
// 009a42e9  8b530c               mov edx, dword ptr [ebx + 0xc]
// 009a42ec  8b4b08               mov ecx, dword ptr [ebx + 8]
// 009a42ef  52                   push edx
// 009a42f0  51                   push ecx
// 009a42f1  6a7b                 push 0x7b
// 009a42f3  8bc8                 mov ecx, eax
// 009a42f5  e8261d0700           call 0xa16020
// 009a42fa  5e                   pop esi
// 009a42fb  b801000000           mov eax, 1
// 009a4300  5b                   pop ebx
// 009a4301  83c418               add esp, 0x18
// 009a4304  c20400               ret 4
// 009a4307  817b040a020000       cmp dword ptr [ebx + 4], 0x20a
// 009a430e  57                   push edi
// 009a430f  0f85be000000         jne 0x9a43d3
// 009a4315  68b0ee9800           push 0x98eeb0
// 009a431a  b99ca0e500           mov ecx, 0xe5a09c
// 009a431f  e85a520f00           call 0xa9957e
// 009a4324  85c0                 test eax, eax
// 009a4326  7505                 jne 0x9a432d
// 009a4328  e893e0fdff           call 0x9823c0
// 009a432d  83782000             cmp dword ptr [eax + 0x20], 0
// 009a4331  7e35                 jle 0x9a4368
// 009a4333  68b0ee9800           push 0x98eeb0
// 009a4338  b99ca0e500           mov ecx, 0xe5a09c
// 009a433d  e83c520f00           call 0xa9957e
// 009a4342  85c0                 test eax, eax
// 009a4344  7505                 jne 0x9a434b
// 009a4346  e875e0fdff           call 0x9823c0
// 009a434b  8b530c               mov edx, dword ptr [ebx + 0xc]
// 009a434e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 009a4351  52                   push edx
// 009a4352  51                   push ecx
// 009a4353  680a020000           push 0x20a
// 009a4358  8bc8                 mov ecx, eax
// 009a435a  e8c11c0700           call 0xa16020
// 009a435f  5f                   pop edi
// 009a4360  5e                   pop esi
// 009a4361  5b                   pop ebx
// 009a4362  83c418               add esp, 0x18
// 009a4365  c20400               ret 4
// 009a4368  8b16                 mov edx, dword ptr [esi]
// 009a436a  8b4258               mov eax, dword ptr [edx + 0x58]
// 009a436d  8bce                 mov ecx, esi
// 009a436f  ffd0                 call eax
// 009a4371  8d4c240c             lea ecx, [esp + 0xc]
// 009a4375  51                   push ecx
// 009a4376  8bf8                 mov edi, eax
// 009a4378  ff158c3ab200         call dword ptr [0xb23a8c]
// 009a437e  85ff                 test edi, edi
// 009a4380  7451                 je 0x9a43d3
// 009a4382  83bff800000003       cmp dword ptr [edi + 0xf8], 3
// 009a4389  7548                 jne 0x9a43d3
// 009a438b  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009a438f  55                   push ebp
// 009a4390  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009a4394  57                   push edi
// 009a4395  8d4c241c             lea ecx, [esp + 0x1c]
// 009a4399  e8a20d0300           call 0x9d5140
// 009a439e  55                   push ebp
// 009a439f  53                   push ebx
// 009a43a0  50                   push eax
// 009a43a1  ff15483bb200         call dword ptr [0xb23b48]
// 009a43a7  5d                   pop ebp
// 009a43a8  85c0                 test eax, eax
// 009a43aa  7423                 je 0x9a43cf
// 009a43ac  8b442428             mov eax, dword ptr [esp + 0x28]
// 009a43b0  33d2                 xor edx, edx
// 009a43b2  6639500a             cmp word ptr [eax + 0xa], dx
// 009a43b6  8bcf                 mov ecx, edi
// 009a43b8  0f9ec2               setle dl
// 009a43bb  52                   push edx
// 009a43bc  e8bfa80700           call 0xa1ec80
// 009a43c1  5f                   pop edi
// 009a43c2  5e                   pop esi
// 009a43c3  b801000000           mov eax, 1
// 009a43c8  5b                   pop ebx
// 009a43c9  83c418               add esp, 0x18
// 009a43cc  c20400               ret 4
// 009a43cf  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 009a43d3  8b4304               mov eax, dword ptr [ebx + 4]
// 009a43d6  3d00010000           cmp eax, 0x100
// 009a43db  7228                 jb 0x9a4405
// 009a43dd  3d08010000           cmp eax, 0x108
// 009a43e2  7721                 ja 0x9a4405
// 009a43e4  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 009a43ea  85c0                 test eax, eax
// 009a43ec  7403                 je 0x9a43f1
// 009a43ee  8b4020               mov eax, dword ptr [eax + 0x20]
// 009a43f1  53                   push ebx
// 009a43f2  50                   push eax
// 009a43f3  8bce                 mov ecx, esi
// 009a43f5  e856deffff           call 0x9a2250
// 009a43fa  8bc8                 mov ecx, eax
// 009a43fc  e86f360700           call 0xa17a70
// 009a4401  85c0                 test eax, eax
// 009a4403  75bc                 jne 0x9a43c1
// 009a4405  5f                   pop edi
// 009a4406  5e                   pop esi
// 009a4407  33c0                 xor eax, eax
// 009a4409  5b                   pop ebx
// 009a440a  83c418               add esp, 0x18
// 009a440d  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateFrameMessage@CXTPCommandBars@@QAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp