// roc 2009-12 00831ab0  unit: CRobloxTreeCtrl  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00831ab0
//
// 00831ab0  6aff                 push -1
// 00831ab2  68d4be9500           push 0x95bed4
// 00831ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00831abd  50                   push eax
// 00831abe  83ec10               sub esp, 0x10
// 00831ac1  53                   push ebx
// 00831ac2  55                   push ebp
// 00831ac3  56                   push esi
// 00831ac4  57                   push edi
// 00831ac5  a10052b600           mov eax, dword ptr [0xb65200]
// 00831aca  33c4                 xor eax, esp
// 00831acc  50                   push eax
// 00831acd  8d442424             lea eax, [esp + 0x24]
// 00831ad1  64a300000000         mov dword ptr fs:[0], eax
// 00831ad7  8bd9                 mov ebx, ecx
// 00831ad9  8b742440             mov esi, dword ptr [esp + 0x40]
// 00831add  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00831ae0  56                   push esi
// 00831ae1  e83e4c0f00           call 0x926724
// 00831ae6  85c0                 test eax, eax
// 00831ae8  7460                 je 0x831b4a
// 00831aea  8b442434             mov eax, dword ptr [esp + 0x34]
// 00831aee  50                   push eax
// 00831aef  8d4c2418             lea ecx, [esp + 0x18]
// 00831af3  ff15b8de9800         call dword ptr [0x98deb8]
// 00831af9  8d4c2414             lea ecx, [esp + 0x14]
// 00831afd  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00831b05  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00831b0b  89442418             mov dword ptr [esp + 0x18], eax
// 00831b0f  85c0                 test eax, eax
// 00831b11  742d                 je 0x831b40
// 00831b13  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00831b17  85ff                 test edi, edi
// 00831b19  750a                 jne 0x831b25
// 00831b1b  8d4c2414             lea ecx, [esp + 0x14]
// 00831b1f  ff1544d89800         call dword ptr [0x98d844]
// 00831b25  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00831b28  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00831b2b  56                   push esi
// 00831b2c  6a04                 push 4
// 00831b2e  680a110000           push 0x110a
// 00831b33  51                   push ecx
// 00831b34  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00831b3a  8be8                 mov ebp, eax
// 00831b3c  85ed                 test ebp, ebp
// 00831b3e  7526                 jne 0x831b66
// 00831b40  8d4c2414             lea ecx, [esp + 0x14]
// 00831b44  ff15c0de9800         call dword ptr [0x98dec0]
// 00831b4a  33c0                 xor eax, eax
// 00831b4c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00831b50  64890d00000000       mov dword ptr fs:[0], ecx
// 00831b57  59                   pop ecx
// 00831b58  5f                   pop edi
// 00831b59  5e                   pop esi
// 00831b5a  5d                   pop ebp
// 00831b5b  5b                   pop ebx
// 00831b5c  83c41c               add esp, 0x1c
// 00831b5f  c21000               ret 0x10
// 00831b62  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00831b66  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00831b69  55                   push ebp
// 00831b6a  e8b54b0f00           call 0x926724
// 00831b6f  85c0                 test eax, eax
// 00831b71  741f                 je 0x831b92
// 00831b73  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00831b77  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00831b7b  8b13                 mov edx, dword ptr [ebx]
// 00831b7d  8b5218               mov edx, dword ptr [edx + 0x18]
// 00831b80  55                   push ebp
// 00831b81  50                   push eax
// 00831b82  57                   push edi
// 00831b83  51                   push ecx
// 00831b84  8bcb                 mov ecx, ebx
// 00831b86  ffd2                 call edx
// 00831b88  8bf0                 mov esi, eax
// 00831b8a  85f6                 test esi, esi
// 00831b8c  0f85ab010000         jne 0x831d3d
// 00831b92  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00831b95  55                   push ebp
// 00831b96  8d442444             lea eax, [esp + 0x44]
// 00831b9a  50                   push eax
// 00831b9b  e88a4b0f00           call 0x92672a
// 00831ba0  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00831ba5  85ff                 test edi, edi
// 00831ba7  750a                 jne 0x831bb3
// 00831ba9  8d4c2440             lea ecx, [esp + 0x40]
// 00831bad  ff1544d89800         call dword ptr [0x98d844]
// 00831bb3  6a00                 push 0
// 00831bb5  8d4c2418             lea ecx, [esp + 0x18]
// 00831bb9  ff1580de9800         call dword ptr [0x98de80]
// 00831bbf  50                   push eax
// 00831bc0  8d4c2448             lea ecx, [esp + 0x48]
// 00831bc4  ff1500d89800         call dword ptr [0x98d800]
// 00831bca  8bf8                 mov edi, eax
// 00831bcc  83ffff               cmp edi, -1
// 00831bcf  0f8435010000         je 0x831d0a
// 00831bd5  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00831bda  0f841c010000         je 0x831cfc
// 00831be0  85ff                 test edi, edi
// 00831be2  7467                 je 0x831c4b
// 00831be4  8d77ff               lea esi, [edi - 1]
// 00831be7  56                   push esi
// 00831be8  8d4c2444             lea ecx, [esp + 0x44]
// 00831bec  ff1510d59800         call dword ptr [0x98d510]
// 00831bf2  0fbec8               movsx ecx, al
// 00831bf5  51                   push ecx
// 00831bf6  ff1510b79800         call dword ptr [0x98b710]
// 00831bfc  83c404               add esp, 4
// 00831bff  85c0                 test eax, eax
// 00831c01  750f                 jne 0x831c12
// 00831c03  56                   push esi
// 00831c04  8d4c2444             lea ecx, [esp + 0x44]
// 00831c08  ff1510d59800         call dword ptr [0x98d510]
// 00831c0e  3c5f                 cmp al, 0x5f
// 00831c10  7539                 jne 0x831c4b
// 00831c12  8d4c2440             lea ecx, [esp + 0x40]
// 00831c16  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00831c1c  2bc7                 sub eax, edi
// 00831c1e  2b442418             sub eax, dword ptr [esp + 0x18]
// 00831c22  8d54241c             lea edx, [esp + 0x1c]
// 00831c26  50                   push eax
// 00831c27  52                   push edx
// 00831c28  8d4c2448             lea ecx, [esp + 0x48]
// 00831c2c  ff15a4d89800         call dword ptr [0x98d8a4]
// 00831c32  50                   push eax
// 00831c33  8d4c2444             lea ecx, [esp + 0x44]
// 00831c37  c644243002           mov byte ptr [esp + 0x30], 2
// 00831c3c  ff1538d59800         call dword ptr [0x98d538]
// 00831c42  8d4c241c             lea ecx, [esp + 0x1c]
// 00831c46  e982000000           jmp 0x831ccd
// 00831c4b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00831c4f  8d4c2440             lea ecx, [esp + 0x40]
// 00831c53  8d3407               lea esi, [edi + eax]
// 00831c56  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00831c5c  3bc6                 cmp eax, esi
// 00831c5e  0f8e98000000         jle 0x831cfc
// 00831c64  56                   push esi
// 00831c65  8d4c2444             lea ecx, [esp + 0x44]
// 00831c69  ff1510d59800         call dword ptr [0x98d510]
// 00831c6f  0fbec8               movsx ecx, al
// 00831c72  51                   push ecx
// 00831c73  ff1510b79800         call dword ptr [0x98b710]
// 00831c79  83c404               add esp, 4
// 00831c7c  85c0                 test eax, eax
// 00831c7e  750f                 jne 0x831c8f
// 00831c80  56                   push esi
// 00831c81  8d4c2444             lea ecx, [esp + 0x44]
// 00831c85  ff1510d59800         call dword ptr [0x98d510]
// 00831c8b  3c5f                 cmp al, 0x5f
// 00831c8d  756d                 jne 0x831cfc
// 00831c8f  8d4c2440             lea ecx, [esp + 0x40]
// 00831c93  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00831c99  8bf0                 mov esi, eax
// 00831c9b  8d4c2414             lea ecx, [esp + 0x14]
// 00831c9f  2bf7                 sub esi, edi
// 00831ca1  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00831ca7  2bf0                 sub esi, eax
// 00831ca9  56                   push esi
// 00831caa  8d542424             lea edx, [esp + 0x24]
// 00831cae  52                   push edx
// 00831caf  8d4c2448             lea ecx, [esp + 0x48]
// 00831cb3  ff15a4d89800         call dword ptr [0x98d8a4]
// 00831cb9  50                   push eax
// 00831cba  8d4c2444             lea ecx, [esp + 0x44]
// 00831cbe  c644243003           mov byte ptr [esp + 0x30], 3
// 00831cc3  ff1538d59800         call dword ptr [0x98d538]
// 00831cc9  8d4c2420             lea ecx, [esp + 0x20]
// 00831ccd  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00831cd2  ff15c0de9800         call dword ptr [0x98dec0]
// 00831cd8  6a00                 push 0
// 00831cda  8d4c2418             lea ecx, [esp + 0x18]
// 00831cde  ff1580de9800         call dword ptr [0x98de80]
// 00831ce4  50                   push eax
// 00831ce5  8d4c2448             lea ecx, [esp + 0x48]
// 00831ce9  ff1500d89800         call dword ptr [0x98d800]
// 00831cef  8bf8                 mov edi, eax
// 00831cf1  83ffff               cmp edi, -1
// 00831cf4  0f85dbfeffff         jne 0x831bd5
// 00831cfa  eb0e                 jmp 0x831d0a
// 00831cfc  8b03                 mov eax, dword ptr [ebx]
// 00831cfe  8b5068               mov edx, dword ptr [eax + 0x68]
// 00831d01  55                   push ebp
// 00831d02  8bcb                 mov ecx, ebx
// 00831d04  ffd2                 call edx
// 00831d06  85c0                 test eax, eax
// 00831d08  7544                 jne 0x831d4e
// 00831d0a  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00831d0d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00831d10  55                   push ebp
// 00831d11  6a01                 push 1
// 00831d13  680a110000           push 0x110a
// 00831d18  50                   push eax
// 00831d19  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00831d1f  8d4c2440             lea ecx, [esp + 0x40]
// 00831d23  8be8                 mov ebp, eax
// 00831d25  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00831d2a  ff15c0de9800         call dword ptr [0x98dec0]
// 00831d30  85ed                 test ebp, ebp
// 00831d32  0f852afeffff         jne 0x831b62
// 00831d38  e903feffff           jmp 0x831b40
// 00831d3d  8d4c2414             lea ecx, [esp + 0x14]
// 00831d41  ff15c0de9800         call dword ptr [0x98dec0]
// 00831d47  8bc6                 mov eax, esi
// 00831d49  e9fefdffff           jmp 0x831b4c
// 00831d4e  8d4c2440             lea ecx, [esp + 0x40]
// 00831d52  ff15c0de9800         call dword ptr [0x98dec0]
// 00831d58  8d4c2414             lea ecx, [esp + 0x14]
// 00831d5c  ff15c0de9800         call dword ptr [0x98dec0]
// 00831d62  8bc5                 mov eax, ebp
// 00831d64  e9e3fdffff           jmp 0x831b4c
// copied from an identical function in another client (function ?FindItemInBranch@CXTTreeBase@@UAEPAU_TREEITEM@@PBDHHPAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp