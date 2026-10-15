// roc 2008-06 0043e4c0  unit: ScriptItem  size: 847 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043e4c0
//
// 0043e4c0  55                   push ebp
// 0043e4c1  8bec                 mov ebp, esp
// 0043e4c3  6aff                 push -1
// 0043e4c5  6850087c00           push 0x7c0850
// 0043e4ca  64a100000000         mov eax, dword ptr fs:[0]
// 0043e4d0  50                   push eax
// 0043e4d1  64892500000000       mov dword ptr fs:[0], esp
// 0043e4d8  81ec90000000         sub esp, 0x90
// 0043e4de  53                   push ebx
// 0043e4df  56                   push esi
// 0043e4e0  57                   push edi
// 0043e4e1  8965f0               mov dword ptr [ebp - 0x10], esp
// 0043e4e4  8bd9                 mov ebx, ecx
// 0043e4e6  33f6                 xor esi, esi
// 0043e4e8  6a04                 push 4
// 0043e4ea  895ddc               mov dword ptr [ebp - 0x24], ebx
// 0043e4ed  8975fc               mov dword ptr [ebp - 4], esi
// 0043e4f0  e82b242600           call 0x6a0920
// 0043e4f5  83c404               add esp, 4
// 0043e4f8  3bc6                 cmp eax, esi
// 0043e4fa  7407                 je 0x43e503
// 0043e4fc  8d4db4               lea ecx, [ebp - 0x4c]
// 0043e4ff  8908                 mov dword ptr [eax], ecx
// 0043e501  eb02                 jmp 0x43e505
// 0043e503  33c0                 xor eax, eax
// 0043e505  8945b4               mov dword ptr [ebp - 0x4c], eax
// 0043e508  8975c0               mov dword ptr [ebp - 0x40], esi
// 0043e50b  8975c4               mov dword ptr [ebp - 0x3c], esi
// 0043e50e  8975c8               mov dword ptr [ebp - 0x38], esi
// 0043e511  8b8328010000         mov eax, dword ptr [ebx + 0x128]
// 0043e517  8b9030020000         mov edx, dword ptr [eax + 0x230]
// 0043e51d  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 0043e523  0518020000           add eax, 0x218
// 0043e528  8b00                 mov eax, dword ptr [eax]
// 0043e52a  c645fc02             mov byte ptr [ebp - 4], 2
// 0043e52e  8955a8               mov dword ptr [ebp - 0x58], edx
// 0043e531  8945a4               mov dword ptr [ebp - 0x5c], eax
// 0043e534  39b31c010000         cmp dword ptr [ebx + 0x11c], esi
// 0043e53a  7606                 jbe 0x43e542
// 0043e53c  ff1590288000         call dword ptr [0x802890]
// 0043e542  8b8b10010000         mov ecx, dword ptr [ebx + 0x110]
// 0043e548  8975b0               mov dword ptr [ebp - 0x50], esi
// 0043e54b  8bb31c010000         mov esi, dword ptr [ebx + 0x11c]
// 0043e551  894dac               mov dword ptr [ebp - 0x54], ecx
// 0043e554  3bb320010000         cmp esi, dword ptr [ebx + 0x120]
// 0043e55a  7606                 jbe 0x43e562
// 0043e55c  ff1590288000         call dword ptr [0x802890]
// 0043e562  8bbb10010000         mov edi, dword ptr [ebx + 0x110]
// 0043e568  897de0               mov dword ptr [ebp - 0x20], edi
// 0043e56b  8975e4               mov dword ptr [ebp - 0x1c], esi
// 0043e56e  8bff                 mov edi, edi
// 0043e570  85ff                 test edi, edi
// 0043e572  7405                 je 0x43e579
// 0043e574  3b7dac               cmp edi, dword ptr [ebp - 0x54]
// 0043e577  7406                 je 0x43e57f
// 0043e579  ff1590288000         call dword ptr [0x802890]
// 0043e57f  3b75b0               cmp esi, dword ptr [ebp - 0x50]
// 0043e582  0f8462010000         je 0x43e6ea
// 0043e588  85ff                 test edi, edi
// 0043e58a  0f850a010000         jne 0x43e69a
// 0043e590  ff1590288000         call dword ptr [0x802890]
// 0043e596  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0043e599  7206                 jb 0x43e5a1
// 0043e59b  ff1590288000         call dword ptr [0x802890]
// 0043e5a1  8b16                 mov edx, dword ptr [esi]
// 0043e5a3  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 0043e5a9  8d45d8               lea eax, [ebp - 0x28]
// 0043e5ac  8955d8               mov dword ptr [ebp - 0x28], edx
// 0043e5af  50                   push eax
// 0043e5b0  8d55d0               lea edx, [ebp - 0x30]
// 0043e5b3  81c118020000         add ecx, 0x218
// 0043e5b9  52                   push edx
// 0043e5ba  e861bdffff           call 0x43a320
// 0043e5bf  8b7dd0               mov edi, dword ptr [ebp - 0x30]
// 0043e5c2  85ff                 test edi, edi
// 0043e5c4  7405                 je 0x43e5cb
// 0043e5c6  3b7da4               cmp edi, dword ptr [ebp - 0x5c]
// 0043e5c9  7406                 je 0x43e5d1
// 0043e5cb  ff1590288000         call dword ptr [0x802890]
// 0043e5d1  8b75d4               mov esi, dword ptr [ebp - 0x2c]
// 0043e5d4  3b75a8               cmp esi, dword ptr [ebp - 0x58]
// 0043e5d7  0f84dd000000         je 0x43e6ba
// 0043e5dd  85ff                 test edi, edi
// 0043e5df  0f85bc000000         jne 0x43e6a1
// 0043e5e5  ff1590288000         call dword ptr [0x802890]
// 0043e5eb  33c0                 xor eax, eax
// 0043e5ed  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043e5f0  7506                 jne 0x43e5f8
// 0043e5f2  ff1590288000         call dword ptr [0x802890]
// 0043e5f8  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0043e5fb  3b5e20               cmp ebx, dword ptr [esi + 0x20]
// 0043e5fe  7606                 jbe 0x43e606
// 0043e600  ff1590288000         call dword ptr [0x802890]
// 0043e606  8b4610               mov eax, dword ptr [esi + 0x10]
// 0043e609  895dec               mov dword ptr [ebp - 0x14], ebx
// 0043e60c  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043e612  8945e8               mov dword ptr [ebp - 0x18], eax
// 0043e615  85ff                 test edi, edi
// 0043e617  0f858b000000         jne 0x43e6a8
// 0043e61d  ffd3                 call ebx
// 0043e61f  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0043e622  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0043e625  7505                 jne 0x43e62c
// 0043e627  ffd3                 call ebx
// 0043e629  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0043e62c  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0043e62f  397e1c               cmp dword ptr [esi + 0x1c], edi
// 0043e632  7605                 jbe 0x43e639
// 0043e634  ffd3                 call ebx
// 0043e636  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0043e639  8b7610               mov esi, dword ptr [esi + 0x10]
// 0043e63c  8d642400             lea esp, [esp]
// 0043e640  85c0                 test eax, eax
// 0043e642  7404                 je 0x43e648
// 0043e644  3bc6                 cmp eax, esi
// 0043e646  7405                 je 0x43e64d
// 0043e648  ffd3                 call ebx
// 0043e64a  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0043e64d  397dec               cmp dword ptr [ebp - 0x14], edi
// 0043e650  7465                 je 0x43e6b7
// 0043e652  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043e658  85c0                 test eax, eax
// 0043e65a  7553                 jne 0x43e6af
// 0043e65c  ffd3                 call ebx
// 0043e65e  33c0                 xor eax, eax
// 0043e660  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0043e663  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 0043e666  7202                 jb 0x43e66a
// 0043e668  ffd3                 call ebx
// 0043e66a  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0043e66d  52                   push edx
// 0043e66e  8d4db4               lea ecx, [ebp - 0x4c]
// 0043e671  e89a1afeff           call 0x420110
// 0043e676  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0043e679  85c0                 test eax, eax
// 0043e67b  7536                 jne 0x43e6b3
// 0043e67d  ffd3                 call ebx
// 0043e67f  33c0                 xor eax, eax
// 0043e681  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0043e684  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 0043e687  7202                 jb 0x43e68b
// 0043e689  ffd3                 call ebx
// 0043e68b  8345ec08             add dword ptr [ebp - 0x14], 8
// 0043e68f  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043e695  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0043e698  eba6                 jmp 0x43e640
// 0043e69a  8b3f                 mov edi, dword ptr [edi]
// 0043e69c  e9f5feffff           jmp 0x43e596
// 0043e6a1  8b07                 mov eax, dword ptr [edi]
// 0043e6a3  e945ffffff           jmp 0x43e5ed
// 0043e6a8  8b3f                 mov edi, dword ptr [edi]
// 0043e6aa  e973ffffff           jmp 0x43e622
// 0043e6af  8b00                 mov eax, dword ptr [eax]
// 0043e6b1  ebad                 jmp 0x43e660
// 0043e6b3  8b00                 mov eax, dword ptr [eax]
// 0043e6b5  ebca                 jmp 0x43e681
// 0043e6b7  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 0043e6ba  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 0043e6bd  85c0                 test eax, eax
// 0043e6bf  7525                 jne 0x43e6e6
// 0043e6c1  ff1590288000         call dword ptr [0x802890]
// 0043e6c7  33c0                 xor eax, eax
// 0043e6c9  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 0043e6cc  3b5010               cmp edx, dword ptr [eax + 0x10]
// 0043e6cf  7206                 jb 0x43e6d7
// 0043e6d1  ff1590288000         call dword ptr [0x802890]
// 0043e6d7  8345e404             add dword ptr [ebp - 0x1c], 4
// 0043e6db  8b7de0               mov edi, dword ptr [ebp - 0x20]
// 0043e6de  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 0043e6e1  e98afeffff           jmp 0x43e570
// 0043e6e6  8b00                 mov eax, dword ptr [eax]
// 0043e6e8  ebdf                 jmp 0x43e6c9
// 0043e6ea  8b4508               mov eax, dword ptr [ebp + 8]
// 0043e6ed  83ec38               sub esp, 0x38
// 0043e6f0  8965d8               mov dword ptr [ebp - 0x28], esp
// 0043e6f3  8965dc               mov dword ptr [ebp - 0x24], esp
// 0043e6f6  83ec20               sub esp, 0x20
// 0043e6f9  8bf4                 mov esi, esp
// 0043e6fb  8965d8               mov dword ptr [ebp - 0x28], esp
// 0043e6fe  50                   push eax
// 0043e6ff  8bce                 mov ecx, esi
// 0043e701  bf20a74300           mov edi, 0x43a720
// 0043e706  c745d400000000       mov dword ptr [ebp - 0x2c], 0
// 0043e70d  ff155c248000         call dword ptr [0x80245c]
// 0043e713  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0043e716  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0043e719  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0043e71c  51                   push ecx
// 0043e71d  b810f27100           mov eax, 0x71f210
// 0043e722  50                   push eax
// 0043e723  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043e726  89561c               mov dword ptr [esi + 0x1c], edx
// 0043e729  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0043e72c  53                   push ebx
// 0043e72d  52                   push edx
// 0043e72e  57                   push edi
// 0043e72f  50                   push eax
// 0043e730  e8abe9ffff           call 0x43d0e0
// 0043e735  8b4dc4               mov ecx, dword ptr [ebp - 0x3c]
// 0043e738  8b45c0               mov eax, dword ptr [ebp - 0x40]
// 0043e73b  83c438               add esp, 0x38
// 0043e73e  894d08               mov dword ptr [ebp + 8], ecx
// 0043e741  3bc1                 cmp eax, ecx
// 0043e743  760c                 jbe 0x43e751
// 0043e745  ff1590288000         call dword ptr [0x802890]
// 0043e74b  8b4dc4               mov ecx, dword ptr [ebp - 0x3c]
// 0043e74e  8b45c0               mov eax, dword ptr [ebp - 0x40]
// 0043e751  8b75b4               mov esi, dword ptr [ebp - 0x4c]
// 0043e754  8bf8                 mov edi, eax
// 0043e756  3bc1                 cmp eax, ecx
// 0043e758  7606                 jbe 0x43e760
// 0043e75a  ff1590288000         call dword ptr [0x802890]
// 0043e760  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0043e763  8b55b4               mov edx, dword ptr [ebp - 0x4c]
// 0043e766  51                   push ecx
// 0043e767  56                   push esi
// 0043e768  57                   push edi
// 0043e769  52                   push edx
// 0043e76a  8d8564ffffff         lea eax, [ebp - 0x9c]
// 0043e770  50                   push eax
// 0043e771  e85aeaffff           call 0x43d1d0
// 0043e776  83c44c               add esp, 0x4c
// 0043e779  8d8d78ffffff         lea ecx, [ebp - 0x88]
// 0043e77f  ff1568248000         call dword ptr [0x802468]
// 0043e785  8b8328010000         mov eax, dword ptr [ebx + 0x128]
// 0043e78b  33c9                 xor ecx, ecx
// 0043e78d  398898010000         cmp dword ptr [eax + 0x198], ecx
// 0043e793  746e                 je 0x43e803
// 0043e795  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043e79b  894dcc               mov dword ptr [ebp - 0x34], ecx
// 0043e79e  894dd0               mov dword ptr [ebp - 0x30], ecx
// 0043e7a1  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 0043e7a4  50                   push eax
// 0043e7a5  8d4dcc               lea ecx, [ebp - 0x34]
// 0043e7a8  c645fc03             mov byte ptr [ebp - 4], 3
// 0043e7ac  e84f871300           call 0x576f00
// 0043e7b1  8b8b2c010000         mov ecx, dword ptr [ebx + 0x12c]
// 0043e7b7  8b4104               mov eax, dword ptr [ecx + 4]
// 0043e7ba  8d4804               lea ecx, [eax + 4]
// 0043e7bd  c645fc04             mov byte ptr [ebp - 4], 4
// 0043e7c1  ff1564248000         call dword ptr [0x802464]
// 0043e7c7  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 0043e7cd  8b8a98010000         mov ecx, dword ptr [edx + 0x198]
// 0043e7d3  51                   push ecx
// 0043e7d4  50                   push eax
// 0043e7d5  e8e6dd1400           call 0x58c5c0
// 0043e7da  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 0043e7e0  8b8298010000         mov eax, dword ptr [edx + 0x198]
// 0043e7e6  8d88f0010000         lea ecx, [eax + 0x1f0]
// 0043e7ec  8b01                 mov eax, dword ptr [ecx]
// 0043e7ee  8b10                 mov edx, dword ptr [eax]
// 0043e7f0  83c408               add esp, 8
// 0043e7f3  6a01                 push 1
// 0043e7f5  ffd2                 call edx
// 0043e7f7  8d4dcc               lea ecx, [ebp - 0x34]
// 0043e7fa  c645fc02             mov byte ptr [ebp - 4], 2
// 0043e7fe  e8bd8b1300           call 0x5773c0
// 0043e803  8d4db4               lea ecx, [ebp - 0x4c]
// 0043e806  c645fc00             mov byte ptr [ebp - 4], 0
// 0043e80a  e8d1471600           call 0x5a2fe0

void func_0043e4c0()
{
}
