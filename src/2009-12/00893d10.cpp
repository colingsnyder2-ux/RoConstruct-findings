// roc 2009-12 00893d10  unit: CXTPMenuBar  size: 839 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893d10
//
// 00893d10  6aff                 push -1
// 00893d12  6818169600           push 0x961618
// 00893d17  64a100000000         mov eax, dword ptr fs:[0]
// 00893d1d  50                   push eax
// 00893d1e  83ec0c               sub esp, 0xc
// 00893d21  53                   push ebx
// 00893d22  55                   push ebp
// 00893d23  56                   push esi
// 00893d24  57                   push edi
// 00893d25  a10052b600           mov eax, dword ptr [0xb65200]
// 00893d2a  33c4                 xor eax, esp
// 00893d2c  50                   push eax
// 00893d2d  8d442420             lea eax, [esp + 0x20]
// 00893d31  64a300000000         mov dword ptr fs:[0], eax
// 00893d37  8bf1                 mov esi, ecx
// 00893d39  8d442414             lea eax, [esp + 0x14]
// 00893d3d  33ff                 xor edi, edi
// 00893d3f  50                   push eax
// 00893d40  897c2418             mov dword ptr [esp + 0x18], edi
// 00893d44  e8e7eeffff           call 0x892c30
// 00893d49  8be8                 mov ebp, eax
// 00893d4b  3bef                 cmp ebp, edi
// 00893d4d  740f                 je 0x893d5e
// 00893d4f  6af0                 push -0x10
// 00893d51  55                   push ebp
// 00893d52  ff15d8c99800         call dword ptr [0x98c9d8]
// 00893d58  89442418             mov dword ptr [esp + 0x18], eax
// 00893d5c  eb04                 jmp 0x893d62
// 00893d5e  897c2418             mov dword ptr [esp + 0x18], edi
// 00893d62  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00893d68  68c2230000           push 0x23c2
// 00893d6d  e88e35fbff           call 0x847300
// 00893d72  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00893d76  8bf8                 mov edi, eax
// 00893d78  85db                 test ebx, ebx
// 00893d7a  0f8450010000         je 0x893ed0
// 00893d80  f786ec00000000200000 test dword ptr [esi + 0xec], 0x2000
// 00893d8a  0f8440010000         je 0x893ed0
// 00893d90  85ff                 test edi, edi
// 00893d92  740c                 je 0x893da0
// 00893d94  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 00893d9a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00893d9e  eb08                 jmp 0x893da8
// 00893da0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00893da8  6a00                 push 0
// 00893daa  55                   push ebp
// 00893dab  ff15f4cb9800         call dword ptr [0x98cbf4]
// 00893db1  8bd8                 mov ebx, eax
// 00893db3  85db                 test ebx, ebx
// 00893db5  0f84fa000000         je 0x893eb5
// 00893dbb  53                   push ebx
// 00893dbc  ff1570ca9800         call dword ptr [0x98ca70]
// 00893dc2  85c0                 test eax, eax
// 00893dc4  0f84eb000000         je 0x893eb5
// 00893dca  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 00893dce  741d                 je 0x893ded
// 00893dd0  85ff                 test edi, edi
// 00893dd2  0f8492000000         je 0x893e6a
// 00893dd8  53                   push ebx
// 00893dd9  55                   push ebp
// 00893dda  8bcf                 mov ecx, edi
// 00893ddc  e84ff1ffff           call 0x892f30
// 00893de1  8b16                 mov edx, dword ptr [esi]
// 00893de3  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00893de9  8bce                 mov ecx, esi
// 00893deb  ffd0                 call eax
// 00893ded  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00893df1  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00893df7  68c1230000           push 0x23c1
// 00893dfc  e8ff34fbff           call 0x847300
// 00893e01  85c0                 test eax, eax
// 00893e03  0f8502010000         jne 0x893f0b
// 00893e09  85db                 test ebx, ebx
// 00893e0b  0f840c010000         je 0x893f1d
// 00893e11  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00893e15  f7c700000200         test edi, 0x20000
// 00893e1b  0f8400010000         je 0x893f21
// 00893e21  f7c700000800         test edi, 0x80000
// 00893e27  0f84f4000000         je 0x893f21
// 00893e2d  f786ec00000000010000 test dword ptr [esi + 0xec], 0x100
// 00893e37  0f85e4000000         jne 0x893f21
// 00893e3d  6874010000           push 0x174
// 00893e42  e819faf5ff           call 0x7f3860
// 00893e47  83c404               add esp, 4
// 00893e4a  8944241c             mov dword ptr [esp + 0x1c], eax
// 00893e4e  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00893e56  85c0                 test eax, eax
// 00893e58  0f848d000000         je 0x893eeb
// 00893e5e  8bc8                 mov ecx, eax
// 00893e60  e88bedffff           call 0x892bf0
// 00893e65  e983000000           jmp 0x893eed
// 00893e6a  688c010000           push 0x18c
// 00893e6f  e8ecf9f5ff           call 0x7f3860
// 00893e74  83c404               add esp, 4
// 00893e77  8944241c             mov dword ptr [esp + 0x1c], eax
// 00893e7b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00893e83  85c0                 test eax, eax
// 00893e85  740b                 je 0x893e92
// 00893e87  53                   push ebx
// 00893e88  55                   push ebp
// 00893e89  8bc8                 mov ecx, eax
// 00893e8b  e800fbffff           call 0x893990
// 00893e90  eb02                 jmp 0x893e94
// 00893e92  33c0                 xor eax, eax
// 00893e94  6a00                 push 0
// 00893e96  6856fd9900           push 0x99fd56
// 00893e9b  68c2230000           push 0x23c2
// 00893ea0  50                   push eax
// 00893ea1  8bce                 mov ecx, esi
// 00893ea3  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00893eab  e8e0edffff           call 0x892c90
// 00893eb0  e938ffffff           jmp 0x893ded
// 00893eb5  85ff                 test edi, edi
// 00893eb7  0f8430ffffff         je 0x893ded
// 00893ebd  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00893ec3  8b11                 mov edx, dword ptr [ecx]
// 00893ec5  8b4258               mov eax, dword ptr [edx + 0x58]
// 00893ec8  57                   push edi
// 00893ec9  ffd0                 call eax
// 00893ecb  e91dffffff           jmp 0x893ded
// 00893ed0  85ff                 test edi, edi
// 00893ed2  0f8419ffffff         je 0x893df1
// 00893ed8  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00893ede  8b11                 mov edx, dword ptr [ecx]
// 00893ee0  8b4258               mov eax, dword ptr [edx + 0x58]
// 00893ee3  57                   push edi
// 00893ee4  ffd0                 call eax
// 00893ee6  e906ffffff           jmp 0x893df1
// 00893eeb  33c0                 xor eax, eax
// 00893eed  6aff                 push -1
// 00893eef  68c82c9b00           push 0x9b2cc8
// 00893ef4  68c1230000           push 0x23c1
// 00893ef9  50                   push eax
// 00893efa  8bce                 mov ecx, esi
// 00893efc  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00893f04  e887edffff           call 0x892c90
// 00893f09  eb16                 jmp 0x893f21
// 00893f0b  85db                 test ebx, ebx
// 00893f0d  750e                 jne 0x893f1d
// 00893f0f  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00893f15  8b11                 mov edx, dword ptr [ecx]
// 00893f17  50                   push eax
// 00893f18  8b4258               mov eax, dword ptr [edx + 0x58]
// 00893f1b  ffd0                 call eax
// 00893f1d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00893f21  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00893f27  68c0230000           push 0x23c0
// 00893f2c  e8cf33fbff           call 0x847300
// 00893f31  85c0                 test eax, eax
// 00893f33  7566                 jne 0x893f9b
// 00893f35  85db                 test ebx, ebx
// 00893f37  7474                 je 0x893fad
// 00893f39  f7c700000100         test edi, 0x10000
// 00893f3f  746c                 je 0x893fad
// 00893f41  f7c700000800         test edi, 0x80000
// 00893f47  7464                 je 0x893fad
// 00893f49  f786ec00000000020000 test dword ptr [esi + 0xec], 0x200
// 00893f53  7558                 jne 0x893fad
// 00893f55  6874010000           push 0x174
// 00893f5a  e801f9f5ff           call 0x7f3860
// 00893f5f  83c404               add esp, 4
// 00893f62  8944241c             mov dword ptr [esp + 0x1c], eax
// 00893f66  c744242802000000     mov dword ptr [esp + 0x28], 2
// 00893f6e  85c0                 test eax, eax
// 00893f70  7409                 je 0x893f7b
// 00893f72  8bc8                 mov ecx, eax
// 00893f74  e877ecffff           call 0x892bf0
// 00893f79  eb02                 jmp 0x893f7d
// 00893f7b  33c0                 xor eax, eax
// 00893f7d  6aff                 push -1
// 00893f7f  683035a000           push 0xa03530
// 00893f84  68c0230000           push 0x23c0
// 00893f89  50                   push eax
// 00893f8a  8bce                 mov ecx, esi
// 00893f8c  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00893f94  e8f7ecffff           call 0x892c90
// 00893f99  eb12                 jmp 0x893fad
// 00893f9b  85db                 test ebx, ebx
// 00893f9d  750e                 jne 0x893fad
// 00893f9f  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00893fa5  8b11                 mov edx, dword ptr [ecx]
// 00893fa7  50                   push eax
// 00893fa8  8b4258               mov eax, dword ptr [edx + 0x58]
// 00893fab  ffd0                 call eax
// 00893fad  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00893fb3  68bf230000           push 0x23bf
// 00893fb8  e84333fbff           call 0x847300
// 00893fbd  85c0                 test eax, eax
// 00893fbf  7570                 jne 0x894031
// 00893fc1  85db                 test ebx, ebx
// 00893fc3  747e                 je 0x894043
// 00893fc5  f7c700000800         test edi, 0x80000
// 00893fcb  7476                 je 0x894043
// 00893fcd  f786ec00000000100000 test dword ptr [esi + 0xec], 0x1000
// 00893fd7  756a                 jne 0x894043
// 00893fd9  6874010000           push 0x174
// 00893fde  e87df8f5ff           call 0x7f3860
// 00893fe3  83c404               add esp, 4
// 00893fe6  8944241c             mov dword ptr [esp + 0x1c], eax
// 00893fea  c744242803000000     mov dword ptr [esp + 0x28], 3
// 00893ff2  85c0                 test eax, eax
// 00893ff4  7409                 je 0x893fff
// 00893ff6  8bc8                 mov ecx, eax
// 00893ff8  e8f3ebffff           call 0x892bf0
// 00893ffd  eb02                 jmp 0x894001
// 00893fff  33c0                 xor eax, eax
// 00894001  6aff                 push -1
// 00894003  68309d9e00           push 0x9e9d30
// 00894008  68bf230000           push 0x23bf
// 0089400d  50                   push eax
// 0089400e  8bce                 mov ecx, esi
// 00894010  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00894018  e873ecffff           call 0x892c90
// 0089401d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00894021  64890d00000000       mov dword ptr fs:[0], ecx
// 00894028  59                   pop ecx
// 00894029  5f                   pop edi
// 0089402a  5e                   pop esi
// 0089402b  5d                   pop ebp
// 0089402c  5b                   pop ebx
// 0089402d  83c418               add esp, 0x18
// 00894030  c3                   ret 
// 00894031  85db                 test ebx, ebx
// 00894033  750e                 jne 0x894043
// 00894035  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0089403b  8b11                 mov edx, dword ptr [ecx]
// 0089403d  50                   push eax
// 0089403e  8b4258               mov eax, dword ptr [edx + 0x58]
// 00894041  ffd0                 call eax
// 00894043  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00894047  64890d00000000       mov dword ptr fs:[0], ecx
// 0089404e  59                   pop ecx
// 0089404f  5f                   pop edi
// 00894050  5e                   pop esi
// 00894051  5d                   pop ebp
// 00894052  5b                   pop ebx
// 00894053  83c418               add esp, 0x18
// 00894056  c3                   ret 
// copied from an identical function in another client (function ?RefreshSysButtons@CXTPMenuBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMenuBar.cpp