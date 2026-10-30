// roc 2011-06 008df1b0  unit: VCEdit::?$CXTMaskEditT  size: 718 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008df1b0
//
// 008df1b0  53                   push ebx
// 008df1b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008df1b5  56                   push esi
// 008df1b6  57                   push edi
// 008df1b7  8bf1                 mov esi, ecx
// 008df1b9  85db                 test ebx, ebx
// 008df1bb  0f8cc4000000         jl 0x8df285
// 008df1c1  8d7e70               lea edi, [esi + 0x70]
// 008df1c4  8bcf                 mov ecx, edi
// 008df1c6  ff15a826a400         call dword ptr [0xa426a8]
// 008df1cc  3bd8                 cmp ebx, eax
// 008df1ce  0f8db1000000         jge 0x8df285
// 008df1d4  53                   push ebx
// 008df1d5  8bcf                 mov ecx, edi
// 008df1d7  ff157028a400         call dword ptr [0xa42870]
// 008df1dd  0fbec0               movsx eax, al
// 008df1e0  83c0dd               add eax, -0x23
// 008df1e3  83f841               cmp eax, 0x41
// 008df1e6  0f8799000000         ja 0x8df285
// 008df1ec  0fb6803cf48d00       movzx eax, byte ptr [eax + 0x8df43c]
// 008df1f3  ff248504f48d00       jmp dword ptr [eax*4 + 0x8df404]
// 008df1fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008df1fe  0fbe11               movsx edx, byte ptr [ecx]
// 008df201  52                   push edx
// 008df202  ff155007a400         call dword ptr [0xa40750]
// 008df208  83c404               add esp, 4
// 008df20b  5f                   pop edi
// 008df20c  5e                   pop esi
// 008df20d  5b                   pop ebx
// 008df20e  c20800               ret 8
// 008df211  8b742410             mov esi, dword ptr [esp + 0x10]
// 008df215  0fbe06               movsx eax, byte ptr [esi]
// 008df218  50                   push eax
// 008df219  ff155007a400         call dword ptr [0xa40750]
// 008df21f  83c404               add esp, 4
// 008df222  85c0                 test eax, eax
// 008df224  0f85ad010000         jne 0x8df3d7
// 008df22a  0fbe0e               movsx ecx, byte ptr [esi]
// 008df22d  51                   push ecx
// 008df22e  ff155407a400         call dword ptr [0xa40754]
// 008df234  83c404               add esp, 4
// 008df237  85c0                 test eax, eax
// 008df239  0f8598010000         jne 0x8df3d7
// 008df23f  5f                   pop edi
// 008df240  5e                   pop esi
// 008df241  5b                   pop ebx
// 008df242  c20800               ret 8
// 008df245  8b742410             mov esi, dword ptr [esp + 0x10]
// 008df249  0fbe16               movsx edx, byte ptr [esi]
// 008df24c  52                   push edx
// 008df24d  ff155007a400         call dword ptr [0xa40750]
// 008df253  83c404               add esp, 4
// 008df256  85c0                 test eax, eax
// 008df258  0f8579010000         jne 0x8df3d7
// 008df25e  0fbe06               movsx eax, byte ptr [esi]
// 008df261  50                   push eax
// 008df262  ff155407a400         call dword ptr [0xa40754]
// 008df268  83c404               add esp, 4
// 008df26b  85c0                 test eax, eax
// 008df26d  0f8564010000         jne 0x8df3d7
// 008df273  8a06                 mov al, byte ptr [esi]
// 008df275  3c2d                 cmp al, 0x2d
// 008df277  0f845a010000         je 0x8df3d7
// 008df27d  3c2b                 cmp al, 0x2b
// 008df27f  0f8452010000         je 0x8df3d7
// 008df285  5f                   pop edi
// 008df286  5e                   pop esi
// 008df287  33c0                 xor eax, eax
// 008df289  5b                   pop ebx
// 008df28a  c20800               ret 8
// 008df28d  8b742410             mov esi, dword ptr [esp + 0x10]
// 008df291  0fbe0e               movsx ecx, byte ptr [esi]
// 008df294  51                   push ecx
// 008df295  ff155007a400         call dword ptr [0xa40750]
// 008df29b  83c404               add esp, 4
// 008df29e  85c0                 test eax, eax
// 008df2a0  0f8531010000         jne 0x8df3d7
// 008df2a6  0fbe16               movsx edx, byte ptr [esi]
// 008df2a9  52                   push edx
// 008df2aa  ff155407a400         call dword ptr [0xa40754]
// 008df2b0  83c404               add esp, 4
// 008df2b3  85c0                 test eax, eax
// 008df2b5  0f851c010000         jne 0x8df3d7
// 008df2bb  8a06                 mov al, byte ptr [esi]
// 008df2bd  3c2d                 cmp al, 0x2d
// 008df2bf  0f8412010000         je 0x8df3d7
// 008df2c5  3c2b                 cmp al, 0x2b
// 008df2c7  0f840a010000         je 0x8df3d7
// 008df2cd  3c2e                 cmp al, 0x2e
// 008df2cf  0f8402010000         je 0x8df3d7
// 008df2d5  3c2c                 cmp al, 0x2c
// 008df2d7  eba6                 jmp 0x8df27f
// 008df2d9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008df2dd  0fb611               movzx edx, byte ptr [ecx]
// 008df2e0  8b06                 mov eax, dword ptr [esi]
// 008df2e2  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 008df2e8  52                   push edx
// 008df2e9  8bce                 mov ecx, esi
// 008df2eb  ffd0                 call eax
// 008df2ed  5f                   pop edi
// 008df2ee  5e                   pop esi
// 008df2ef  5b                   pop ebx
// 008df2f0  c20800               ret 8
// 008df2f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008df2f7  0fb607               movzx eax, byte ptr [edi]
// 008df2fa  8b16                 mov edx, dword ptr [esi]
// 008df2fc  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008df302  50                   push eax
// 008df303  8bce                 mov ecx, esi
// 008df305  ffd2                 call edx
// 008df307  85c0                 test eax, eax
// 008df309  0f85c8000000         jne 0x8df3d7
// 008df30f  0fbe07               movsx eax, byte ptr [edi]
// 008df312  50                   push eax
// 008df313  e916ffffff           jmp 0x8df22e
// 008df318  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008df31c  0fbe0f               movsx ecx, byte ptr [edi]
// 008df31f  51                   push ecx
// 008df320  ff155807a400         call dword ptr [0xa40758]
// 008df326  83c404               add esp, 4
// 008df329  85c0                 test eax, eax
// 008df32b  0f85a6000000         jne 0x8df3d7
// 008df331  0fb607               movzx eax, byte ptr [edi]
// 008df334  8b16                 mov edx, dword ptr [esi]
// 008df336  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008df33c  50                   push eax
// 008df33d  8bce                 mov ecx, esi
// 008df33f  ffd2                 call edx
// 008df341  e9f1feffff           jmp 0x8df237
// 008df346  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008df34a  0fbe07               movsx eax, byte ptr [edi]
// 008df34d  50                   push eax
// 008df34e  ff155807a400         call dword ptr [0xa40758]
// 008df354  83c404               add esp, 4
// 008df357  85c0                 test eax, eax
// 008df359  757c                 jne 0x8df3d7
// 008df35b  eb9a                 jmp 0x8df2f7
// 008df35d  8b442410             mov eax, dword ptr [esp + 0x10]
// 008df361  0fb608               movzx ecx, byte ptr [eax]
// 008df364  8b16                 mov edx, dword ptr [esi]
// 008df366  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008df36c  51                   push ecx
// 008df36d  8bce                 mov ecx, esi
// 008df36f  ffd2                 call edx
// 008df371  5f                   pop edi
// 008df372  5e                   pop esi
// 008df373  5b                   pop ebx
// 008df374  c20800               ret 8
// 008df377  8b442410             mov eax, dword ptr [esp + 0x10]
// 008df37b  0fbe08               movsx ecx, byte ptr [eax]
// 008df37e  51                   push ecx
// 008df37f  ff150c08a400         call dword ptr [0xa4080c]
// 008df385  83c404               add esp, 4
// 008df388  5f                   pop edi
// 008df389  5e                   pop esi
// 008df38a  5b                   pop ebx
// 008df38b  c20800               ret 8
// 008df38e  8b742410             mov esi, dword ptr [esp + 0x10]
// 008df392  0fbe16               movsx edx, byte ptr [esi]
// 008df395  52                   push edx
// 008df396  ff150c08a400         call dword ptr [0xa4080c]
// 008df39c  83c404               add esp, 4
// 008df39f  85c0                 test eax, eax
// 008df3a1  7534                 jne 0x8df3d7
// 008df3a3  0fbe06               movsx eax, byte ptr [esi]
// 008df3a6  50                   push eax
// 008df3a7  e982feffff           jmp 0x8df22e
// 008df3ac  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008df3b0  0fb607               movzx eax, byte ptr [edi]
// 008df3b3  8b16                 mov edx, dword ptr [esi]
// 008df3b5  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008df3bb  50                   push eax
// 008df3bc  8bce                 mov ecx, esi
// 008df3be  ffd2                 call edx
// 008df3c0  85c0                 test eax, eax
// 008df3c2  0f84bdfeffff         je 0x8df285
// 008df3c8  6a01                 push 1
// 008df3ca  0fb607               movzx eax, byte ptr [edi]
// 008df3cd  50                   push eax
// 008df3ce  8bce                 mov ecx, esi
// 008df3d0  e8dbf6ffff           call 0x8deab0
// 008df3d5  8807                 mov byte ptr [edi], al
// 008df3d7  5f                   pop edi
// 008df3d8  5e                   pop esi
// 008df3d9  b801000000           mov eax, 1
// 008df3de  5b                   pop ebx
// 008df3df  c20800               ret 8
// 008df3e2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008df3e6  0fb607               movzx eax, byte ptr [edi]
// 008df3e9  8b16                 mov edx, dword ptr [esi]
// 008df3eb  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008df3f1  50                   push eax
// 008df3f2  8bce                 mov ecx, esi
// 008df3f4  ffd2                 call edx
// 008df3f6  85c0                 test eax, eax
// 008df3f8  0f8487feffff         je 0x8df285
// 008df3fe  6a00                 push 0
// 008df400  ebc8                 jmp 0x8df3ca
// 008df402  8bff                 mov edi, edi
// 008df404  45                   inc ebp
// 008df405  f28d00               lea eax, [eax]
// 008df408  5d                   pop ebp
// 008df409  f38d00               lea eax, [eax]
// 008df40c  fa                   cli 
// 008df40d  f1                   int1 
// 008df40e  8d00                 lea eax, [eax]
// 008df410  11f2                 adc edx, esi
// 008df412  8d00                 lea eax, [eax]
// 008df414  e2f3                 loop 0x8df409
// 008df416  8d00                 lea eax, [eax]
// 008df418  ac                   lodsb al, byte ptr [esi]
// 008df419  f38d00               lea eax, [eax]
// 008df41c  f3f28d00             lea eax, [eax]
// 008df420  18f3                 sbb bl, dh
// 008df422  8d00                 lea eax, [eax]
// 008df424  77f3                 ja 0x8df419
// 008df426  8d00                 lea eax, [eax]
// 008df428  d9f2                 fptan 
// 008df42a  8d00                 lea eax, [eax]
// copied from an identical function in another client (function ?ProcessMask@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp