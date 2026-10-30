// roc 2010-06 007e5c70  unit: CRobloxTreeCtrl  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e5c70
//
// 007e5c70  6aff                 push -1
// 007e5c72  68041c9b00           push 0x9b1c04
// 007e5c77  64a100000000         mov eax, dword ptr fs:[0]
// 007e5c7d  50                   push eax
// 007e5c7e  83ec10               sub esp, 0x10
// 007e5c81  53                   push ebx
// 007e5c82  55                   push ebp
// 007e5c83  56                   push esi
// 007e5c84  57                   push edi
// 007e5c85  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e5c8a  33c4                 xor eax, esp
// 007e5c8c  50                   push eax
// 007e5c8d  8d442424             lea eax, [esp + 0x24]
// 007e5c91  64a300000000         mov dword ptr fs:[0], eax
// 007e5c97  8bd9                 mov ebx, ecx
// 007e5c99  8b742440             mov esi, dword ptr [esp + 0x40]
// 007e5c9d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 007e5ca0  56                   push esi
// 007e5ca1  e8ba731900           call 0x97d060
// 007e5ca6  85c0                 test eax, eax
// 007e5ca8  7460                 je 0x7e5d0a
// 007e5caa  8b442434             mov eax, dword ptr [esp + 0x34]
// 007e5cae  50                   push eax
// 007e5caf  8d4c2418             lea ecx, [esp + 0x18]
// 007e5cb3  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 007e5cb9  8d4c2414             lea ecx, [esp + 0x14]
// 007e5cbd  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 007e5cc5  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e5ccb  89442418             mov dword ptr [esp + 0x18], eax
// 007e5ccf  85c0                 test eax, eax
// 007e5cd1  742d                 je 0x7e5d00
// 007e5cd3  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007e5cd7  85ff                 test edi, edi
// 007e5cd9  750a                 jne 0x7e5ce5
// 007e5cdb  8d4c2414             lea ecx, [esp + 0x14]
// 007e5cdf  ff1540c89e00         call dword ptr [0x9ec840]
// 007e5ce5  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007e5ce8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e5ceb  56                   push esi
// 007e5cec  6a04                 push 4
// 007e5cee  680a110000           push 0x110a
// 007e5cf3  51                   push ecx
// 007e5cf4  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e5cfa  8be8                 mov ebp, eax
// 007e5cfc  85ed                 test ebp, ebp
// 007e5cfe  7526                 jne 0x7e5d26
// 007e5d00  8d4c2414             lea ecx, [esp + 0x14]
// 007e5d04  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e5d0a  33c0                 xor eax, eax
// 007e5d0c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007e5d10  64890d00000000       mov dword ptr fs:[0], ecx
// 007e5d17  59                   pop ecx
// 007e5d18  5f                   pop edi
// 007e5d19  5e                   pop esi
// 007e5d1a  5d                   pop ebp
// 007e5d1b  5b                   pop ebx
// 007e5d1c  83c41c               add esp, 0x1c
// 007e5d1f  c21000               ret 0x10
// 007e5d22  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007e5d26  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 007e5d29  55                   push ebp
// 007e5d2a  e831731900           call 0x97d060
// 007e5d2f  85c0                 test eax, eax
// 007e5d31  741f                 je 0x7e5d52
// 007e5d33  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007e5d37  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007e5d3b  8b13                 mov edx, dword ptr [ebx]
// 007e5d3d  8b5218               mov edx, dword ptr [edx + 0x18]
// 007e5d40  55                   push ebp
// 007e5d41  50                   push eax
// 007e5d42  57                   push edi
// 007e5d43  51                   push ecx
// 007e5d44  8bcb                 mov ecx, ebx
// 007e5d46  ffd2                 call edx
// 007e5d48  8bf0                 mov esi, eax
// 007e5d4a  85f6                 test esi, esi
// 007e5d4c  0f85ab010000         jne 0x7e5efd
// 007e5d52  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 007e5d55  55                   push ebp
// 007e5d56  8d442444             lea eax, [esp + 0x44]
// 007e5d5a  50                   push eax
// 007e5d5b  e806731900           call 0x97d066
// 007e5d60  c644242c01           mov byte ptr [esp + 0x2c], 1
// 007e5d65  85ff                 test edi, edi
// 007e5d67  750a                 jne 0x7e5d73
// 007e5d69  8d4c2440             lea ecx, [esp + 0x40]
// 007e5d6d  ff1540c89e00         call dword ptr [0x9ec840]
// 007e5d73  6a00                 push 0
// 007e5d75  8d4c2418             lea ecx, [esp + 0x18]
// 007e5d79  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007e5d7f  50                   push eax
// 007e5d80  8d4c2448             lea ecx, [esp + 0x48]
// 007e5d84  ff15fcc79e00         call dword ptr [0x9ec7fc]
// 007e5d8a  8bf8                 mov edi, eax
// 007e5d8c  83ffff               cmp edi, -1
// 007e5d8f  0f8435010000         je 0x7e5eca
// 007e5d95  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 007e5d9a  0f841c010000         je 0x7e5ebc
// 007e5da0  85ff                 test edi, edi
// 007e5da2  7467                 je 0x7e5e0b
// 007e5da4  8d77ff               lea esi, [edi - 1]
// 007e5da7  56                   push esi
// 007e5da8  8d4c2444             lea ecx, [esp + 0x44]
// 007e5dac  ff1558c59e00         call dword ptr [0x9ec558]
// 007e5db2  0fbec8               movsx ecx, al
// 007e5db5  51                   push ecx
// 007e5db6  ff1558a99e00         call dword ptr [0x9ea958]
// 007e5dbc  83c404               add esp, 4
// 007e5dbf  85c0                 test eax, eax
// 007e5dc1  750f                 jne 0x7e5dd2
// 007e5dc3  56                   push esi
// 007e5dc4  8d4c2444             lea ecx, [esp + 0x44]
// 007e5dc8  ff1558c59e00         call dword ptr [0x9ec558]
// 007e5dce  3c5f                 cmp al, 0x5f
// 007e5dd0  7539                 jne 0x7e5e0b
// 007e5dd2  8d4c2440             lea ecx, [esp + 0x40]
// 007e5dd6  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e5ddc  2bc7                 sub eax, edi
// 007e5dde  2b442418             sub eax, dword ptr [esp + 0x18]
// 007e5de2  8d54241c             lea edx, [esp + 0x1c]
// 007e5de6  50                   push eax
// 007e5de7  52                   push edx
// 007e5de8  8d4c2448             lea ecx, [esp + 0x48]
// 007e5dec  ff15a0c89e00         call dword ptr [0x9ec8a0]
// 007e5df2  50                   push eax
// 007e5df3  8d4c2444             lea ecx, [esp + 0x44]
// 007e5df7  c644243002           mov byte ptr [esp + 0x30], 2
// 007e5dfc  ff1580c59e00         call dword ptr [0x9ec580]
// 007e5e02  8d4c241c             lea ecx, [esp + 0x1c]
// 007e5e06  e982000000           jmp 0x7e5e8d
// 007e5e0b  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e5e0f  8d4c2440             lea ecx, [esp + 0x40]
// 007e5e13  8d3407               lea esi, [edi + eax]
// 007e5e16  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e5e1c  3bc6                 cmp eax, esi
// 007e5e1e  0f8e98000000         jle 0x7e5ebc
// 007e5e24  56                   push esi
// 007e5e25  8d4c2444             lea ecx, [esp + 0x44]
// 007e5e29  ff1558c59e00         call dword ptr [0x9ec558]
// 007e5e2f  0fbec8               movsx ecx, al
// 007e5e32  51                   push ecx
// 007e5e33  ff1558a99e00         call dword ptr [0x9ea958]
// 007e5e39  83c404               add esp, 4
// 007e5e3c  85c0                 test eax, eax
// 007e5e3e  750f                 jne 0x7e5e4f
// 007e5e40  56                   push esi
// 007e5e41  8d4c2444             lea ecx, [esp + 0x44]
// 007e5e45  ff1558c59e00         call dword ptr [0x9ec558]
// 007e5e4b  3c5f                 cmp al, 0x5f
// 007e5e4d  756d                 jne 0x7e5ebc
// 007e5e4f  8d4c2440             lea ecx, [esp + 0x40]
// 007e5e53  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e5e59  8bf0                 mov esi, eax
// 007e5e5b  8d4c2414             lea ecx, [esp + 0x14]
// 007e5e5f  2bf7                 sub esi, edi
// 007e5e61  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e5e67  2bf0                 sub esi, eax
// 007e5e69  56                   push esi
// 007e5e6a  8d542424             lea edx, [esp + 0x24]
// 007e5e6e  52                   push edx
// 007e5e6f  8d4c2448             lea ecx, [esp + 0x48]
// 007e5e73  ff15a0c89e00         call dword ptr [0x9ec8a0]
// 007e5e79  50                   push eax
// 007e5e7a  8d4c2444             lea ecx, [esp + 0x44]
// 007e5e7e  c644243003           mov byte ptr [esp + 0x30], 3
// 007e5e83  ff1580c59e00         call dword ptr [0x9ec580]
// 007e5e89  8d4c2420             lea ecx, [esp + 0x20]
// 007e5e8d  c644242c01           mov byte ptr [esp + 0x2c], 1
// 007e5e92  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e5e98  6a00                 push 0
// 007e5e9a  8d4c2418             lea ecx, [esp + 0x18]
// 007e5e9e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007e5ea4  50                   push eax
// 007e5ea5  8d4c2448             lea ecx, [esp + 0x48]
// 007e5ea9  ff15fcc79e00         call dword ptr [0x9ec7fc]
// 007e5eaf  8bf8                 mov edi, eax
// 007e5eb1  83ffff               cmp edi, -1
// 007e5eb4  0f85dbfeffff         jne 0x7e5d95
// 007e5eba  eb0e                 jmp 0x7e5eca
// 007e5ebc  8b03                 mov eax, dword ptr [ebx]
// 007e5ebe  8b5068               mov edx, dword ptr [eax + 0x68]
// 007e5ec1  55                   push ebp
// 007e5ec2  8bcb                 mov ecx, ebx
// 007e5ec4  ffd2                 call edx
// 007e5ec6  85c0                 test eax, eax
// 007e5ec8  7544                 jne 0x7e5f0e
// 007e5eca  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007e5ecd  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e5ed0  55                   push ebp
// 007e5ed1  6a01                 push 1
// 007e5ed3  680a110000           push 0x110a
// 007e5ed8  50                   push eax
// 007e5ed9  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e5edf  8d4c2440             lea ecx, [esp + 0x40]
// 007e5ee3  8be8                 mov ebp, eax
// 007e5ee5  c644242c00           mov byte ptr [esp + 0x2c], 0
// 007e5eea  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e5ef0  85ed                 test ebp, ebp
// 007e5ef2  0f852afeffff         jne 0x7e5d22
// 007e5ef8  e903feffff           jmp 0x7e5d00
// 007e5efd  8d4c2414             lea ecx, [esp + 0x14]
// 007e5f01  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e5f07  8bc6                 mov eax, esi
// 007e5f09  e9fefdffff           jmp 0x7e5d0c
// 007e5f0e  8d4c2440             lea ecx, [esp + 0x40]
// 007e5f12  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e5f18  8d4c2414             lea ecx, [esp + 0x14]
// 007e5f1c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e5f22  8bc5                 mov eax, ebp
// 007e5f24  e9e3fdffff           jmp 0x7e5d0c
// copied from an identical function in another client (function ?FindItemInBranch@CXTTreeBase@@UAEPAU_TREEITEM@@PBDHHPAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp