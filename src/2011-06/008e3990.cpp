// roc 2011-06 008e3990  unit: CXTPPropertyGridPaintManager  size: 1081 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e3990
//
// 008e3990  6aff                 push -1
// 008e3992  68eedca000           push 0xa0dcee
// 008e3997  64a100000000         mov eax, dword ptr fs:[0]
// 008e399d  50                   push eax
// 008e399e  81ec80000000         sub esp, 0x80
// 008e39a4  53                   push ebx
// 008e39a5  55                   push ebp
// 008e39a6  56                   push esi
// 008e39a7  57                   push edi
// 008e39a8  a12058c900           mov eax, dword ptr [0xc95820]
// 008e39ad  33c4                 xor eax, esp
// 008e39af  50                   push eax
// 008e39b0  8d842494000000       lea eax, [esp + 0x94]
// 008e39b7  64a300000000         mov dword ptr fs:[0], eax
// 008e39bd  8bf9                 mov edi, ecx
// 008e39bf  8b4760               mov eax, dword ptr [edi + 0x60]
// 008e39c2  50                   push eax
// 008e39c3  8d4c2438             lea ecx, [esp + 0x38]
// 008e39c7  e8c493f7ff           call 0x85cd90
// 008e39cc  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 008e39d0  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 008e39d7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008e39df  7521                 jne 0x8e3a02
// 008e39e1  8b4738               mov eax, dword ptr [edi + 0x38]
// 008e39e4  83f8ff               cmp eax, -1
// 008e39e7  7505                 jne 0x8e39ee
// 008e39e9  8b5f34               mov ebx, dword ptr [edi + 0x34]
// 008e39ec  eb02                 jmp 0x8e39f0
// 008e39ee  8bd8                 mov ebx, eax
// 008e39f0  e8eb19f6ff           call 0x8453e0
// 008e39f5  6a0f                 push 0xf
// 008e39f7  8bc8                 mov ecx, eax
// 008e39f9  e8b211f6ff           call 0x844bb0
// 008e39fe  3bd8                 cmp ebx, eax
// 008e3a00  756c                 jne 0x8e3a6e
// 008e3a02  85f6                 test esi, esi
// 008e3a04  7504                 jne 0x8e3a0a
// 008e3a06  33db                 xor ebx, ebx
// 008e3a08  eb03                 jmp 0x8e3a0d
// 008e3a0a  8b5e04               mov ebx, dword ptr [esi + 4]
// 008e3a0d  8b4760               mov eax, dword ptr [edi + 0x60]
// 008e3a10  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008e3a13  51                   push ecx
// 008e3a14  ff15b819a400         call dword ptr [0xa419b8]
// 008e3a1a  50                   push eax
// 008e3a1b  e80869f2ff           call 0x80a328
// 008e3a20  8b5760               mov edx, dword ptr [edi + 0x60]
// 008e3a23  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 008e3a26  8b4020               mov eax, dword ptr [eax + 0x20]
// 008e3a29  51                   push ecx
// 008e3a2a  53                   push ebx
// 008e3a2b  6838010000           push 0x138
// 008e3a30  50                   push eax
// 008e3a31  ff15c019a400         call dword ptr [0xa419c0]
// 008e3a37  89442418             mov dword ptr [esp + 0x18], eax
// 008e3a3b  85c0                 test eax, eax
// 008e3a3d  742f                 je 0x8e3a6e
// 008e3a3f  85f6                 test esi, esi
// 008e3a41  7515                 jne 0x8e3a58
// 008e3a43  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e3a47  51                   push ecx
// 008e3a48  8d542438             lea edx, [esp + 0x38]
// 008e3a4c  33c0                 xor eax, eax
// 008e3a4e  52                   push edx
// 008e3a4f  50                   push eax
// 008e3a50  ff15e81ba400         call dword ptr [0xa41be8]
// 008e3a56  eb2e                 jmp 0x8e3a86
// 008e3a58  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e3a5c  8b4604               mov eax, dword ptr [esi + 4]
// 008e3a5f  51                   push ecx
// 008e3a60  8d542438             lea edx, [esp + 0x38]
// 008e3a64  52                   push edx
// 008e3a65  50                   push eax
// 008e3a66  ff15e81ba400         call dword ptr [0xa41be8]
// 008e3a6c  eb18                 jmp 0x8e3a86
// 008e3a6e  8b4738               mov eax, dword ptr [edi + 0x38]
// 008e3a71  83f8ff               cmp eax, -1
// 008e3a74  7503                 jne 0x8e3a79
// 008e3a76  8b4734               mov eax, dword ptr [edi + 0x34]
// 008e3a79  50                   push eax
// 008e3a7a  8d442438             lea eax, [esp + 0x38]
// 008e3a7e  50                   push eax
// 008e3a7f  8bce                 mov ecx, esi
// 008e3a81  e89a73f2ff           call 0x80ae20
// 008e3a86  6a01                 push 1
// 008e3a88  8bce                 mov ecx, esi
// 008e3a8a  e85f8b0e00           call 0x9cc5ee
// 008e3a8f  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008e3a92  8b4160               mov eax, dword ptr [ecx + 0x60]
// 008e3a95  85c0                 test eax, eax
// 008e3a97  0f8468020000         je 0x8e3d05
// 008e3a9d  e88e58f8ff           call 0x869330
// 008e3aa2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e3aa6  8b542438             mov edx, dword ptr [esp + 0x38]
// 008e3aaa  8be8                 mov ebp, eax
// 008e3aac  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008e3ab0  8944242c             mov dword ptr [esp + 0x2c], eax
// 008e3ab4  8b442440             mov eax, dword ptr [esp + 0x40]
// 008e3ab8  894c2424             mov dword ptr [esp + 0x24], ecx
// 008e3abc  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008e3abf  89542428             mov dword ptr [esp + 0x28], edx
// 008e3ac3  89442430             mov dword ptr [esp + 0x30], eax
// 008e3ac7  2b4154               sub eax, dword ptr [ecx + 0x54]
// 008e3aca  837c241800           cmp dword ptr [esp + 0x18], 0
// 008e3acf  89442428             mov dword ptr [esp + 0x28], eax
// 008e3ad3  7406                 je 0x8e3adb
// 008e3ad5  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 008e3ad9  7522                 jne 0x8e3afd
// 008e3adb  8b4774               mov eax, dword ptr [edi + 0x74]
// 008e3ade  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008e3ae1  83c034               add eax, 0x34
// 008e3ae4  83f9ff               cmp ecx, -1
// 008e3ae7  7505                 jne 0x8e3aee
// 008e3ae9  8b4004               mov eax, dword ptr [eax + 4]
// 008e3aec  eb02                 jmp 0x8e3af0
// 008e3aee  8bc1                 mov eax, ecx
// 008e3af0  50                   push eax
// 008e3af1  8d542428             lea edx, [esp + 0x28]
// 008e3af5  52                   push edx
// 008e3af6  8bce                 mov ecx, esi
// 008e3af8  e82373f2ff           call 0x80ae20
// 008e3afd  8b07                 mov eax, dword ptr [edi]
// 008e3aff  8b5018               mov edx, dword ptr [eax + 0x18]
// 008e3b02  6a00                 push 0
// 008e3b04  8d4c2428             lea ecx, [esp + 0x28]
// 008e3b08  51                   push ecx
// 008e3b09  56                   push esi
// 008e3b0a  8bcf                 mov ecx, edi
// 008e3b0c  ffd2                 call edx
// 008e3b0e  8b4774               mov eax, dword ptr [edi + 0x74]
// 008e3b11  83c028               add eax, 0x28
// 008e3b14  50                   push eax
// 008e3b15  56                   push esi
// 008e3b16  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008e3b1d  e8fe95f7ff           call 0x85d120
// 008e3b22  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 008e3b2d  85ed                 test ebp, ebp
// 008e3b2f  0f84aa010000         je 0x8e3cdf
// 008e3b35  8b4774               mov eax, dword ptr [edi + 0x74]
// 008e3b38  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008e3b3b  83c040               add eax, 0x40
// 008e3b3e  83f9ff               cmp ecx, -1
// 008e3b41  7505                 jne 0x8e3b48
// 008e3b43  8b4004               mov eax, dword ptr [eax + 4]
// 008e3b46  eb02                 jmp 0x8e3b4a
// 008e3b48  8bc1                 mov eax, ecx
// 008e3b4a  8b16                 mov edx, dword ptr [esi]
// 008e3b4c  50                   push eax
// 008e3b4d  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e3b50  8bce                 mov ecx, esi
// 008e3b52  ffd0                 call eax
// 008e3b54  6a01                 push 1
// 008e3b56  8bce                 mov ecx, esi
// 008e3b58  e8918a0e00           call 0x9cc5ee
// 008e3b5d  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e3b61  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e3b65  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008e3b69  6afd                 push -3
// 008e3b6b  8954244c             mov dword ptr [esp + 0x4c], edx
// 008e3b6f  894c2448             mov dword ptr [esp + 0x48], ecx
// 008e3b73  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e3b77  6afa                 push -6
// 008e3b79  8d54244c             lea edx, [esp + 0x4c]
// 008e3b7d  52                   push edx
// 008e3b7e  89442458             mov dword ptr [esp + 0x58], eax
// 008e3b82  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008e3b86  ff15e41ba400         call dword ptr [0xa41be4]
// 008e3b8c  8d442420             lea eax, [esp + 0x20]
// 008e3b90  50                   push eax
// 008e3b91  8bcd                 mov ecx, ebp
// 008e3b93  e828f5b5ff           call 0x4430c0
// 008e3b98  8bd8                 mov ebx, eax
// 008e3b9a  8b0e                 mov ecx, dword ptr [esi]
// 008e3b9c  6820080000           push 0x820
// 008e3ba1  8d542448             lea edx, [esp + 0x48]
// 008e3ba5  894c2420             mov dword ptr [esp + 0x20], ecx
// 008e3ba9  52                   push edx
// 008e3baa  8bcb                 mov ecx, ebx
// 008e3bac  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 008e3bb4  ff15a826a400         call dword ptr [0xa426a8]
// 008e3bba  50                   push eax
// 008e3bbb  8bcb                 mov ecx, ebx
// 008e3bbd  ff15c82da400         call dword ptr [0xa42dc8]
// 008e3bc3  50                   push eax
// 008e3bc4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008e3bc8  8b5070               mov edx, dword ptr [eax + 0x70]
// 008e3bcb  8bce                 mov ecx, esi
// 008e3bcd  ffd2                 call edx
// 008e3bcf  8d4c2420             lea ecx, [esp + 0x20]
// 008e3bd3  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 008e3bdb  ff15082ea400         call dword ptr [0xa42e08]
// 008e3be1  8d442414             lea eax, [esp + 0x14]
// 008e3be5  50                   push eax
// 008e3be6  8bcd                 mov ecx, ebp
// 008e3be8  e87321f9ff           call 0x875d60
// 008e3bed  8d4c2414             lea ecx, [esp + 0x14]
// 008e3bf1  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 008e3bf9  ff15b026a400         call dword ptr [0xa426b0]
// 008e3bff  84c0                 test al, al
// 008e3c01  0f85ce000000         jne 0x8e3cd5
// 008e3c07  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 008e3c0a  83c120               add ecx, 0x20
// 008e3c0d  51                   push ecx
// 008e3c0e  56                   push esi
// 008e3c0f  8d4c247c             lea ecx, [esp + 0x7c]
// 008e3c13  e80895f7ff           call 0x85d120
// 008e3c18  8d4c2464             lea ecx, [esp + 0x64]
// 008e3c1c  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 008e3c24  e8c790f7ff           call 0x85ccf0
// 008e3c29  8d542420             lea edx, [esp + 0x20]
// 008e3c2d  52                   push edx
// 008e3c2e  8bcd                 mov ecx, ebp
// 008e3c30  e88bf4b5ff           call 0x4430c0
// 008e3c35  68200c0000           push 0xc20
// 008e3c3a  8d4c2468             lea ecx, [esp + 0x68]
// 008e3c3e  51                   push ecx
// 008e3c3f  50                   push eax
// 008e3c40  8bce                 mov ecx, esi
// 008e3c42  c68424a800000004     mov byte ptr [esp + 0xa8], 4
// 008e3c4a  e8a1c4f2ff           call 0x8100f0
// 008e3c4f  8d4c2420             lea ecx, [esp + 0x20]
// 008e3c53  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 008e3c5b  ff15082ea400         call dword ptr [0xa42e08]
// 008e3c61  8b442470             mov eax, dword ptr [esp + 0x70]
// 008e3c65  2b442468             sub eax, dword ptr [esp + 0x68]
// 008e3c69  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e3c6d  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e3c71  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008e3c75  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008e3c79  83c006               add eax, 6
// 008e3c7c  894c2454             mov dword ptr [esp + 0x54], ecx
// 008e3c80  03d0                 add edx, eax
// 008e3c82  83c106               add ecx, 6
// 008e3c85  89542458             mov dword ptr [esp + 0x58], edx
// 008e3c89  83eb03               sub ebx, 3
// 008e3c8c  6810080000           push 0x810
// 008e3c91  8d542458             lea edx, [esp + 0x58]
// 008e3c95  894c2458             mov dword ptr [esp + 0x58], ecx
// 008e3c99  83ed06               sub ebp, 6
// 008e3c9c  895c2464             mov dword ptr [esp + 0x64], ebx
// 008e3ca0  8b1e                 mov ebx, dword ptr [esi]
// 008e3ca2  52                   push edx
// 008e3ca3  8d4c241c             lea ecx, [esp + 0x1c]
// 008e3ca7  896c2464             mov dword ptr [esp + 0x64], ebp
// 008e3cab  ff15a826a400         call dword ptr [0xa426a8]
// 008e3cb1  50                   push eax
// 008e3cb2  8d4c2420             lea ecx, [esp + 0x20]
// 008e3cb6  ff15c82da400         call dword ptr [0xa42dc8]
// 008e3cbc  50                   push eax
// 008e3cbd  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008e3cc0  8bce                 mov ecx, esi
// 008e3cc2  ffd0                 call eax
// 008e3cc4  8d4c2474             lea ecx, [esp + 0x74]
// 008e3cc8  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 008e3cd0  e8cb94f7ff           call 0x85d1a0
// 008e3cd5  8d4c2414             lea ecx, [esp + 0x14]
// 008e3cd9  ff15082ea400         call dword ptr [0xa42e08]
// 008e3cdf  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008e3ce2  bafdffffff           mov edx, 0xfffffffd
// 008e3ce7  2b5154               sub edx, dword ptr [ecx + 0x54]
// 008e3cea  8d8c2484000000       lea ecx, [esp + 0x84]
// 008e3cf1  01542440             add dword ptr [esp + 0x40], edx
// 008e3cf5  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008e3d00  e89b94f7ff           call 0x85d1a0
// 008e3d05  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008e3d08  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 008e3d0e  83782800             cmp dword ptr [eax + 0x28], 0
// 008e3d12  0f8495000000         je 0x8e3dad
// 008e3d18  8b542434             mov edx, dword ptr [esp + 0x34]
// 008e3d1c  8b442438             mov eax, dword ptr [esp + 0x38]
// 008e3d20  89442448             mov dword ptr [esp + 0x48], eax
// 008e3d24  8b442440             mov eax, dword ptr [esp + 0x40]
// 008e3d28  89542444             mov dword ptr [esp + 0x44], edx
// 008e3d2c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008e3d30  8954244c             mov dword ptr [esp + 0x4c], edx
// 008e3d34  89442450             mov dword ptr [esp + 0x50], eax
// 008e3d38  2b4158               sub eax, dword ptr [ecx + 0x58]
// 008e3d3b  837c241800           cmp dword ptr [esp + 0x18], 0
// 008e3d40  89442448             mov dword ptr [esp + 0x48], eax
// 008e3d44  7406                 je 0x8e3d4c
// 008e3d46  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 008e3d4a  7522                 jne 0x8e3d6e
// 008e3d4c  8b4774               mov eax, dword ptr [edi + 0x74]
// 008e3d4f  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008e3d52  83c034               add eax, 0x34
// 008e3d55  83f9ff               cmp ecx, -1
// 008e3d58  7505                 jne 0x8e3d5f
// 008e3d5a  8b4004               mov eax, dword ptr [eax + 4]
// 008e3d5d  eb02                 jmp 0x8e3d61
// 008e3d5f  8bc1                 mov eax, ecx
// 008e3d61  50                   push eax
// 008e3d62  8d442448             lea eax, [esp + 0x48]
// 008e3d66  50                   push eax
// 008e3d67  8bce                 mov ecx, esi
// 008e3d69  e8b270f2ff           call 0x80ae20
// 008e3d6e  8b17                 mov edx, dword ptr [edi]
// 008e3d70  8b5218               mov edx, dword ptr [edx + 0x18]
// 008e3d73  6a00                 push 0
// 008e3d75  8d442448             lea eax, [esp + 0x48]
// 008e3d79  50                   push eax
// 008e3d7a  56                   push esi
// 008e3d7b  8bcf                 mov ecx, edi
// 008e3d7d  ffd2                 call edx
// 008e3d7f  8b542448             mov edx, dword ptr [esp + 0x48]
// 008e3d83  33c9                 xor ecx, ecx
// 008e3d85  51                   push ecx
// 008e3d86  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008e3d8a  33c0                 xor eax, eax
// 008e3d8c  50                   push eax
// 008e3d8d  83ec10               sub esp, 0x10
// 008e3d90  8bc4                 mov eax, esp
// 008e3d92  8908                 mov dword ptr [eax], ecx
// 008e3d94  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008e3d98  895004               mov dword ptr [eax + 4], edx
// 008e3d9b  8b542468             mov edx, dword ptr [esp + 0x68]
// 008e3d9f  894808               mov dword ptr [eax + 8], ecx
// 008e3da2  56                   push esi
// 008e3da3  8bcf                 mov ecx, edi
// 008e3da5  89500c               mov dword ptr [eax + 0xc], edx
// 008e3da8  e8f3deffff           call 0x8e1ca0
// 008e3dad  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008e3db4  64890d00000000       mov dword ptr fs:[0], ecx
// 008e3dbb  59                   pop ecx
// 008e3dbc  5f                   pop edi
// 008e3dbd  5e                   pop esi
// 008e3dbe  5d                   pop ebp
// 008e3dbf  5b                   pop ebx
// 008e3dc0  81c48c000000         add esp, 0x8c
// 008e3dc6  c20400               ret 4
// copied from an identical function in another client (function ?FillPropertyGrid@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp