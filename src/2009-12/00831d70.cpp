// roc 2009-12 00831d70  unit: CRobloxTreeCtrl  size: 790 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00831d70
//
// 00831d70  6aff                 push -1
// 00831d72  681dbf9500           push 0x95bf1d
// 00831d77  64a100000000         mov eax, dword ptr fs:[0]
// 00831d7d  50                   push eax
// 00831d7e  83ec18               sub esp, 0x18
// 00831d81  53                   push ebx
// 00831d82  55                   push ebp
// 00831d83  56                   push esi
// 00831d84  57                   push edi
// 00831d85  a10052b600           mov eax, dword ptr [0xb65200]
// 00831d8a  33c4                 xor eax, esp
// 00831d8c  50                   push eax
// 00831d8d  8d44242c             lea eax, [esp + 0x2c]
// 00831d91  64a300000000         mov dword ptr fs:[0], eax
// 00831d97  8bd9                 mov ebx, ecx
// 00831d99  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00831d9d  50                   push eax
// 00831d9e  8d4c241c             lea ecx, [esp + 0x1c]
// 00831da2  ff15b8de9800         call dword ptr [0x98deb8]
// 00831da8  8d4c2418             lea ecx, [esp + 0x18]
// 00831dac  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00831db4  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00831dba  8944241c             mov dword ptr [esp + 0x1c], eax
// 00831dbe  85c0                 test eax, eax
// 00831dc0  0f8484000000         je 0x831e4a
// 00831dc6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00831dca  85c0                 test eax, eax
// 00831dcc  7408                 je 0x831dd6
// 00831dce  8bf0                 mov esi, eax
// 00831dd0  8974244c             mov dword ptr [esp + 0x4c], esi
// 00831dd4  eb1c                 jmp 0x831df2
// 00831dd6  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00831dd9  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00831ddc  6a00                 push 0
// 00831dde  6a09                 push 9
// 00831de0  680a110000           push 0x110a
// 00831de5  51                   push ecx
// 00831de6  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00831dec  8944244c             mov dword ptr [esp + 0x4c], eax
// 00831df0  8bf0                 mov esi, eax
// 00831df2  85f6                 test esi, esi
// 00831df4  751a                 jne 0x831e10
// 00831df6  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00831df9  8b5020               mov edx, dword ptr [eax + 0x20]
// 00831dfc  56                   push esi
// 00831dfd  56                   push esi
// 00831dfe  680a110000           push 0x110a
// 00831e03  52                   push edx
// 00831e04  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00831e0a  8944244c             mov dword ptr [esp + 0x4c], eax
// 00831e0e  8bf0                 mov esi, eax
// 00831e10  8d442418             lea eax, [esp + 0x18]
// 00831e14  50                   push eax
// 00831e15  8d4c2418             lea ecx, [esp + 0x18]
// 00831e19  8bee                 mov ebp, esi
// 00831e1b  ff1594de9800         call dword ptr [0x98de94]
// 00831e21  837c244000           cmp dword ptr [esp + 0x40], 0
// 00831e26  c644243401           mov byte ptr [esp + 0x34], 1
// 00831e2b  750a                 jne 0x831e37
// 00831e2d  8d4c2414             lea ecx, [esp + 0x14]
// 00831e31  ff1544d89800         call dword ptr [0x98d844]
// 00831e37  b801000000           mov eax, 1
// 00831e3c  85f6                 test esi, esi
// 00831e3e  7538                 jne 0x831e78
// 00831e40  8d4c2414             lea ecx, [esp + 0x14]
// 00831e44  ff15c0de9800         call dword ptr [0x98dec0]
// 00831e4a  8d4c2418             lea ecx, [esp + 0x18]
// 00831e4e  ff15c0de9800         call dword ptr [0x98dec0]
// 00831e54  33c0                 xor eax, eax
// 00831e56  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00831e5a  64890d00000000       mov dword ptr fs:[0], ecx
// 00831e61  59                   pop ecx
// 00831e62  5f                   pop edi
// 00831e63  5e                   pop esi
// 00831e64  5d                   pop ebp
// 00831e65  5b                   pop ebx
// 00831e66  83c424               add esp, 0x24
// 00831e69  c21400               ret 0x14
// 00831e6c  8d642400             lea esp, [esp]
// 00831e70  8b442420             mov eax, dword ptr [esp + 0x20]
// 00831e74  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00831e78  3bee                 cmp ebp, esi
// 00831e7a  7504                 jne 0x831e80
// 00831e7c  85c0                 test eax, eax
// 00831e7e  74c0                 je 0x831e40
// 00831e80  55                   push ebp
// 00831e81  8d4c2440             lea ecx, [esp + 0x40]
// 00831e85  51                   push ecx
// 00831e86  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00831e89  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00831e91  e894480f00           call 0x92672a
// 00831e96  837c244000           cmp dword ptr [esp + 0x40], 0
// 00831e9b  c644243402           mov byte ptr [esp + 0x34], 2
// 00831ea0  750a                 jne 0x831eac
// 00831ea2  8d4c243c             lea ecx, [esp + 0x3c]
// 00831ea6  ff1544d89800         call dword ptr [0x98d844]
// 00831eac  6a00                 push 0
// 00831eae  8d4c2418             lea ecx, [esp + 0x18]
// 00831eb2  ff1580de9800         call dword ptr [0x98de80]
// 00831eb8  50                   push eax
// 00831eb9  8d4c2444             lea ecx, [esp + 0x44]
// 00831ebd  ff1500d89800         call dword ptr [0x98d800]
// 00831ec3  8bf8                 mov edi, eax
// 00831ec5  83ffff               cmp edi, -1
// 00831ec8  0f8435010000         je 0x832003
// 00831ece  837c244800           cmp dword ptr [esp + 0x48], 0
// 00831ed3  0f841c010000         je 0x831ff5
// 00831ed9  85ff                 test edi, edi
// 00831edb  7467                 je 0x831f44
// 00831edd  8d77ff               lea esi, [edi - 1]
// 00831ee0  56                   push esi
// 00831ee1  8d4c2440             lea ecx, [esp + 0x40]
// 00831ee5  ff1510d59800         call dword ptr [0x98d510]
// 00831eeb  0fbed0               movsx edx, al
// 00831eee  52                   push edx
// 00831eef  ff1510b79800         call dword ptr [0x98b710]
// 00831ef5  83c404               add esp, 4
// 00831ef8  85c0                 test eax, eax
// 00831efa  750f                 jne 0x831f0b
// 00831efc  56                   push esi
// 00831efd  8d4c2440             lea ecx, [esp + 0x40]
// 00831f01  ff1510d59800         call dword ptr [0x98d510]
// 00831f07  3c5f                 cmp al, 0x5f
// 00831f09  7539                 jne 0x831f44
// 00831f0b  8d4c243c             lea ecx, [esp + 0x3c]
// 00831f0f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00831f15  2bc7                 sub eax, edi
// 00831f17  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00831f1b  8d4c243c             lea ecx, [esp + 0x3c]
// 00831f1f  50                   push eax
// 00831f20  8d442428             lea eax, [esp + 0x28]
// 00831f24  50                   push eax
// 00831f25  ff15a4d89800         call dword ptr [0x98d8a4]
// 00831f2b  50                   push eax
// 00831f2c  8d4c2440             lea ecx, [esp + 0x40]
// 00831f30  c644243803           mov byte ptr [esp + 0x38], 3
// 00831f35  ff1538d59800         call dword ptr [0x98d538]
// 00831f3b  8d4c2424             lea ecx, [esp + 0x24]
// 00831f3f  e982000000           jmp 0x831fc6
// 00831f44  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00831f48  8d340f               lea esi, [edi + ecx]
// 00831f4b  8d4c243c             lea ecx, [esp + 0x3c]
// 00831f4f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00831f55  3bc6                 cmp eax, esi
// 00831f57  0f8e98000000         jle 0x831ff5
// 00831f5d  56                   push esi
// 00831f5e  8d4c2440             lea ecx, [esp + 0x40]
// 00831f62  ff1510d59800         call dword ptr [0x98d510]
// 00831f68  0fbed0               movsx edx, al
// 00831f6b  52                   push edx
// 00831f6c  ff1510b79800         call dword ptr [0x98b710]
// 00831f72  83c404               add esp, 4
// 00831f75  85c0                 test eax, eax
// 00831f77  750f                 jne 0x831f88
// 00831f79  56                   push esi
// 00831f7a  8d4c2440             lea ecx, [esp + 0x40]
// 00831f7e  ff1510d59800         call dword ptr [0x98d510]
// 00831f84  3c5f                 cmp al, 0x5f
// 00831f86  756d                 jne 0x831ff5
// 00831f88  8d4c243c             lea ecx, [esp + 0x3c]
// 00831f8c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00831f92  8bf0                 mov esi, eax
// 00831f94  8d4c2414             lea ecx, [esp + 0x14]
// 00831f98  2bf7                 sub esi, edi
// 00831f9a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00831fa0  2bf0                 sub esi, eax
// 00831fa2  56                   push esi
// 00831fa3  8d44242c             lea eax, [esp + 0x2c]
// 00831fa7  50                   push eax
// 00831fa8  8d4c2444             lea ecx, [esp + 0x44]
// 00831fac  ff15a4d89800         call dword ptr [0x98d8a4]
// 00831fb2  50                   push eax
// 00831fb3  8d4c2440             lea ecx, [esp + 0x40]
// 00831fb7  c644243804           mov byte ptr [esp + 0x38], 4
// 00831fbc  ff1538d59800         call dword ptr [0x98d538]
// 00831fc2  8d4c2428             lea ecx, [esp + 0x28]
// 00831fc6  c644243402           mov byte ptr [esp + 0x34], 2
// 00831fcb  ff15c0de9800         call dword ptr [0x98dec0]
// 00831fd1  6a00                 push 0
// 00831fd3  8d4c2418             lea ecx, [esp + 0x18]
// 00831fd7  ff1580de9800         call dword ptr [0x98de80]
// 00831fdd  50                   push eax
// 00831fde  8d4c2444             lea ecx, [esp + 0x44]
// 00831fe2  ff1500d89800         call dword ptr [0x98d800]
// 00831fe8  8bf8                 mov edi, eax
// 00831fea  83ffff               cmp edi, -1
// 00831fed  0f85dbfeffff         jne 0x831ece
// 00831ff3  eb0e                 jmp 0x832003
// 00831ff5  8b13                 mov edx, dword ptr [ebx]
// 00831ff7  8b4268               mov eax, dword ptr [edx + 0x68]
// 00831ffa  55                   push ebp
// 00831ffb  8bcb                 mov ecx, ebx
// 00831ffd  ffd0                 call eax
// 00831fff  85c0                 test eax, eax
// 00832001  755e                 jne 0x832061
// 00832003  8b742444             mov esi, dword ptr [esp + 0x44]
// 00832007  8b13                 mov edx, dword ptr [ebx]
// 00832009  55                   push ebp
// 0083200a  8bcb                 mov ecx, ebx
// 0083200c  85f6                 test esi, esi
// 0083200e  7405                 je 0x832015
// 00832010  8b4208               mov eax, dword ptr [edx + 8]
// 00832013  eb03                 jmp 0x832018
// 00832015  8b420c               mov eax, dword ptr [edx + 0xc]
// 00832018  ffd0                 call eax
// 0083201a  8be8                 mov ebp, eax
// 0083201c  85ed                 test ebp, ebp
// 0083201e  7525                 jne 0x832045
// 00832020  50                   push eax
// 00832021  85f6                 test esi, esi
// 00832023  7415                 je 0x83203a
// 00832025  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00832028  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0083202b  55                   push ebp
// 0083202c  680a110000           push 0x110a
// 00832031  51                   push ecx
// 00832032  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00832038  eb09                 jmp 0x832043
// 0083203a  8b13                 mov edx, dword ptr [ebx]
// 0083203c  8b4210               mov eax, dword ptr [edx + 0x10]
// 0083203f  8bcb                 mov ecx, ebx
// 00832041  ffd0                 call eax
// 00832043  8be8                 mov ebp, eax
// 00832045  8d4c243c             lea ecx, [esp + 0x3c]
// 00832049  c644243401           mov byte ptr [esp + 0x34], 1
// 0083204e  ff15c0de9800         call dword ptr [0x98dec0]
// 00832054  85ed                 test ebp, ebp
// 00832056  0f8514feffff         jne 0x831e70
// 0083205c  e9dffdffff           jmp 0x831e40
// 00832061  8d4c243c             lea ecx, [esp + 0x3c]
// 00832065  ff15c0de9800         call dword ptr [0x98dec0]
// 0083206b  8d4c2414             lea ecx, [esp + 0x14]
// 0083206f  ff15c0de9800         call dword ptr [0x98dec0]
// 00832075  8d4c2418             lea ecx, [esp + 0x18]
// 00832079  ff15c0de9800         call dword ptr [0x98dec0]
// 0083207f  8bc5                 mov eax, ebp
// 00832081  e9d0fdffff           jmp 0x831e56
// copied from an identical function in another client (function ?FindItem@CXTTreeBase@@UAEPAU_TREEITEM@@PBDHHHPAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp