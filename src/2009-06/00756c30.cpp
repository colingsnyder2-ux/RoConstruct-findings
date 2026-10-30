// roc 2009-06 00756c30  unit: CRobloxTreeCtrl  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00756c30
//
// 00756c30  6aff                 push -1
// 00756c32  68847b8700           push 0x877b84
// 00756c37  64a100000000         mov eax, dword ptr fs:[0]
// 00756c3d  50                   push eax
// 00756c3e  83ec10               sub esp, 0x10
// 00756c41  53                   push ebx
// 00756c42  55                   push ebp
// 00756c43  56                   push esi
// 00756c44  57                   push edi
// 00756c45  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00756c4a  33c4                 xor eax, esp
// 00756c4c  50                   push eax
// 00756c4d  8d442424             lea eax, [esp + 0x24]
// 00756c51  64a300000000         mov dword ptr fs:[0], eax
// 00756c57  8bd9                 mov ebx, ecx
// 00756c59  8b742440             mov esi, dword ptr [esp + 0x40]
// 00756c5d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00756c60  56                   push esi
// 00756c61  e852550f00           call 0x84c1b8
// 00756c66  85c0                 test eax, eax
// 00756c68  7460                 je 0x756cca
// 00756c6a  8b442434             mov eax, dword ptr [esp + 0x34]
// 00756c6e  50                   push eax
// 00756c6f  8d4c2418             lea ecx, [esp + 0x18]
// 00756c73  ff1508fd8900         call dword ptr [0x89fd08]
// 00756c79  8d4c2414             lea ecx, [esp + 0x14]
// 00756c7d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00756c85  ff1554fb8900         call dword ptr [0x89fb54]
// 00756c8b  89442418             mov dword ptr [esp + 0x18], eax
// 00756c8f  85c0                 test eax, eax
// 00756c91  742d                 je 0x756cc0
// 00756c93  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00756c97  85ff                 test edi, edi
// 00756c99  750a                 jne 0x756ca5
// 00756c9b  8d4c2414             lea ecx, [esp + 0x14]
// 00756c9f  ff1578fe8900         call dword ptr [0x89fe78]
// 00756ca5  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00756ca8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00756cab  56                   push esi
// 00756cac  6a04                 push 4
// 00756cae  680a110000           push 0x110a
// 00756cb3  51                   push ecx
// 00756cb4  ff1590ee8900         call dword ptr [0x89ee90]
// 00756cba  8be8                 mov ebp, eax
// 00756cbc  85ed                 test ebp, ebp
// 00756cbe  7526                 jne 0x756ce6
// 00756cc0  8d4c2414             lea ecx, [esp + 0x14]
// 00756cc4  ff1510fd8900         call dword ptr [0x89fd10]
// 00756cca  33c0                 xor eax, eax
// 00756ccc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00756cd0  64890d00000000       mov dword ptr fs:[0], ecx
// 00756cd7  59                   pop ecx
// 00756cd8  5f                   pop edi
// 00756cd9  5e                   pop esi
// 00756cda  5d                   pop ebp
// 00756cdb  5b                   pop ebx
// 00756cdc  83c41c               add esp, 0x1c
// 00756cdf  c21000               ret 0x10
// 00756ce2  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00756ce6  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00756ce9  55                   push ebp
// 00756cea  e8c9540f00           call 0x84c1b8
// 00756cef  85c0                 test eax, eax
// 00756cf1  741f                 je 0x756d12
// 00756cf3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00756cf7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00756cfb  8b13                 mov edx, dword ptr [ebx]
// 00756cfd  8b5218               mov edx, dword ptr [edx + 0x18]
// 00756d00  55                   push ebp
// 00756d01  50                   push eax
// 00756d02  57                   push edi
// 00756d03  51                   push ecx
// 00756d04  8bcb                 mov ecx, ebx
// 00756d06  ffd2                 call edx
// 00756d08  8bf0                 mov esi, eax
// 00756d0a  85f6                 test esi, esi
// 00756d0c  0f85ab010000         jne 0x756ebd
// 00756d12  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00756d15  55                   push ebp
// 00756d16  8d442444             lea eax, [esp + 0x44]
// 00756d1a  50                   push eax
// 00756d1b  e89e540f00           call 0x84c1be
// 00756d20  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00756d25  85ff                 test edi, edi
// 00756d27  750a                 jne 0x756d33
// 00756d29  8d4c2440             lea ecx, [esp + 0x40]
// 00756d2d  ff1578fe8900         call dword ptr [0x89fe78]
// 00756d33  6a00                 push 0
// 00756d35  8d4c2418             lea ecx, [esp + 0x18]
// 00756d39  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00756d3f  50                   push eax
// 00756d40  8d4c2448             lea ecx, [esp + 0x48]
// 00756d44  ff15bcfe8900         call dword ptr [0x89febc]
// 00756d4a  8bf8                 mov edi, eax
// 00756d4c  83ffff               cmp edi, -1
// 00756d4f  0f8435010000         je 0x756e8a
// 00756d55  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00756d5a  0f841c010000         je 0x756e7c
// 00756d60  85ff                 test edi, edi
// 00756d62  7467                 je 0x756dcb
// 00756d64  8d77ff               lea esi, [edi - 1]
// 00756d67  56                   push esi
// 00756d68  8d4c2444             lea ecx, [esp + 0x44]
// 00756d6c  ff15e0f98900         call dword ptr [0x89f9e0]
// 00756d72  0fbec8               movsx ecx, al
// 00756d75  51                   push ecx
// 00756d76  ff15dce68900         call dword ptr [0x89e6dc]
// 00756d7c  83c404               add esp, 4
// 00756d7f  85c0                 test eax, eax
// 00756d81  750f                 jne 0x756d92
// 00756d83  56                   push esi
// 00756d84  8d4c2444             lea ecx, [esp + 0x44]
// 00756d88  ff15e0f98900         call dword ptr [0x89f9e0]
// 00756d8e  3c5f                 cmp al, 0x5f
// 00756d90  7539                 jne 0x756dcb
// 00756d92  8d4c2440             lea ecx, [esp + 0x40]
// 00756d96  ff1554fb8900         call dword ptr [0x89fb54]
// 00756d9c  2bc7                 sub eax, edi
// 00756d9e  2b442418             sub eax, dword ptr [esp + 0x18]
// 00756da2  8d54241c             lea edx, [esp + 0x1c]
// 00756da6  50                   push eax
// 00756da7  52                   push edx
// 00756da8  8d4c2448             lea ecx, [esp + 0x48]
// 00756dac  ff1518fe8900         call dword ptr [0x89fe18]
// 00756db2  50                   push eax
// 00756db3  8d4c2444             lea ecx, [esp + 0x44]
// 00756db7  c644243002           mov byte ptr [esp + 0x30], 2
// 00756dbc  ff1508fa8900         call dword ptr [0x89fa08]
// 00756dc2  8d4c241c             lea ecx, [esp + 0x1c]
// 00756dc6  e982000000           jmp 0x756e4d
// 00756dcb  8b442418             mov eax, dword ptr [esp + 0x18]
// 00756dcf  8d4c2440             lea ecx, [esp + 0x40]
// 00756dd3  8d3407               lea esi, [edi + eax]
// 00756dd6  ff1554fb8900         call dword ptr [0x89fb54]
// 00756ddc  3bc6                 cmp eax, esi
// 00756dde  0f8e98000000         jle 0x756e7c
// 00756de4  56                   push esi
// 00756de5  8d4c2444             lea ecx, [esp + 0x44]
// 00756de9  ff15e0f98900         call dword ptr [0x89f9e0]
// 00756def  0fbec8               movsx ecx, al
// 00756df2  51                   push ecx
// 00756df3  ff15dce68900         call dword ptr [0x89e6dc]
// 00756df9  83c404               add esp, 4
// 00756dfc  85c0                 test eax, eax
// 00756dfe  750f                 jne 0x756e0f
// 00756e00  56                   push esi
// 00756e01  8d4c2444             lea ecx, [esp + 0x44]
// 00756e05  ff15e0f98900         call dword ptr [0x89f9e0]
// 00756e0b  3c5f                 cmp al, 0x5f
// 00756e0d  756d                 jne 0x756e7c
// 00756e0f  8d4c2440             lea ecx, [esp + 0x40]
// 00756e13  ff1554fb8900         call dword ptr [0x89fb54]
// 00756e19  8bf0                 mov esi, eax
// 00756e1b  8d4c2414             lea ecx, [esp + 0x14]
// 00756e1f  2bf7                 sub esi, edi
// 00756e21  ff1554fb8900         call dword ptr [0x89fb54]
// 00756e27  2bf0                 sub esi, eax
// 00756e29  56                   push esi
// 00756e2a  8d542424             lea edx, [esp + 0x24]
// 00756e2e  52                   push edx
// 00756e2f  8d4c2448             lea ecx, [esp + 0x48]
// 00756e33  ff1518fe8900         call dword ptr [0x89fe18]
// 00756e39  50                   push eax
// 00756e3a  8d4c2444             lea ecx, [esp + 0x44]
// 00756e3e  c644243003           mov byte ptr [esp + 0x30], 3
// 00756e43  ff1508fa8900         call dword ptr [0x89fa08]
// 00756e49  8d4c2420             lea ecx, [esp + 0x20]
// 00756e4d  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00756e52  ff1510fd8900         call dword ptr [0x89fd10]
// 00756e58  6a00                 push 0
// 00756e5a  8d4c2418             lea ecx, [esp + 0x18]
// 00756e5e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00756e64  50                   push eax
// 00756e65  8d4c2448             lea ecx, [esp + 0x48]
// 00756e69  ff15bcfe8900         call dword ptr [0x89febc]
// 00756e6f  8bf8                 mov edi, eax
// 00756e71  83ffff               cmp edi, -1
// 00756e74  0f85dbfeffff         jne 0x756d55
// 00756e7a  eb0e                 jmp 0x756e8a
// 00756e7c  8b03                 mov eax, dword ptr [ebx]
// 00756e7e  8b5068               mov edx, dword ptr [eax + 0x68]
// 00756e81  55                   push ebp
// 00756e82  8bcb                 mov ecx, ebx
// 00756e84  ffd2                 call edx
// 00756e86  85c0                 test eax, eax
// 00756e88  7544                 jne 0x756ece
// 00756e8a  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00756e8d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00756e90  55                   push ebp
// 00756e91  6a01                 push 1
// 00756e93  680a110000           push 0x110a
// 00756e98  50                   push eax
// 00756e99  ff1590ee8900         call dword ptr [0x89ee90]
// 00756e9f  8d4c2440             lea ecx, [esp + 0x40]
// 00756ea3  8be8                 mov ebp, eax
// 00756ea5  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00756eaa  ff1510fd8900         call dword ptr [0x89fd10]
// 00756eb0  85ed                 test ebp, ebp
// 00756eb2  0f852afeffff         jne 0x756ce2
// 00756eb8  e903feffff           jmp 0x756cc0
// 00756ebd  8d4c2414             lea ecx, [esp + 0x14]
// 00756ec1  ff1510fd8900         call dword ptr [0x89fd10]
// 00756ec7  8bc6                 mov eax, esi
// 00756ec9  e9fefdffff           jmp 0x756ccc
// 00756ece  8d4c2440             lea ecx, [esp + 0x40]
// 00756ed2  ff1510fd8900         call dword ptr [0x89fd10]
// 00756ed8  8d4c2414             lea ecx, [esp + 0x14]
// 00756edc  ff1510fd8900         call dword ptr [0x89fd10]
// 00756ee2  8bc5                 mov eax, ebp
// 00756ee4  e9e3fdffff           jmp 0x756ccc
// copied from an identical function in another client (function ?FindItemInBranch@CXTTreeBase@@UAEPAU_TREEITEM@@PBDHHPAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp