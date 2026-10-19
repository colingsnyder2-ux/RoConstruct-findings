// from server: 93% by colin
// roc 2008-06 005cadc0  (agentH rewrite)

// from server: 84% by colin
// roc 2008-06 005cadc0  unit: RBX::VControllerService::?$FactoryProduct  size: 701 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cadc0
//
// 005cadc0  55                   push ebp
// 005cadc1  8bec                 mov ebp, esp
// 005cadc3  83e4f8               and esp, 0xfffffff8
// 005cadc6  6aff                 push -1
// 005cadc8  68b0527d00           push 0x7d52b0
// 005cadcd  64a100000000         mov eax, dword ptr fs:[0]
// 005cadd3  50                   push eax
// 005cadd4  64892500000000       mov dword ptr fs:[0], esp
// 005caddb  81ec80000000         sub esp, 0x80
// 005cade1  53                   push ebx
// 005cade2  56                   push esi
// 005cade3  8bf1                 mov esi, ecx
// 005cade5  d94620               fld dword ptr [esi + 0x20]
// 005cade8  57                   push edi
// 005cade9  d85d0c               fcomp dword ptr [ebp + 0xc]
// 005cadec  89742414             mov dword ptr [esp + 0x14], esi
// 005cadf0  dfe0                 fnstsw ax
// 005cadf2  f6c441               test ah, 0x41
// 005cadf5  0f846b020000         je 0x5cb066
// 005cadfb  ff15b0278000         call dword ptr [0x8027b0]
// 005cae01  89442410             mov dword ptr [esp + 0x10], eax
// 005cae05  db442410             fild dword ptr [esp + 0x10]
// 005cae09  8d442418             lea eax, [esp + 0x18]
// 005cae0d  50                   push eax
// 005cae0e  8d4e18               lea ecx, [esi + 0x18]
// 005cae11  d80de0888200         fmul dword ptr [0x8288e0]
// 005cae17  d8450c               fadd dword ptr [ebp + 0xc]
// 005cae1a  d80594748200         fadd dword ptr [0x827494]
// 005cae20  d95e20               fstp dword ptr [esi + 0x20]
// 005cae23  e8d8fcffff           call 0x5cab00
// 005cae28  8b742418             mov esi, dword ptr [esp + 0x18]
// 005cae2c  33ff                 xor edi, edi
// 005cae2e  89bc2494000000       mov dword ptr [esp + 0x94], edi
// 005cae35  3bf7                 cmp esi, edi
// 005cae37  7560                 jne 0x5cae99
// 005cae39  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005cae3d  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005cae48  3bf7                 cmp esi, edi
// 005cae4a  0f8416020000         je 0x5cb066
// 005cae50  8d4e04               lea ecx, [esi + 4]
// 005cae53  83caff               or edx, 0xffffffff
// 005cae56  f00fc111             lock xadd dword ptr [ecx], edx
// 005cae5a  0f8506020000         jne 0x5cb066
// 005cae60  8b06                 mov eax, dword ptr [esi]
// 005cae62  8b5004               mov edx, dword ptr [eax + 4]
// 005cae65  8bce                 mov ecx, esi
// 005cae67  ffd2                 call edx
// 005cae69  8d4608               lea eax, [esi + 8]
// 005cae6c  83c9ff               or ecx, 0xffffffff
// 005cae6f  f00fc108             lock xadd dword ptr [eax], ecx
// 005cae73  0f85ed010000         jne 0x5cb066
// 005cae79  8b16                 mov edx, dword ptr [esi]
// 005cae7b  8b4208               mov eax, dword ptr [edx + 8]
// 005cae7e  8bce                 mov ecx, esi
// 005cae80  ffd0                 call eax
// 005cae82  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005cae89  64890d00000000       mov dword ptr fs:[0], ecx
// 005cae90  5f                   pop edi
// 005cae91  5e                   pop esi
// 005cae92  5b                   pop ebx
// 005cae93  8be5                 mov esp, ebp
// 005cae95  5d                   pop ebp
// 005cae96  c20800               ret 8
// 005cae99  8bce                 mov ecx, esi
// 005cae9b  e83088fbff           call 0x5836d0
// 005caea0  8bd8                 mov ebx, eax
// 005caea2  3bdf                 cmp ebx, edi
// 005caea4  752b                 jne 0x5caed1
// 005caea6  8d4c2418             lea ecx, [esp + 0x18]
// 005caeaa  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005caeb5  e8a6570300           call 0x600660
// 005caeba  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005caec1  64890d00000000       mov dword ptr fs:[0], ecx
// 005caec8  5f                   pop edi
// 005caec9  5e                   pop esi
// 005caeca  5b                   pop ebx
// 005caecb  8be5                 mov esp, ebp
// 005caecd  5d                   pop ebp
// 005caece  c20800               ret 8
// 005caed1  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005caed7  d905b4a08300         fld dword ptr [0x83a0b4]
// 005caedd  8b5108               mov edx, dword ptr [ecx + 8]
// 005caee0  d95c2410             fstp dword ptr [esp + 0x10]
// 005caee4  8b843234010000       mov eax, dword ptr [edx + esi + 0x134]
// 005caeeb  8b00                 mov eax, dword ptr [eax]
// 005caeed  8d8c3234010000       lea ecx, [edx + esi + 0x134]
// 005caef4  8d542428             lea edx, [esp + 0x28]
// 005caef8  52                   push edx
// 005caef9  ffd0                 call eax
// 005caefb  8bcb                 mov ecx, ebx
// 005caefd  e81effebff           call 0x48ae20
// 005caf02  85c0                 test eax, eax
// 005caf04  0f861f010000         jbe 0x5cb029
// 005caf0a  8d9b00000000         lea ebx, [ebx]
// 005caf10  8bb308010000         mov esi, dword ptr [ebx + 0x108]
// 005caf16  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005caf19  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 005caf1c  c1f903               sar ecx, 3
// 005caf1f  3bf9                 cmp edi, ecx
// 005caf21  7206                 jb 0x5caf29
// 005caf23  ff1590288000         call dword ptr [0x802890]
// 005caf29  8b560c               mov edx, dword ptr [esi + 0xc]
// 005caf2c  6a00                 push 0
// 005caf2e  681c7f9400           push 0x947f1c
// 005caf33  8d04fa               lea eax, [edx + edi*8]
// 005caf36  8b00                 mov eax, dword ptr [eax]
// 005caf38  687c909200           push 0x92907c
// 005caf3d  6a00                 push 0
// 005caf3f  50                   push eax
// 005caf40  e881680d00           call 0x6a17c6
// 005caf45  8bf0                 mov esi, eax
// 005caf47  83c414               add esp, 0x14
// 005caf4a  85f6                 test esi, esi
// 005caf4c  0f84c7000000         je 0x5cb019
// 005caf52  3b742418             cmp esi, dword ptr [esp + 0x18]
// 005caf56  0f84bd000000         je 0x5cb019
// 005caf5c  8bce                 mov ecx, esi
// 005caf5e  e81dfbffff           call 0x5caa80
// 005caf63  84c0                 test al, al
// 005caf65  0f84ae000000         je 0x5cb019
// 005caf6b  8bce                 mov ecx, esi
// 005caf6d  e86efafcff           call 0x59a9e0
// 005caf72  8b10                 mov edx, dword ptr [eax]
// 005caf74  8bc8                 mov ecx, eax
// 005caf76  8b4208               mov eax, dword ptr [edx + 8]
// 005caf79  ffd0                 call eax
// 005caf7b  3b4508               cmp eax, dword ptr [ebp + 8]
// 005caf7e  0f8495000000         je 0x5cb019
// 005caf84  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005caf8a  8b5108               mov edx, dword ptr [ecx + 8]
// 005caf8d  8b843234010000       mov eax, dword ptr [edx + esi + 0x134]
// 005caf94  8b00                 mov eax, dword ptr [eax]
// 005caf96  8d8c3234010000       lea ecx, [edx + esi + 0x134]
// 005caf9d  8d542458             lea edx, [esp + 0x58]
// 005cafa1  52                   push edx
// 005cafa2  ffd0                 call eax
// 005cafa4  d94024               fld dword ptr [eax + 0x24]
// 005cafa7  d864244c             fsub dword ptr [esp + 0x4c]
// 005cafab  83c024               add eax, 0x24
// 005cafae  d94004               fld dword ptr [eax + 4]
// 005cafb1  d8642450             fsub dword ptr [esp + 0x50]
// 005cafb5  d94008               fld dword ptr [eax + 8]
// 005cafb8  d8642454             fsub dword ptr [esp + 0x54]
// 005cafbc  d9c2                 fld st(2)
// 005cafbe  decb                 fmulp st(3)
// 005cafc0  d9c1                 fld st(1)
// 005cafc2  deca                 fmulp st(2)
// 005cafc4  d9ca                 fxch st(2)
// 005cafc6  dec1                 faddp st(1)
// 005cafc8  d9c1                 fld st(1)
// 005cafca  deca                 fmulp st(2)
// 005cafcc  dec1                 faddp st(1)
// 005cafce  d9fa                 fsqrt 
// 005cafd0  d9442410             fld dword ptr [esp + 0x10]
// 005cafd4  d8d9                 fcomp st(1)
// 005cafd6  dfe0                 fnstsw ax
// 005cafd8  f6c441               test ah, 0x41
// 005cafdb  753a                 jne 0x5cb017
// 005cafdd  8d4c2420             lea ecx, [esp + 0x20]
// 005cafe1  d95c2410             fstp dword ptr [esp + 0x10]
// 005cafe5  56                   push esi
// 005cafe6  51                   push ecx
// 005cafe7  e854da0400           call 0x618a40
// 005cafec  83c408               add esp, 8
// 005cafef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005caff3  50                   push eax
// 005caff4  83c15c               add ecx, 0x5c
// 005caff7  c684249800000001     mov byte ptr [esp + 0x98], 1
// 005cafff  e8fcf9ffff           call 0x5caa00
// 005cb004  8d4c2420             lea ecx, [esp + 0x20]
// 005cb008  c684249400000000     mov byte ptr [esp + 0x94], 0
// 005cb010  e84b560300           call 0x600660
// 005cb015  eb02                 jmp 0x5cb019
// 005cb017  ddd8                 fstp st(0)
// 005cb019  8bcb                 mov ecx, ebx
// 005cb01b  47                   inc edi
// 005cb01c  e8fffdebff           call 0x48ae20
// 005cb021  3bf8                 cmp edi, eax
// 005cb023  0f82e7feffff         jb 0x5caf10
// 005cb029  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005cb02d  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005cb038  85f6                 test esi, esi
// 005cb03a  742a                 je 0x5cb066
// 005cb03c  8d5604               lea edx, [esi + 4]
// 005cb03f  83c8ff               or eax, 0xffffffff
// 005cb042  f00fc102             lock xadd dword ptr [edx], eax
// 005cb046  751e                 jne 0x5cb066
// 005cb048  8b16                 mov edx, dword ptr [esi]
// 005cb04a  8b4204               mov eax, dword ptr [edx + 4]
// 005cb04d  8bce                 mov ecx, esi
// 005cb04f  ffd0                 call eax
// 005cb051  8d4e08               lea ecx, [esi + 8]
// 005cb054  83caff               or edx, 0xffffffff
// 005cb057  f00fc111             lock xadd dword ptr [ecx], edx
// 005cb05b  7509                 jne 0x5cb066
// 005cb05d  8b06                 mov eax, dword ptr [esi]
// 005cb05f  8b5008               mov edx, dword ptr [eax + 8]
// 005cb062  8bce                 mov ecx, esi
// 005cb064  ffd2                 call edx
// 005cb066  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005cb06d  5f                   pop edi
// 005cb06e  5e                   pop esi
// 005cb06f  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb076  5b                   pop ebx
// 005cb077  8be5                 mov esp, ebp
// 005cb079  5d                   pop ebp
// 005cb07a  c20800               ret 8

// from server: 83% by colin
// roc 2008-06 005cadc0  unit: RBX::VControllerService::?$FactoryProduct  size: 701 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cadc0
//
// 005cadc0  55                   push ebp
// 005cadc1  8bec                 mov ebp, esp
// 005cadc3  83e4f8               and esp, 0xfffffff8
// 005cadc6  6aff                 push -1
// 005cadc8  68b0527d00           push 0x7d52b0
// 005cadcd  64a100000000         mov eax, dword ptr fs:[0]
// 005cadd3  50                   push eax
// 005cadd4  64892500000000       mov dword ptr fs:[0], esp
// 005caddb  81ec80000000         sub esp, 0x80
// 005cade1  53                   push ebx
// 005cade2  56                   push esi
// 005cade3  8bf1                 mov esi, ecx
// 005cade5  d94620               fld dword ptr [esi + 0x20]
// 005cade8  57                   push edi
// 005cade9  d85d0c               fcomp dword ptr [ebp + 0xc]
// 005cadec  89742414             mov dword ptr [esp + 0x14], esi
// 005cadf0  dfe0                 fnstsw ax
// 005cadf2  f6c441               test ah, 0x41
// 005cadf5  0f846b020000         je 0x5cb066
// 005cadfb  ff15b0278000         call dword ptr [0x8027b0]
// 005cae01  89442410             mov dword ptr [esp + 0x10], eax
// 005cae05  db442410             fild dword ptr [esp + 0x10]
// 005cae09  8d442418             lea eax, [esp + 0x18]
// 005cae0d  50                   push eax
// 005cae0e  8d4e18               lea ecx, [esi + 0x18]
// 005cae11  d80de0888200         fmul dword ptr [0x8288e0]
// 005cae17  d8450c               fadd dword ptr [ebp + 0xc]
// 005cae1a  d80594748200         fadd dword ptr [0x827494]
// 005cae20  d95e20               fstp dword ptr [esi + 0x20]
// 005cae23  e8d8fcffff           call 0x5cab00
// 005cae28  8b742418             mov esi, dword ptr [esp + 0x18]
// 005cae2c  33ff                 xor edi, edi
// 005cae2e  89bc2494000000       mov dword ptr [esp + 0x94], edi
// 005cae35  3bf7                 cmp esi, edi
// 005cae37  7560                 jne 0x5cae99
// 005cae39  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005cae3d  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005cae48  3bf7                 cmp esi, edi
// 005cae4a  0f8416020000         je 0x5cb066
// 005cae50  8d4e04               lea ecx, [esi + 4]
// 005cae53  83caff               or edx, 0xffffffff
// 005cae56  f00fc111             lock xadd dword ptr [ecx], edx
// 005cae5a  0f8506020000         jne 0x5cb066
// 005cae60  8b06                 mov eax, dword ptr [esi]
// 005cae62  8b5004               mov edx, dword ptr [eax + 4]
// 005cae65  8bce                 mov ecx, esi
// 005cae67  ffd2                 call edx
// 005cae69  8d4608               lea eax, [esi + 8]
// 005cae6c  83c9ff               or ecx, 0xffffffff
// 005cae6f  f00fc108             lock xadd dword ptr [eax], ecx
// 005cae73  0f85ed010000         jne 0x5cb066
// 005cae79  8b16                 mov edx, dword ptr [esi]
// 005cae7b  8b4208               mov eax, dword ptr [edx + 8]
// 005cae7e  8bce                 mov ecx, esi
// 005cae80  ffd0                 call eax
// 005cae82  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005cae89  64890d00000000       mov dword ptr fs:[0], ecx
// 005cae90  5f                   pop edi
// 005cae91  5e                   pop esi
// 005cae92  5b                   pop ebx
// 005cae93  8be5                 mov esp, ebp
// 005cae95  5d                   pop ebp
// 005cae96  c20800               ret 8
// 005cae99  8bce                 mov ecx, esi
// 005cae9b  e83088fbff           call 0x5836d0
// 005caea0  8bd8                 mov ebx, eax
// 005caea2  3bdf                 cmp ebx, edi
// 005caea4  752b                 jne 0x5caed1
// 005caea6  8d4c2418             lea ecx, [esp + 0x18]
// 005caeaa  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005caeb5  e8a6570300           call 0x600660
// 005caeba  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005caec1  64890d00000000       mov dword ptr fs:[0], ecx
// 005caec8  5f                   pop edi
// 005caec9  5e                   pop esi
// 005caeca  5b                   pop ebx
// 005caecb  8be5                 mov esp, ebp
// 005caecd  5d                   pop ebp
// 005caece  c20800               ret 8
// 005caed1  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005caed7  d905b4a08300         fld dword ptr [0x83a0b4]
// 005caedd  8b5108               mov edx, dword ptr [ecx + 8]
// 005caee0  d95c2410             fstp dword ptr [esp + 0x10]
// 005caee4  8b843234010000       mov eax, dword ptr [edx + esi + 0x134]
// 005caeeb  8b00                 mov eax, dword ptr [eax]
// 005caeed  8d8c3234010000       lea ecx, [edx + esi + 0x134]
// 005caef4  8d542428             lea edx, [esp + 0x28]
// 005caef8  52                   push edx
// 005caef9  ffd0                 call eax
// 005caefb  8bcb                 mov ecx, ebx
// 005caefd  e81effebff           call 0x48ae20
// 005caf02  85c0                 test eax, eax
// 005caf04  0f861f010000         jbe 0x5cb029
// 005caf0a  8d9b00000000         lea ebx, [ebx]
// 005caf10  8bb308010000         mov esi, dword ptr [ebx + 0x108]
// 005caf16  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005caf19  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 005caf1c  c1f903               sar ecx, 3
// 005caf1f  3bf9                 cmp edi, ecx
// 005caf21  7206                 jb 0x5caf29
// 005caf23  ff1590288000         call dword ptr [0x802890]
// 005caf29  8b560c               mov edx, dword ptr [esi + 0xc]
// 005caf2c  6a00                 push 0
// 005caf2e  681c7f9400           push 0x947f1c
// 005caf33  8d04fa               lea eax, [edx + edi*8]
// 005caf36  8b00                 mov eax, dword ptr [eax]
// 005caf38  687c909200           push 0x92907c
// 005caf3d  6a00                 push 0
// 005caf3f  50                   push eax
// 005caf40  e881680d00           call 0x6a17c6
// 005caf45  8bf0                 mov esi, eax
// 005caf47  83c414               add esp, 0x14
// 005caf4a  85f6                 test esi, esi
// 005caf4c  0f84c7000000         je 0x5cb019
// 005caf52  3b742418             cmp esi, dword ptr [esp + 0x18]
// 005caf56  0f84bd000000         je 0x5cb019
// 005caf5c  8bce                 mov ecx, esi
// 005caf5e  e81dfbffff           call 0x5caa80
// 005caf63  84c0                 test al, al
// 005caf65  0f84ae000000         je 0x5cb019
// 005caf6b  8bce                 mov ecx, esi
// 005caf6d  e86efafcff           call 0x59a9e0
// 005caf72  8b10                 mov edx, dword ptr [eax]
// 005caf74  8bc8                 mov ecx, eax
// 005caf76  8b4208               mov eax, dword ptr [edx + 8]
// 005caf79  ffd0                 call eax
// 005caf7b  3b4508               cmp eax, dword ptr [ebp + 8]
// 005caf7e  0f8495000000         je 0x5cb019
// 005caf84  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005caf8a  8b5108               mov edx, dword ptr [ecx + 8]
// 005caf8d  8b843234010000       mov eax, dword ptr [edx + esi + 0x134]
// 005caf94  8b00                 mov eax, dword ptr [eax]
// 005caf96  8d8c3234010000       lea ecx, [edx + esi + 0x134]
// 005caf9d  8d542458             lea edx, [esp + 0x58]
// 005cafa1  52                   push edx
// 005cafa2  ffd0                 call eax
// 005cafa4  d94024               fld dword ptr [eax + 0x24]
// 005cafa7  d864244c             fsub dword ptr [esp + 0x4c]
// 005cafab  83c024               add eax, 0x24
// 005cafae  d94004               fld dword ptr [eax + 4]
// 005cafb1  d8642450             fsub dword ptr [esp + 0x50]
// 005cafb5  d94008               fld dword ptr [eax + 8]
// 005cafb8  d8642454             fsub dword ptr [esp + 0x54]
// 005cafbc  d9c2                 fld st(2)
// 005cafbe  decb                 fmulp st(3)
// 005cafc0  d9c1                 fld st(1)
// 005cafc2  deca                 fmulp st(2)
// 005cafc4  d9ca                 fxch st(2)
// 005cafc6  dec1                 faddp st(1)
// 005cafc8  d9c1                 fld st(1)
// 005cafca  deca                 fmulp st(2)
// 005cafcc  dec1                 faddp st(1)
// 005cafce  d9fa                 fsqrt 
// 005cafd0  d9442410             fld dword ptr [esp + 0x10]
// 005cafd4  d8d9                 fcomp st(1)
// 005cafd6  dfe0                 fnstsw ax
// 005cafd8  f6c441               test ah, 0x41
// 005cafdb  753a                 jne 0x5cb017
// 005cafdd  8d4c2420             lea ecx, [esp + 0x20]
// 005cafe1  d95c2410             fstp dword ptr [esp + 0x10]
// 005cafe5  56                   push esi
// 005cafe6  51                   push ecx
// 005cafe7  e854da0400           call 0x618a40
// 005cafec  83c408               add esp, 8
// 005cafef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005caff3  50                   push eax
// 005caff4  83c15c               add ecx, 0x5c
// 005caff7  c684249800000001     mov byte ptr [esp + 0x98], 1
// 005cafff  e8fcf9ffff           call 0x5caa00
// 005cb004  8d4c2420             lea ecx, [esp + 0x20]
// 005cb008  c684249400000000     mov byte ptr [esp + 0x94], 0
// 005cb010  e84b560300           call 0x600660
// 005cb015  eb02                 jmp 0x5cb019
// 005cb017  ddd8                 fstp st(0)
// 005cb019  8bcb                 mov ecx, ebx
// 005cb01b  47                   inc edi
// 005cb01c  e8fffdebff           call 0x48ae20
// 005cb021  3bf8                 cmp edi, eax
// 005cb023  0f82e7feffff         jb 0x5caf10
// 005cb029  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005cb02d  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005cb038  85f6                 test esi, esi
// 005cb03a  742a                 je 0x5cb066
// 005cb03c  8d5604               lea edx, [esi + 4]
// 005cb03f  83c8ff               or eax, 0xffffffff
// 005cb042  f00fc102             lock xadd dword ptr [edx], eax
// 005cb046  751e                 jne 0x5cb066
// 005cb048  8b16                 mov edx, dword ptr [esi]
// 005cb04a  8b4204               mov eax, dword ptr [edx + 4]
// 005cb04d  8bce                 mov ecx, esi
// 005cb04f  ffd0                 call eax
// 005cb051  8d4e08               lea ecx, [esi + 8]
// 005cb054  83caff               or edx, 0xffffffff
// 005cb057  f00fc111             lock xadd dword ptr [ecx], edx
// 005cb05b  7509                 jne 0x5cb066
// 005cb05d  8b06                 mov eax, dword ptr [esi]
// 005cb05f  8b5008               mov edx, dword ptr [eax + 8]
// 005cb062  8bce                 mov ecx, esi
// 005cb064  ffd2                 call edx
// 005cb066  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005cb06d  5f                   pop edi
// 005cb06e  5e                   pop esi
// 005cb06f  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb076  5b                   pop ebx
// 005cb077  8be5                 mov esp, ebp
// 005cb079  5d                   pop ebp
// 005cb07a  c20800               ret 8

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" __declspec(dllimport) int __cdecl rand();
extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern const float randomScale;
extern const float delayOffset;
extern const float initialDistance;
extern const char instanceType[];
extern const char pvInstanceType[];

struct Object;
struct Container;

struct RefCount
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    Object* object;
    RefCount* count;
    ~Shared();
    void assign(const Shared*);
};

inline Shared::~Shared()
{
    RefCount* p = count;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Weak
{
    Object* object;
    RefCount* count;
    Shared lock();
};

struct __declspec(align(8)) Transform
{
    float rotation[9];
    float x, y, z;
};

struct TransformInterface
{
    virtual Transform* getTransform(Transform*) = 0;
};

struct Identity
{
    virtual void unused0() = 0;
    virtual void unused1() = 0;
    virtual void* getIdentity() = 0;
};

struct Object
{
    char padding[0x134];
    int* virtualOffsets;
    Container* getContainer();
    bool eligible();
    Identity* identity();
};

struct Children
{
    char padding[12];
    Shared* first;
    Shared* last;
};

struct Container
{
    char padding[0x108];
    Children* children;
    unsigned size();
};

extern "C" void* __cdecl dynamicCastHelper(
    void*, long, const void*, const void*, int);
extern Shared __cdecl makeShared(Object*);

struct Controller
{
    char padding0[0x18];
    Weak source;
    float nextTime;
    char padding1[0x38];
    Shared selected;
    void update(void*, float);
};

#pragma float_control(precise, off, push)

void Controller::update(void* excluded, float time)
{
    if (time < nextTime)
        return;

    nextTime = (rand() * randomScale + time) + delayOffset;
    Shared current = source.lock();
    if (!current.object)
        return;
    Object* object = current.object;

    Container* container = object->getContainer();
    if (!container)
        return;

    float closest = initialDistance;
    Transform origin;
    TransformInterface* transform = reinterpret_cast<TransformInterface*>(
        reinterpret_cast<char*>(object) + 0x134 + object->virtualOffsets[2]);
    transform->getTransform(&origin);

    for (unsigned i = 0; i < container->size(); ++i)
    {
        Children* children = container->children;
        if (i >= static_cast<unsigned>(children->last - children->first))
            _invalid_parameter_noinfo();

        Shared* element = &children->first[i];
        Object* candidate = static_cast<Object*>(dynamicCastHelper(
            element->object, 0, instanceType, pvInstanceType, 0));

        if (!candidate || candidate == current.object ||
            !candidate->eligible() ||
            candidate->identity()->getIdentity() == excluded)
            continue;

        Transform other;
        TransformInterface* candidateTransform =
            reinterpret_cast<TransformInterface*>(
                reinterpret_cast<char*>(candidate) + 0x134 +
                candidate->virtualOffsets[2]);
        Transform* position = candidateTransform->getTransform(&other);
        const float* p = &position->x;
        double dx = p[0] - origin.x;
        double dy = p[1] - origin.y;
        double dz = p[2] - origin.z;
        double distance = sqrt(dx * dx + dy * dy + dz * dz);

        if (closest > distance)
        {
            closest = static_cast<float>(distance);
            Shared replacement = makeShared(candidate);
            selected.assign(&replacement);
        }
    }
}

#pragma float_control(pop)
