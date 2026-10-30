// roc 2010-06 007e5f30  unit: CRobloxTreeCtrl  size: 790 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e5f30
//
// 007e5f30  6aff                 push -1
// 007e5f32  684d1c9b00           push 0x9b1c4d
// 007e5f37  64a100000000         mov eax, dword ptr fs:[0]
// 007e5f3d  50                   push eax
// 007e5f3e  83ec18               sub esp, 0x18
// 007e5f41  53                   push ebx
// 007e5f42  55                   push ebp
// 007e5f43  56                   push esi
// 007e5f44  57                   push edi
// 007e5f45  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e5f4a  33c4                 xor eax, esp
// 007e5f4c  50                   push eax
// 007e5f4d  8d44242c             lea eax, [esp + 0x2c]
// 007e5f51  64a300000000         mov dword ptr fs:[0], eax
// 007e5f57  8bd9                 mov ebx, ecx
// 007e5f59  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007e5f5d  50                   push eax
// 007e5f5e  8d4c241c             lea ecx, [esp + 0x1c]
// 007e5f62  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 007e5f68  8d4c2418             lea ecx, [esp + 0x18]
// 007e5f6c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 007e5f74  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e5f7a  8944241c             mov dword ptr [esp + 0x1c], eax
// 007e5f7e  85c0                 test eax, eax
// 007e5f80  0f8484000000         je 0x7e600a
// 007e5f86  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007e5f8a  85c0                 test eax, eax
// 007e5f8c  7408                 je 0x7e5f96
// 007e5f8e  8bf0                 mov esi, eax
// 007e5f90  8974244c             mov dword ptr [esp + 0x4c], esi
// 007e5f94  eb1c                 jmp 0x7e5fb2
// 007e5f96  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007e5f99  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e5f9c  6a00                 push 0
// 007e5f9e  6a09                 push 9
// 007e5fa0  680a110000           push 0x110a
// 007e5fa5  51                   push ecx
// 007e5fa6  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e5fac  8944244c             mov dword ptr [esp + 0x4c], eax
// 007e5fb0  8bf0                 mov esi, eax
// 007e5fb2  85f6                 test esi, esi
// 007e5fb4  751a                 jne 0x7e5fd0
// 007e5fb6  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007e5fb9  8b5020               mov edx, dword ptr [eax + 0x20]
// 007e5fbc  56                   push esi
// 007e5fbd  56                   push esi
// 007e5fbe  680a110000           push 0x110a
// 007e5fc3  52                   push edx
// 007e5fc4  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e5fca  8944244c             mov dword ptr [esp + 0x4c], eax
// 007e5fce  8bf0                 mov esi, eax
// 007e5fd0  8d442418             lea eax, [esp + 0x18]
// 007e5fd4  50                   push eax
// 007e5fd5  8d4c2418             lea ecx, [esp + 0x18]
// 007e5fd9  8bee                 mov ebp, esi
// 007e5fdb  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007e5fe1  837c244000           cmp dword ptr [esp + 0x40], 0
// 007e5fe6  c644243401           mov byte ptr [esp + 0x34], 1
// 007e5feb  750a                 jne 0x7e5ff7
// 007e5fed  8d4c2414             lea ecx, [esp + 0x14]
// 007e5ff1  ff1540c89e00         call dword ptr [0x9ec840]
// 007e5ff7  b801000000           mov eax, 1
// 007e5ffc  85f6                 test esi, esi
// 007e5ffe  7538                 jne 0x7e6038
// 007e6000  8d4c2414             lea ecx, [esp + 0x14]
// 007e6004  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e600a  8d4c2418             lea ecx, [esp + 0x18]
// 007e600e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e6014  33c0                 xor eax, eax
// 007e6016  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007e601a  64890d00000000       mov dword ptr fs:[0], ecx
// 007e6021  59                   pop ecx
// 007e6022  5f                   pop edi
// 007e6023  5e                   pop esi
// 007e6024  5d                   pop ebp
// 007e6025  5b                   pop ebx
// 007e6026  83c424               add esp, 0x24
// 007e6029  c21400               ret 0x14
// 007e602c  8d642400             lea esp, [esp]
// 007e6030  8b442420             mov eax, dword ptr [esp + 0x20]
// 007e6034  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 007e6038  3bee                 cmp ebp, esi
// 007e603a  7504                 jne 0x7e6040
// 007e603c  85c0                 test eax, eax
// 007e603e  74c0                 je 0x7e6000
// 007e6040  55                   push ebp
// 007e6041  8d4c2440             lea ecx, [esp + 0x40]
// 007e6045  51                   push ecx
// 007e6046  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 007e6049  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007e6051  e810701900           call 0x97d066
// 007e6056  837c244000           cmp dword ptr [esp + 0x40], 0
// 007e605b  c644243402           mov byte ptr [esp + 0x34], 2
// 007e6060  750a                 jne 0x7e606c
// 007e6062  8d4c243c             lea ecx, [esp + 0x3c]
// 007e6066  ff1540c89e00         call dword ptr [0x9ec840]
// 007e606c  6a00                 push 0
// 007e606e  8d4c2418             lea ecx, [esp + 0x18]
// 007e6072  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007e6078  50                   push eax
// 007e6079  8d4c2444             lea ecx, [esp + 0x44]
// 007e607d  ff15fcc79e00         call dword ptr [0x9ec7fc]
// 007e6083  8bf8                 mov edi, eax
// 007e6085  83ffff               cmp edi, -1
// 007e6088  0f8435010000         je 0x7e61c3
// 007e608e  837c244800           cmp dword ptr [esp + 0x48], 0
// 007e6093  0f841c010000         je 0x7e61b5
// 007e6099  85ff                 test edi, edi
// 007e609b  7467                 je 0x7e6104
// 007e609d  8d77ff               lea esi, [edi - 1]
// 007e60a0  56                   push esi
// 007e60a1  8d4c2440             lea ecx, [esp + 0x40]
// 007e60a5  ff1558c59e00         call dword ptr [0x9ec558]
// 007e60ab  0fbed0               movsx edx, al
// 007e60ae  52                   push edx
// 007e60af  ff1558a99e00         call dword ptr [0x9ea958]
// 007e60b5  83c404               add esp, 4
// 007e60b8  85c0                 test eax, eax
// 007e60ba  750f                 jne 0x7e60cb
// 007e60bc  56                   push esi
// 007e60bd  8d4c2440             lea ecx, [esp + 0x40]
// 007e60c1  ff1558c59e00         call dword ptr [0x9ec558]
// 007e60c7  3c5f                 cmp al, 0x5f
// 007e60c9  7539                 jne 0x7e6104
// 007e60cb  8d4c243c             lea ecx, [esp + 0x3c]
// 007e60cf  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e60d5  2bc7                 sub eax, edi
// 007e60d7  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 007e60db  8d4c243c             lea ecx, [esp + 0x3c]
// 007e60df  50                   push eax
// 007e60e0  8d442428             lea eax, [esp + 0x28]
// 007e60e4  50                   push eax
// 007e60e5  ff15a0c89e00         call dword ptr [0x9ec8a0]
// 007e60eb  50                   push eax
// 007e60ec  8d4c2440             lea ecx, [esp + 0x40]
// 007e60f0  c644243803           mov byte ptr [esp + 0x38], 3
// 007e60f5  ff1580c59e00         call dword ptr [0x9ec580]
// 007e60fb  8d4c2424             lea ecx, [esp + 0x24]
// 007e60ff  e982000000           jmp 0x7e6186
// 007e6104  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e6108  8d340f               lea esi, [edi + ecx]
// 007e610b  8d4c243c             lea ecx, [esp + 0x3c]
// 007e610f  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e6115  3bc6                 cmp eax, esi
// 007e6117  0f8e98000000         jle 0x7e61b5
// 007e611d  56                   push esi
// 007e611e  8d4c2440             lea ecx, [esp + 0x40]
// 007e6122  ff1558c59e00         call dword ptr [0x9ec558]
// 007e6128  0fbed0               movsx edx, al
// 007e612b  52                   push edx
// 007e612c  ff1558a99e00         call dword ptr [0x9ea958]
// 007e6132  83c404               add esp, 4
// 007e6135  85c0                 test eax, eax
// 007e6137  750f                 jne 0x7e6148
// 007e6139  56                   push esi
// 007e613a  8d4c2440             lea ecx, [esp + 0x40]
// 007e613e  ff1558c59e00         call dword ptr [0x9ec558]
// 007e6144  3c5f                 cmp al, 0x5f
// 007e6146  756d                 jne 0x7e61b5
// 007e6148  8d4c243c             lea ecx, [esp + 0x3c]
// 007e614c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e6152  8bf0                 mov esi, eax
// 007e6154  8d4c2414             lea ecx, [esp + 0x14]
// 007e6158  2bf7                 sub esi, edi
// 007e615a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e6160  2bf0                 sub esi, eax
// 007e6162  56                   push esi
// 007e6163  8d44242c             lea eax, [esp + 0x2c]
// 007e6167  50                   push eax
// 007e6168  8d4c2444             lea ecx, [esp + 0x44]
// 007e616c  ff15a0c89e00         call dword ptr [0x9ec8a0]
// 007e6172  50                   push eax
// 007e6173  8d4c2440             lea ecx, [esp + 0x40]
// 007e6177  c644243804           mov byte ptr [esp + 0x38], 4
// 007e617c  ff1580c59e00         call dword ptr [0x9ec580]
// 007e6182  8d4c2428             lea ecx, [esp + 0x28]
// 007e6186  c644243402           mov byte ptr [esp + 0x34], 2
// 007e618b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e6191  6a00                 push 0
// 007e6193  8d4c2418             lea ecx, [esp + 0x18]
// 007e6197  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007e619d  50                   push eax
// 007e619e  8d4c2444             lea ecx, [esp + 0x44]
// 007e61a2  ff15fcc79e00         call dword ptr [0x9ec7fc]
// 007e61a8  8bf8                 mov edi, eax
// 007e61aa  83ffff               cmp edi, -1
// 007e61ad  0f85dbfeffff         jne 0x7e608e
// 007e61b3  eb0e                 jmp 0x7e61c3
// 007e61b5  8b13                 mov edx, dword ptr [ebx]
// 007e61b7  8b4268               mov eax, dword ptr [edx + 0x68]
// 007e61ba  55                   push ebp
// 007e61bb  8bcb                 mov ecx, ebx
// 007e61bd  ffd0                 call eax
// 007e61bf  85c0                 test eax, eax
// 007e61c1  755e                 jne 0x7e6221
// 007e61c3  8b742444             mov esi, dword ptr [esp + 0x44]
// 007e61c7  8b13                 mov edx, dword ptr [ebx]
// 007e61c9  55                   push ebp
// 007e61ca  8bcb                 mov ecx, ebx
// 007e61cc  85f6                 test esi, esi
// 007e61ce  7405                 je 0x7e61d5
// 007e61d0  8b4208               mov eax, dword ptr [edx + 8]
// 007e61d3  eb03                 jmp 0x7e61d8
// 007e61d5  8b420c               mov eax, dword ptr [edx + 0xc]
// 007e61d8  ffd0                 call eax
// 007e61da  8be8                 mov ebp, eax
// 007e61dc  85ed                 test ebp, ebp
// 007e61de  7525                 jne 0x7e6205
// 007e61e0  50                   push eax
// 007e61e1  85f6                 test esi, esi
// 007e61e3  7415                 je 0x7e61fa
// 007e61e5  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007e61e8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e61eb  55                   push ebp
// 007e61ec  680a110000           push 0x110a
// 007e61f1  51                   push ecx
// 007e61f2  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e61f8  eb09                 jmp 0x7e6203
// 007e61fa  8b13                 mov edx, dword ptr [ebx]
// 007e61fc  8b4210               mov eax, dword ptr [edx + 0x10]
// 007e61ff  8bcb                 mov ecx, ebx
// 007e6201  ffd0                 call eax
// 007e6203  8be8                 mov ebp, eax
// 007e6205  8d4c243c             lea ecx, [esp + 0x3c]
// 007e6209  c644243401           mov byte ptr [esp + 0x34], 1
// 007e620e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e6214  85ed                 test ebp, ebp
// 007e6216  0f8514feffff         jne 0x7e6030
// 007e621c  e9dffdffff           jmp 0x7e6000
// 007e6221  8d4c243c             lea ecx, [esp + 0x3c]
// 007e6225  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e622b  8d4c2414             lea ecx, [esp + 0x14]
// 007e622f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e6235  8d4c2418             lea ecx, [esp + 0x18]
// 007e6239  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e623f  8bc5                 mov eax, ebp
// 007e6241  e9d0fdffff           jmp 0x7e6016
// copied from an identical function in another client (function ?FindItem@CXTTreeBase@@UAEPAU_TREEITEM@@PBDHHHPAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp