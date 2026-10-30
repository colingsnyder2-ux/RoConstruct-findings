// roc 2009-12 007f82a0  unit: CXTPControl  size: 745 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f82a0
//
// 007f82a0  83ec38               sub esp, 0x38
// 007f82a3  53                   push ebx
// 007f82a4  55                   push ebp
// 007f82a5  56                   push esi
// 007f82a6  57                   push edi
// 007f82a7  8d44244c             lea eax, [esp + 0x4c]
// 007f82ab  50                   push eax
// 007f82ac  8bf1                 mov esi, ecx
// 007f82ae  ff1568cc9800         call dword ptr [0x98cc68]
// 007f82b4  85c0                 test eax, eax
// 007f82b6  7428                 je 0x7f82e0
// 007f82b8  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007f82be  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 007f82c4  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007f82ca  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007f82ce  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007f82d4  89542450             mov dword ptr [esp + 0x50], edx
// 007f82d8  89442454             mov dword ptr [esp + 0x54], eax
// 007f82dc  894c2458             mov dword ptr [esp + 0x58], ecx
// 007f82e0  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f82e6  8b11                 mov edx, dword ptr [ecx]
// 007f82e8  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 007f82ee  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 007f82f4  33ed                 xor ebp, ebp
// 007f82f6  55                   push ebp
// 007f82f7  50                   push eax
// 007f82f8  ffd2                 call edx
// 007f82fa  6a01                 push 1
// 007f82fc  8bce                 mov ecx, esi
// 007f82fe  c786a800000001000000 mov dword ptr [esi + 0xa8], 1
// 007f8308  e8b3e3ffff           call 0x7f66c0
// 007f830d  8d4604               lea eax, [esi + 4]
// 007f8310  50                   push eax
// 007f8311  ff150cb29800         call dword ptr [0x98b20c]
// 007f8317  33c9                 xor ecx, ecx
// 007f8319  39ae68010000         cmp dword ptr [esi + 0x168], ebp
// 007f831f  0f9fc1               setg cl
// 007f8322  894c2418             mov dword ptr [esp + 0x18], ecx
// 007f8326  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f832c  e8bfed0000           call 0x8070f0
// 007f8331  8bf8                 mov edi, eax
// 007f8333  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007f8339  8b5020               mov edx, dword ptr [eax + 0x20]
// 007f833c  52                   push edx
// 007f833d  ff152ccc9800         call dword ptr [0x98cc2c]
// 007f8343  50                   push eax
// 007f8344  e8e1b7ffff           call 0x7f3b2a
// 007f8349  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007f834f  3bc5                 cmp eax, ebp
// 007f8351  7506                 jne 0x7f8359
// 007f8353  896c2410             mov dword ptr [esp + 0x10], ebp
// 007f8357  eb07                 jmp 0x7f8360
// 007f8359  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007f835c  894c2410             mov dword ptr [esp + 0x10], ecx
// 007f8360  33db                 xor ebx, ebx
// 007f8362  895c2414             mov dword ptr [esp + 0x14], ebx
// 007f8366  395c2418             cmp dword ptr [esp + 0x18], ebx
// 007f836a  7441                 je 0x7f83ad
// 007f836c  8b9668010000         mov edx, dword ptr [esi + 0x168]
// 007f8372  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f8375  53                   push ebx
// 007f8376  52                   push edx
// 007f8377  68ad100000           push 0x10ad
// 007f837c  50                   push eax
// 007f837d  ff1558cc9800         call dword ptr [0x98cc58]
// 007f8383  8d4c241c             lea ecx, [esp + 0x1c]
// 007f8387  51                   push ecx
// 007f8388  6a64                 push 0x64
// 007f838a  57                   push edi
// 007f838b  8bce                 mov ecx, esi
// 007f838d  e8aee4ffff           call 0x7f6840
// 007f8392  85c0                 test eax, eax
// 007f8394  7517                 jne 0x7f83ad
// 007f8396  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 007f839c  50                   push eax
// 007f839d  8b4720               mov eax, dword ptr [edi + 0x20]
// 007f83a0  52                   push edx
// 007f83a1  6811010000           push 0x111
// 007f83a6  50                   push eax
// 007f83a7  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007f83ad  ff1528cc9800         call dword ptr [0x98cc28]
// 007f83b3  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007f83b7  0f8506010000         jne 0x7f84c3
// 007f83bd  8d4900               lea ecx, [ecx]
// 007f83c0  6a00                 push 0
// 007f83c2  6a00                 push 0
// 007f83c4  6a00                 push 0
// 007f83c6  8d4c2438             lea ecx, [esp + 0x38]
// 007f83ca  51                   push ecx
// 007f83cb  ff15b0ca9800         call dword ptr [0x98cab0]
// 007f83d1  8b442430             mov eax, dword ptr [esp + 0x30]
// 007f83d5  3d02020000           cmp eax, 0x202
// 007f83da  0f84af000000         je 0x7f848f
// 007f83e0  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 007f83e7  0f84d6000000         je 0x7f84c3
// 007f83ed  3d13010000           cmp eax, 0x113
// 007f83f2  753d                 jne 0x7f8431
// 007f83f4  817c2434ad100000     cmp dword ptr [esp + 0x34], 0x10ad
// 007f83fc  7574                 jne 0x7f8472
// 007f83fe  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 007f8405  746b                 je 0x7f8472
// 007f8407  8d54241c             lea edx, [esp + 0x1c]
// 007f840b  52                   push edx
// 007f840c  6a64                 push 0x64
// 007f840e  57                   push edi
// 007f840f  8bce                 mov ecx, esi
// 007f8411  e82ae4ffff           call 0x7f6840
// 007f8416  85c0                 test eax, eax
// 007f8418  7517                 jne 0x7f8431
// 007f841a  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 007f841d  50                   push eax
// 007f841e  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 007f8424  50                   push eax
// 007f8425  6811010000           push 0x111
// 007f842a  51                   push ecx
// 007f842b  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007f8431  817c243000020000     cmp dword ptr [esp + 0x30], 0x200
// 007f8439  7537                 jne 0x7f8472
// 007f843b  8b442438             mov eax, dword ptr [esp + 0x38]
// 007f843f  0fb7c8               movzx ecx, ax
// 007f8442  c1e810               shr eax, 0x10
// 007f8445  50                   push eax
// 007f8446  51                   push ecx
// 007f8447  8d542454             lea edx, [esp + 0x54]
// 007f844b  52                   push edx
// 007f844c  8bd9                 mov ebx, ecx
// 007f844e  8be8                 mov ebp, eax
// 007f8450  ff155cca9800         call dword ptr [0x98ca5c]
// 007f8456  8b16                 mov edx, dword ptr [esi]
// 007f8458  50                   push eax
// 007f8459  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 007f845f  8bce                 mov ecx, esi
// 007f8461  ffd0                 call eax
// 007f8463  85c0                 test eax, eax
// 007f8465  7416                 je 0x7f847d
// 007f8467  6a01                 push 1
// 007f8469  8bce                 mov ecx, esi
// 007f846b  e850e2ffff           call 0x7f66c0
// 007f8470  eb0b                 jmp 0x7f847d
// 007f8472  8d4c242c             lea ecx, [esp + 0x2c]
// 007f8476  51                   push ecx
// 007f8477  ff1594ca9800         call dword ptr [0x98ca94]
// 007f847d  ff1528cc9800         call dword ptr [0x98cc28]
// 007f8483  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007f8487  0f8433ffffff         je 0x7f83c0
// 007f848d  eb34                 jmp 0x7f84c3
// 007f848f  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 007f8496  7423                 je 0x7f84bb
// 007f8498  85db                 test ebx, ebx
// 007f849a  7504                 jne 0x7f84a0
// 007f849c  85ed                 test ebp, ebp
// 007f849e  7411                 je 0x7f84b1
// 007f84a0  55                   push ebp
// 007f84a1  53                   push ebx
// 007f84a2  8d542454             lea edx, [esp + 0x54]
// 007f84a6  52                   push edx
// 007f84a7  ff155cca9800         call dword ptr [0x98ca5c]
// 007f84ad  85c0                 test eax, eax
// 007f84af  740a                 je 0x7f84bb
// 007f84b1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007f84b9  eb08                 jmp 0x7f84c3
// 007f84bb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007f84c3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007f84c7  85db                 test ebx, ebx
// 007f84c9  741f                 je 0x7f84ea
// 007f84cb  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007f84d1  85c0                 test eax, eax
// 007f84d3  7415                 je 0x7f84ea
// 007f84d5  83782000             cmp dword ptr [eax + 0x20], 0
// 007f84d9  740f                 je 0x7f84ea
// 007f84db  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f84de  68ad100000           push 0x10ad
// 007f84e3  50                   push eax
// 007f84e4  ff15d0cb9800         call dword ptr [0x98cbd0]
// 007f84ea  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007f84ee  85ed                 test ebp, ebp
// 007f84f0  7414                 je 0x7f8506
// 007f84f2  85db                 test ebx, ebx
// 007f84f4  7510                 jne 0x7f8506
// 007f84f6  8bce                 mov ecx, esi
// 007f84f8  e883d9ffff           call 0x7f5e80
// 007f84fd  85c0                 test eax, eax
// 007f84ff  7405                 je 0x7f8506
// 007f8501  8d4302               lea eax, [ebx + 2]
// 007f8504  eb02                 jmp 0x7f8508
// 007f8506  33c0                 xor eax, eax
// 007f8508  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 007f850e  ff1520cc9800         call dword ptr [0x98cc20]
// 007f8514  33ff                 xor edi, edi
// 007f8516  39bea4000000         cmp dword ptr [esi + 0xa4], edi
// 007f851c  742f                 je 0x7f854d
// 007f851e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f8524  3bcf                 cmp ecx, edi
// 007f8526  7425                 je 0x7f854d
// 007f8528  8b11                 mov edx, dword ptr [ecx]
// 007f852a  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 007f8530  57                   push edi
// 007f8531  6aff                 push -1
// 007f8533  ffd0                 call eax
// 007f8535  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f853b  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 007f8541  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 007f8547  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 007f854d  3bef                 cmp ebp, edi
// 007f854f  741e                 je 0x7f856f
// 007f8551  3bdf                 cmp ebx, edi
// 007f8553  751a                 jne 0x7f856f
// 007f8555  8b06                 mov eax, dword ptr [esi]
// 007f8557  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 007f855d  8bce                 mov ecx, esi
// 007f855f  ffd2                 call edx
// 007f8561  39bea8000000         cmp dword ptr [esi + 0xa8], edi
// 007f8567  740f                 je 0x7f8578
// 007f8569  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 007f856f  6a01                 push 1
// 007f8571  8bce                 mov ecx, esi
// 007f8573  e848e1ffff           call 0x7f66c0
// 007f8578  8bce                 mov ecx, esi
// 007f857a  e85db8ffff           call 0x7f3ddc
// 007f857f  5f                   pop edi
// 007f8580  5e                   pop esi
// 007f8581  5d                   pop ebp
// 007f8582  5b                   pop ebx
// 007f8583  83c438               add esp, 0x38
// 007f8586  c21000               ret 0x10
// copied from an identical function in another client (function ?ClickToolBarButton@CXTPControl@@IAEXVCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp