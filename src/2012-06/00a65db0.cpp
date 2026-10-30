// roc 2012-06 00a65db0  unit: CXTPOffice2007Image  size: 628 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a65db0
//
// 00a65db0  6aff                 push -1
// 00a65db2  684f81ae00           push 0xae814f
// 00a65db7  64a100000000         mov eax, dword ptr fs:[0]
// 00a65dbd  50                   push eax
// 00a65dbe  83ec18               sub esp, 0x18
// 00a65dc1  53                   push ebx
// 00a65dc2  55                   push ebp
// 00a65dc3  56                   push esi
// 00a65dc4  57                   push edi
// 00a65dc5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a65dca  33c4                 xor eax, esp
// 00a65dcc  50                   push eax
// 00a65dcd  8d44242c             lea eax, [esp + 0x2c]
// 00a65dd1  64a300000000         mov dword ptr fs:[0], eax
// 00a65dd7  8be9                 mov ebp, ecx
// 00a65dd9  33ff                 xor edi, edi
// 00a65ddb  897c2428             mov dword ptr [esp + 0x28], edi
// 00a65ddf  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00a65de7  397d08               cmp dword ptr [ebp + 8], edi
// 00a65dea  7516                 jne 0xa65e02
// 00a65dec  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00a65df0  68e83bb400           push 0xb43be8
// 00a65df5  8bce                 mov ecx, esi
// 00a65df7  ff15c847b200         call dword ptr [0xb247c8]
// 00a65dfd  e9a2010000           jmp 0xa65fa4
// 00a65e02  8d4c2440             lea ecx, [esp + 0x40]
// 00a65e06  ff15d441b200         call dword ptr [0xb241d4]
// 00a65e0c  8d4c2444             lea ecx, [esp + 0x44]
// 00a65e10  ff15d441b200         call dword ptr [0xb241d4]
// 00a65e16  8b4508               mov eax, dword ptr [ebp + 8]
// 00a65e19  8d4c2414             lea ecx, [esp + 0x14]
// 00a65e1d  89442424             mov dword ptr [esp + 0x24], eax
// 00a65e21  ff158447b200         call dword ptr [0xb24784]
// 00a65e27  8d4c2424             lea ecx, [esp + 0x24]
// 00a65e2b  51                   push ecx
// 00a65e2c  8d542418             lea edx, [esp + 0x18]
// 00a65e30  bb02000000           mov ebx, 2
// 00a65e35  52                   push edx
// 00a65e36  8bcd                 mov ecx, ebp
// 00a65e38  885c243c             mov byte ptr [esp + 0x3c], bl
// 00a65e3c  e86ff3ffff           call 0xa651b0
// 00a65e41  85c0                 test eax, eax
// 00a65e43  0f8440010000         je 0xa65f89
// 00a65e49  8d4c2414             lea ecx, [esp + 0x14]
// 00a65e4d  ff158c4ab200         call dword ptr [0xb24a8c]
// 00a65e53  6a00                 push 0
// 00a65e55  6a3b                 push 0x3b
// 00a65e57  8d4c241c             lea ecx, [esp + 0x1c]
// 00a65e5b  ff15f447b200         call dword ptr [0xb247f4]
// 00a65e61  85c0                 test eax, eax
// 00a65e63  0f8407010000         je 0xa65f70
// 00a65e69  7e2e                 jle 0xa65e99
// 00a65e6b  50                   push eax
// 00a65e6c  8d44242c             lea eax, [esp + 0x2c]
// 00a65e70  50                   push eax
// 00a65e71  8d4c241c             lea ecx, [esp + 0x1c]
// 00a65e75  ff152850b200         call dword ptr [0xb25028]
// 00a65e7b  50                   push eax
// 00a65e7c  8d4c2418             lea ecx, [esp + 0x18]
// 00a65e80  c644243803           mov byte ptr [esp + 0x38], 3
// 00a65e85  ff152045b200         call dword ptr [0xb24520]
// 00a65e8b  8d4c2428             lea ecx, [esp + 0x28]
// 00a65e8f  885c2434             mov byte ptr [esp + 0x34], bl
// 00a65e93  ff15d047b200         call dword ptr [0xb247d0]
// 00a65e99  8d4c2414             lea ecx, [esp + 0x14]
// 00a65e9d  ff156046b200         call dword ptr [0xb24660]
// 00a65ea3  84c0                 test al, al
// 00a65ea5  0f85c5000000         jne 0xa65f70
// 00a65eab  8d4c2414             lea ecx, [esp + 0x14]
// 00a65eaf  ff15d441b200         call dword ptr [0xb241d4]
// 00a65eb5  6a00                 push 0
// 00a65eb7  8d4c2418             lea ecx, [esp + 0x18]
// 00a65ebb  ff15e844b200         call dword ptr [0xb244e8]
// 00a65ec1  3c5b                 cmp al, 0x5b
// 00a65ec3  754d                 jne 0xa65f12
// 00a65ec5  85ff                 test edi, edi
// 00a65ec7  0f85bc000000         jne 0xa65f89
// 00a65ecd  8d4c2414             lea ecx, [esp + 0x14]
// 00a65ed1  ff155846b200         call dword ptr [0xb24658]
// 00a65ed7  2bc3                 sub eax, ebx
// 00a65ed9  50                   push eax
// 00a65eda  6a01                 push 1
// 00a65edc  8d4c2428             lea ecx, [esp + 0x28]
// 00a65ee0  51                   push ecx
// 00a65ee1  8d4c2420             lea ecx, [esp + 0x20]
// 00a65ee5  ff158449b200         call dword ptr [0xb24984]
// 00a65eeb  8d4c2440             lea ecx, [esp + 0x40]
// 00a65eef  c644243404           mov byte ptr [esp + 0x34], 4
// 00a65ef4  ff159847b200         call dword ptr [0xb24798]
// 00a65efa  50                   push eax
// 00a65efb  8d4c2424             lea ecx, [esp + 0x24]
// 00a65eff  ff159c47b200         call dword ptr [0xb2479c]
// 00a65f05  85c0                 test eax, eax
// 00a65f07  7503                 jne 0xa65f0c
// 00a65f09  8d7801               lea edi, [eax + 1]
// 00a65f0c  8d4c2420             lea ecx, [esp + 0x20]
// 00a65f10  eb54                 jmp 0xa65f66
// 00a65f12  85ff                 test edi, edi
// 00a65f14  745a                 je 0xa65f70
// 00a65f16  6a00                 push 0
// 00a65f18  6a3d                 push 0x3d
// 00a65f1a  8d4c241c             lea ecx, [esp + 0x1c]
// 00a65f1e  ff15f447b200         call dword ptr [0xb247f4]
// 00a65f24  8bf0                 mov esi, eax
// 00a65f26  85f6                 test esi, esi
// 00a65f28  7e46                 jle 0xa65f70
// 00a65f2a  56                   push esi
// 00a65f2b  8d542420             lea edx, [esp + 0x20]
// 00a65f2f  52                   push edx
// 00a65f30  8d4c241c             lea ecx, [esp + 0x1c]
// 00a65f34  ff152850b200         call dword ptr [0xb25028]
// 00a65f3a  8d4c241c             lea ecx, [esp + 0x1c]
// 00a65f3e  c644243405           mov byte ptr [esp + 0x34], 5
// 00a65f43  ff153c4db200         call dword ptr [0xb24d3c]
// 00a65f49  8d4c2444             lea ecx, [esp + 0x44]
// 00a65f4d  ff159847b200         call dword ptr [0xb24798]
// 00a65f53  50                   push eax
// 00a65f54  8d4c2420             lea ecx, [esp + 0x20]
// 00a65f58  ff159c47b200         call dword ptr [0xb2479c]
// 00a65f5e  85c0                 test eax, eax
// 00a65f60  746e                 je 0xa65fd0
// 00a65f62  8d4c241c             lea ecx, [esp + 0x1c]
// 00a65f66  885c2434             mov byte ptr [esp + 0x34], bl
// 00a65f6a  ff15d047b200         call dword ptr [0xb247d0]
// 00a65f70  8d442424             lea eax, [esp + 0x24]
// 00a65f74  50                   push eax
// 00a65f75  8d4c2418             lea ecx, [esp + 0x18]
// 00a65f79  51                   push ecx
// 00a65f7a  8bcd                 mov ecx, ebp
// 00a65f7c  e82ff2ffff           call 0xa651b0
// 00a65f81  85c0                 test eax, eax
// 00a65f83  0f85c0feffff         jne 0xa65e49
// 00a65f89  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00a65f8d  68e83bb400           push 0xb43be8
// 00a65f92  8bce                 mov ecx, esi
// 00a65f94  ff15c847b200         call dword ptr [0xb247c8]
// 00a65f9a  8d4c2414             lea ecx, [esp + 0x14]
// 00a65f9e  ff15d047b200         call dword ptr [0xb247d0]
// 00a65fa4  8d4c2440             lea ecx, [esp + 0x40]
// 00a65fa8  ff15d047b200         call dword ptr [0xb247d0]
// 00a65fae  8d4c2444             lea ecx, [esp + 0x44]
// 00a65fb2  ff15d047b200         call dword ptr [0xb247d0]
// 00a65fb8  8bc6                 mov eax, esi
// 00a65fba  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a65fbe  64890d00000000       mov dword ptr fs:[0], ecx
// 00a65fc5  59                   pop ecx
// 00a65fc6  5f                   pop edi
// 00a65fc7  5e                   pop esi
// 00a65fc8  5d                   pop ebp
// 00a65fc9  5b                   pop ebx
// 00a65fca  83c424               add esp, 0x24
// 00a65fcd  c20c00               ret 0xc
// 00a65fd0  46                   inc esi
// 00a65fd1  56                   push esi
// 00a65fd2  8d54241c             lea edx, [esp + 0x1c]
// 00a65fd6  52                   push edx
// 00a65fd7  8d4c241c             lea ecx, [esp + 0x1c]
// 00a65fdb  ff15f047b200         call dword ptr [0xb247f0]
// 00a65fe1  8d4c2418             lea ecx, [esp + 0x18]
// 00a65fe5  c644243406           mov byte ptr [esp + 0x34], 6
// 00a65fea  ff158c4ab200         call dword ptr [0xb24a8c]
// 00a65ff0  8d4c2418             lea ecx, [esp + 0x18]
// 00a65ff4  ff153c4db200         call dword ptr [0xb24d3c]
// 00a65ffa  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00a65ffe  8d442418             lea eax, [esp + 0x18]
// 00a66002  50                   push eax
// 00a66003  8bce                 mov ecx, esi
// 00a66005  ff158047b200         call dword ptr [0xb24780]
// 00a6600b  8d4c2418             lea ecx, [esp + 0x18]
// 00a6600f  ff15d047b200         call dword ptr [0xb247d0]
// 00a66015  8d4c241c             lea ecx, [esp + 0x1c]
// 00a66019  ff15d047b200         call dword ptr [0xb247d0]
// 00a6601f  e976ffffff           jmp 0xa65f9a
// copied from an identical function in another client (function ?GetImageValue@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp