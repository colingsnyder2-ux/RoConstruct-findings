// roc 2010-06 00894df0  unit: CXTPOffice2007Image  size: 628 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00894df0
//
// 00894df0  6aff                 push -1
// 00894df2  68ffb99b00           push 0x9bb9ff
// 00894df7  64a100000000         mov eax, dword ptr fs:[0]
// 00894dfd  50                   push eax
// 00894dfe  83ec18               sub esp, 0x18
// 00894e01  53                   push ebx
// 00894e02  55                   push ebp
// 00894e03  56                   push esi
// 00894e04  57                   push edi
// 00894e05  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00894e0a  33c4                 xor eax, esp
// 00894e0c  50                   push eax
// 00894e0d  8d44242c             lea eax, [esp + 0x2c]
// 00894e11  64a300000000         mov dword ptr fs:[0], eax
// 00894e17  8be9                 mov ebp, ecx
// 00894e19  33ff                 xor edi, edi
// 00894e1b  897c2428             mov dword ptr [esp + 0x28], edi
// 00894e1f  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00894e27  397d08               cmp dword ptr [ebp + 8], edi
// 00894e2a  7516                 jne 0x894e42
// 00894e2c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00894e30  68fe08a000           push 0xa008fe
// 00894e35  8bce                 mov ecx, esi
// 00894e37  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00894e3d  e9a2010000           jmp 0x894fe4
// 00894e42  8d4c2440             lea ecx, [esp + 0x40]
// 00894e46  ff157cc29e00         call dword ptr [0x9ec27c]
// 00894e4c  8d4c2444             lea ecx, [esp + 0x44]
// 00894e50  ff157cc29e00         call dword ptr [0x9ec27c]
// 00894e56  8b4508               mov eax, dword ptr [ebp + 8]
// 00894e59  8d4c2414             lea ecx, [esp + 0x14]
// 00894e5d  89442424             mov dword ptr [esp + 0x24], eax
// 00894e61  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00894e67  8d4c2424             lea ecx, [esp + 0x24]
// 00894e6b  51                   push ecx
// 00894e6c  8d542418             lea edx, [esp + 0x18]
// 00894e70  bb02000000           mov ebx, 2
// 00894e75  52                   push edx
// 00894e76  8bcd                 mov ecx, ebp
// 00894e78  885c243c             mov byte ptr [esp + 0x3c], bl
// 00894e7c  e86ff3ffff           call 0x8941f0
// 00894e81  85c0                 test eax, eax
// 00894e83  0f8440010000         je 0x894fc9
// 00894e89  8d4c2414             lea ecx, [esp + 0x14]
// 00894e8d  ff1544ca9e00         call dword ptr [0x9eca44]
// 00894e93  6a00                 push 0
// 00894e95  6a3b                 push 0x3b
// 00894e97  8d4c241c             lea ecx, [esp + 0x1c]
// 00894e9b  ff1578c69e00         call dword ptr [0x9ec678]
// 00894ea1  85c0                 test eax, eax
// 00894ea3  0f8407010000         je 0x894fb0
// 00894ea9  7e2e                 jle 0x894ed9
// 00894eab  50                   push eax
// 00894eac  8d44242c             lea eax, [esp + 0x2c]
// 00894eb0  50                   push eax
// 00894eb1  8d4c241c             lea ecx, [esp + 0x1c]
// 00894eb5  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 00894ebb  50                   push eax
// 00894ebc  8d4c2418             lea ecx, [esp + 0x18]
// 00894ec0  c644243803           mov byte ptr [esp + 0x38], 3
// 00894ec5  ff1580c59e00         call dword ptr [0x9ec580]
// 00894ecb  8d4c2428             lea ecx, [esp + 0x28]
// 00894ecf  885c2434             mov byte ptr [esp + 0x34], bl
// 00894ed3  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00894ed9  8d4c2414             lea ecx, [esp + 0x14]
// 00894edd  ff15eccd9e00         call dword ptr [0x9ecdec]
// 00894ee3  84c0                 test al, al
// 00894ee5  0f85c5000000         jne 0x894fb0
// 00894eeb  8d4c2414             lea ecx, [esp + 0x14]
// 00894eef  ff157cc29e00         call dword ptr [0x9ec27c]
// 00894ef5  6a00                 push 0
// 00894ef7  8d4c2418             lea ecx, [esp + 0x18]
// 00894efb  ff1558c59e00         call dword ptr [0x9ec558]
// 00894f01  3c5b                 cmp al, 0x5b
// 00894f03  754d                 jne 0x894f52
// 00894f05  85ff                 test edi, edi
// 00894f07  0f85bc000000         jne 0x894fc9
// 00894f0d  8d4c2414             lea ecx, [esp + 0x14]
// 00894f11  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00894f17  2bc3                 sub eax, ebx
// 00894f19  50                   push eax
// 00894f1a  6a01                 push 1
// 00894f1c  8d4c2428             lea ecx, [esp + 0x28]
// 00894f20  51                   push ecx
// 00894f21  8d4c2420             lea ecx, [esp + 0x20]
// 00894f25  ff153cc89e00         call dword ptr [0x9ec83c]
// 00894f2b  8d4c2440             lea ecx, [esp + 0x40]
// 00894f2f  c644243404           mov byte ptr [esp + 0x34], 4
// 00894f34  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00894f3a  50                   push eax
// 00894f3b  8d4c2424             lea ecx, [esp + 0x24]
// 00894f3f  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 00894f45  85c0                 test eax, eax
// 00894f47  7503                 jne 0x894f4c
// 00894f49  8d7801               lea edi, [eax + 1]
// 00894f4c  8d4c2420             lea ecx, [esp + 0x20]
// 00894f50  eb54                 jmp 0x894fa6
// 00894f52  85ff                 test edi, edi
// 00894f54  745a                 je 0x894fb0
// 00894f56  6a00                 push 0
// 00894f58  6a3d                 push 0x3d
// 00894f5a  8d4c241c             lea ecx, [esp + 0x1c]
// 00894f5e  ff1578c69e00         call dword ptr [0x9ec678]
// 00894f64  8bf0                 mov esi, eax
// 00894f66  85f6                 test esi, esi
// 00894f68  7e46                 jle 0x894fb0
// 00894f6a  56                   push esi
// 00894f6b  8d542420             lea edx, [esp + 0x20]
// 00894f6f  52                   push edx
// 00894f70  8d4c241c             lea ecx, [esp + 0x1c]
// 00894f74  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 00894f7a  8d4c241c             lea ecx, [esp + 0x1c]
// 00894f7e  c644243405           mov byte ptr [esp + 0x34], 5
// 00894f83  ff1584cc9e00         call dword ptr [0x9ecc84]
// 00894f89  8d4c2444             lea ecx, [esp + 0x44]
// 00894f8d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00894f93  50                   push eax
// 00894f94  8d4c2420             lea ecx, [esp + 0x20]
// 00894f98  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 00894f9e  85c0                 test eax, eax
// 00894fa0  746e                 je 0x895010
// 00894fa2  8d4c241c             lea ecx, [esp + 0x1c]
// 00894fa6  885c2434             mov byte ptr [esp + 0x34], bl
// 00894faa  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00894fb0  8d442424             lea eax, [esp + 0x24]
// 00894fb4  50                   push eax
// 00894fb5  8d4c2418             lea ecx, [esp + 0x18]
// 00894fb9  51                   push ecx
// 00894fba  8bcd                 mov ecx, ebp
// 00894fbc  e82ff2ffff           call 0x8941f0
// 00894fc1  85c0                 test eax, eax
// 00894fc3  0f85c0feffff         jne 0x894e89
// 00894fc9  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00894fcd  68fe08a000           push 0xa008fe
// 00894fd2  8bce                 mov ecx, esi
// 00894fd4  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00894fda  8d4c2414             lea ecx, [esp + 0x14]
// 00894fde  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00894fe4  8d4c2440             lea ecx, [esp + 0x40]
// 00894fe8  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00894fee  8d4c2444             lea ecx, [esp + 0x44]
// 00894ff2  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00894ff8  8bc6                 mov eax, esi
// 00894ffa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00894ffe  64890d00000000       mov dword ptr fs:[0], ecx
// 00895005  59                   pop ecx
// 00895006  5f                   pop edi
// 00895007  5e                   pop esi
// 00895008  5d                   pop ebp
// 00895009  5b                   pop ebx
// 0089500a  83c424               add esp, 0x24
// 0089500d  c20c00               ret 0xc
// 00895010  46                   inc esi
// 00895011  56                   push esi
// 00895012  8d54241c             lea edx, [esp + 0x1c]
// 00895016  52                   push edx
// 00895017  8d4c241c             lea ecx, [esp + 0x1c]
// 0089501b  ff1574c69e00         call dword ptr [0x9ec674]
// 00895021  8d4c2418             lea ecx, [esp + 0x18]
// 00895025  c644243406           mov byte ptr [esp + 0x34], 6
// 0089502a  ff1544ca9e00         call dword ptr [0x9eca44]
// 00895030  8d4c2418             lea ecx, [esp + 0x18]
// 00895034  ff1584cc9e00         call dword ptr [0x9ecc84]
// 0089503a  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0089503e  8d442418             lea eax, [esp + 0x18]
// 00895042  50                   push eax
// 00895043  8bce                 mov ecx, esi
// 00895045  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 0089504b  8d4c2418             lea ecx, [esp + 0x18]
// 0089504f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00895055  8d4c241c             lea ecx, [esp + 0x1c]
// 00895059  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0089505f  e976ffffff           jmp 0x894fda
// copied from an identical function in another client (function ?GetImageValue@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp