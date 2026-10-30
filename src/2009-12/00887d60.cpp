// roc 2009-12 00887d60  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 770 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00887d60
//
// 00887d60  83ec20               sub esp, 0x20
// 00887d63  53                   push ebx
// 00887d64  56                   push esi
// 00887d65  57                   push edi
// 00887d66  8bf1                 mov esi, ecx
// 00887d68  e8a3eeffff           call 0x886c10
// 00887d6d  85c0                 test eax, eax
// 00887d6f  751a                 jne 0x887d8b
// 00887d71  8b442434             mov eax, dword ptr [esp + 0x34]
// 00887d75  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00887d79  50                   push eax
// 00887d7a  51                   push ecx
// 00887d7b  8bce                 mov ecx, esi
// 00887d7d  e8fe5fffff           call 0x87dd80
// 00887d82  5f                   pop edi
// 00887d83  5e                   pop esi
// 00887d84  5b                   pop ebx
// 00887d85  83c420               add esp, 0x20
// 00887d88  c20800               ret 8
// 00887d8b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00887d8f  8b4720               mov eax, dword ptr [edi + 0x20]
// 00887d92  8d54240c             lea edx, [esp + 0xc]
// 00887d96  52                   push edx
// 00887d97  50                   push eax
// 00887d98  ff1550cc9800         call dword ptr [0x98cc50]
// 00887d9e  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 00887da4  83f805               cmp eax, 5
// 00887da7  0f85ca000000         jne 0x887e77
// 00887dad  83bea404000000       cmp dword ptr [esi + 0x4a4], 0
// 00887db4  6a04                 push 4
// 00887db6  7437                 je 0x887def
// 00887db8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00887dbc  8b542414             mov edx, dword ptr [esp + 0x14]
// 00887dc0  6a10                 push 0x10
// 00887dc2  83ec10               sub esp, 0x10
// 00887dc5  8bc4                 mov eax, esp
// 00887dc7  8908                 mov dword ptr [eax], ecx
// 00887dc9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00887dcd  895004               mov dword ptr [eax + 4], edx
// 00887dd0  8b542430             mov edx, dword ptr [esp + 0x30]
// 00887dd4  894808               mov dword ptr [eax + 8], ecx
// 00887dd7  89500c               mov dword ptr [eax + 0xc], edx
// 00887dda  8b442448             mov eax, dword ptr [esp + 0x48]
// 00887dde  50                   push eax
// 00887ddf  8bce                 mov ecx, esi
// 00887de1  e87a69f7ff           call 0x7fe760
// 00887de6  5f                   pop edi
// 00887de7  5e                   pop esi
// 00887de8  5b                   pop ebx
// 00887de9  83c420               add esp, 0x20
// 00887dec  c20800               ret 8
// 00887def  8bce                 mov ecx, esi
// 00887df1  e84a58f7ff           call 0x7fd640
// 00887df6  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00887dfa  50                   push eax
// 00887dfb  8d4c2410             lea ecx, [esp + 0x10]
// 00887dff  51                   push ecx
// 00887e00  8bcf                 mov ecx, edi
// 00887e02  e8f7c7f6ff           call 0x7f45fe
// 00887e07  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00887e0b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00887e0f  6a15                 push 0x15
// 00887e11  6a0f                 push 0xf
// 00887e13  83ec10               sub esp, 0x10
// 00887e16  8bc4                 mov eax, esp
// 00887e18  8910                 mov dword ptr [eax], edx
// 00887e1a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00887e1e  894804               mov dword ptr [eax + 4], ecx
// 00887e21  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00887e25  895008               mov dword ptr [eax + 8], edx
// 00887e28  89480c               mov dword ptr [eax + 0xc], ecx
// 00887e2b  57                   push edi
// 00887e2c  8bce                 mov ecx, esi
// 00887e2e  e80d5af7ff           call 0x7fd840
// 00887e33  6aff                 push -1
// 00887e35  6aff                 push -1
// 00887e37  8d542414             lea edx, [esp + 0x14]
// 00887e3b  52                   push edx
// 00887e3c  ff1558ca9800         call dword ptr [0x98ca58]
// 00887e42  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00887e46  8b542410             mov edx, dword ptr [esp + 0x10]
// 00887e4a  6a10                 push 0x10
// 00887e4c  6a14                 push 0x14
// 00887e4e  83ec10               sub esp, 0x10
// 00887e51  8bc4                 mov eax, esp
// 00887e53  8908                 mov dword ptr [eax], ecx
// 00887e55  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00887e59  895004               mov dword ptr [eax + 4], edx
// 00887e5c  8b542430             mov edx, dword ptr [esp + 0x30]
// 00887e60  894808               mov dword ptr [eax + 8], ecx
// 00887e63  57                   push edi
// 00887e64  8bce                 mov ecx, esi
// 00887e66  89500c               mov dword ptr [eax + 0xc], edx
// 00887e69  e8d259f7ff           call 0x7fd840
// 00887e6e  5f                   pop edi
// 00887e6f  5e                   pop esi
// 00887e70  5b                   pop ebx
// 00887e71  83c420               add esp, 0x20
// 00887e74  c20800               ret 8
// 00887e77  83f804               cmp eax, 4
// 00887e7a  0f8553010000         jne 0x887fd3
// 00887e80  8b07                 mov eax, dword ptr [edi]
// 00887e82  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 00887e88  8bcf                 mov ecx, edi
// 00887e8a  ffd2                 call edx
// 00887e8c  8bce                 mov ecx, esi
// 00887e8e  85c0                 test eax, eax
// 00887e90  7414                 je 0x887ea6
// 00887e92  8b442430             mov eax, dword ptr [esp + 0x30]
// 00887e96  57                   push edi
// 00887e97  50                   push eax
// 00887e98  e8e35effff           call 0x87dd80
// 00887e9d  5f                   pop edi
// 00887e9e  5e                   pop esi
// 00887e9f  5b                   pop ebx
// 00887ea0  83c420               add esp, 0x20
// 00887ea3  c20800               ret 8
// 00887ea6  8b87f8000000         mov eax, dword ptr [edi + 0xf8]
// 00887eac  83f802               cmp eax, 2
// 00887eaf  751a                 jne 0x887ecb
// 00887eb1  6a04                 push 4
// 00887eb3  e88857f7ff           call 0x7fd640
// 00887eb8  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00887ebc  50                   push eax
// 00887ebd  8d4c2410             lea ecx, [esp + 0x10]
// 00887ec1  51                   push ecx
// 00887ec2  8bcf                 mov ecx, edi
// 00887ec4  e835c7f6ff           call 0x7f45fe
// 00887ec9  eb46                 jmp 0x887f11
// 00887ecb  83e802               sub eax, 2
// 00887ece  f7d8                 neg eax
// 00887ed0  1bc0                 sbb eax, eax
// 00887ed2  83e00b               and eax, 0xb
// 00887ed5  83c004               add eax, 4
// 00887ed8  50                   push eax
// 00887ed9  e86257f7ff           call 0x7fd640
// 00887ede  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00887ee2  50                   push eax
// 00887ee3  8d542410             lea edx, [esp + 0x10]
// 00887ee7  52                   push edx
// 00887ee8  8bcf                 mov ecx, edi
// 00887eea  e80fc7f6ff           call 0x7f45fe
// 00887eef  85ff                 test edi, edi
// 00887ef1  7504                 jne 0x887ef7
// 00887ef3  33c0                 xor eax, eax
// 00887ef5  eb03                 jmp 0x887efa
// 00887ef7  8b4704               mov eax, dword ptr [edi + 4]
// 00887efa  6a00                 push 0
// 00887efc  8d4c2410             lea ecx, [esp + 0x10]
// 00887f00  51                   push ecx
// 00887f01  6a00                 push 0
// 00887f03  6a00                 push 0
// 00887f05  50                   push eax
// 00887f06  8d8e6c040000         lea ecx, [esi + 0x46c]
// 00887f0c  e82f39feff           call 0x86b840
// 00887f11  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00887f15  8b542410             mov edx, dword ptr [esp + 0x10]
// 00887f19  8944241c             mov dword ptr [esp + 0x1c], eax
// 00887f1d  83c003               add eax, 3
// 00887f20  89442424             mov dword ptr [esp + 0x24], eax
// 00887f24  8b442418             mov eax, dword ptr [esp + 0x18]
// 00887f28  89542420             mov dword ptr [esp + 0x20], edx
// 00887f2c  89442428             mov dword ptr [esp + 0x28], eax
// 00887f30  85ff                 test edi, edi
// 00887f32  7504                 jne 0x887f38
// 00887f34  33c0                 xor eax, eax
// 00887f36  eb03                 jmp 0x887f3b
// 00887f38  8b4704               mov eax, dword ptr [edi + 4]
// 00887f3b  6a00                 push 0
// 00887f3d  8d4c2420             lea ecx, [esp + 0x20]
// 00887f41  51                   push ecx
// 00887f42  6a01                 push 1
// 00887f44  6a0a                 push 0xa
// 00887f46  81c684040000         add esi, 0x484
// 00887f4c  50                   push eax
// 00887f4d  8bce                 mov ecx, esi
// 00887f4f  e8ec38feff           call 0x86b840
// 00887f54  8b442414             mov eax, dword ptr [esp + 0x14]
// 00887f58  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00887f5c  8d50fd               lea edx, [eax - 3]
// 00887f5f  8954241c             mov dword ptr [esp + 0x1c], edx
// 00887f63  8b542418             mov edx, dword ptr [esp + 0x18]
// 00887f67  894c2420             mov dword ptr [esp + 0x20], ecx
// 00887f6b  89442424             mov dword ptr [esp + 0x24], eax
// 00887f6f  89542428             mov dword ptr [esp + 0x28], edx
// 00887f73  85ff                 test edi, edi
// 00887f75  7504                 jne 0x887f7b
// 00887f77  33c0                 xor eax, eax
// 00887f79  eb03                 jmp 0x887f7e
// 00887f7b  8b4704               mov eax, dword ptr [edi + 4]
// 00887f7e  6a00                 push 0
// 00887f80  8d4c2420             lea ecx, [esp + 0x20]
// 00887f84  51                   push ecx
// 00887f85  6a01                 push 1
// 00887f87  6a0b                 push 0xb
// 00887f89  50                   push eax
// 00887f8a  8bce                 mov ecx, esi
// 00887f8c  e8af38feff           call 0x86b840
// 00887f91  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00887f95  8b442418             mov eax, dword ptr [esp + 0x18]
// 00887f99  8954241c             mov dword ptr [esp + 0x1c], edx
// 00887f9d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00887fa1  8d48fd               lea ecx, [eax - 3]
// 00887fa4  894c2420             mov dword ptr [esp + 0x20], ecx
// 00887fa8  89542424             mov dword ptr [esp + 0x24], edx
// 00887fac  89442428             mov dword ptr [esp + 0x28], eax
// 00887fb0  85ff                 test edi, edi
// 00887fb2  7403                 je 0x887fb7
// 00887fb4  8b7f04               mov edi, dword ptr [edi + 4]
// 00887fb7  6a00                 push 0
// 00887fb9  8d442420             lea eax, [esp + 0x20]
// 00887fbd  50                   push eax
// 00887fbe  6a01                 push 1
// 00887fc0  6a0c                 push 0xc
// 00887fc2  57                   push edi
// 00887fc3  8bce                 mov ecx, esi
// 00887fc5  e87638feff           call 0x86b840
// 00887fca  5f                   pop edi
// 00887fcb  5e                   pop esi
// 00887fcc  5b                   pop ebx
// 00887fcd  83c420               add esp, 0x20
// 00887fd0  c20800               ret 8
// 00887fd3  85c0                 test eax, eax
// 00887fd5  7520                 jne 0x887ff7
// 00887fd7  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00887fda  51                   push ecx
// 00887fdb  ff15bccb9800         call dword ptr [0x98cbbc]
// 00887fe1  50                   push eax
// 00887fe2  e843bbf6ff           call 0x7f3b2a
// 00887fe7  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00887feb  50                   push eax
// 00887fec  57                   push edi
// 00887fed  53                   push ebx
// 00887fee  8bce                 mov ecx, esi
// 00887ff0  e8bbf2ffff           call 0x8872b0
// 00887ff5  eb1a                 jmp 0x888011
// 00887ff7  6a0f                 push 0xf
// 00887ff9  8bce                 mov ecx, esi
// 00887ffb  e84056f7ff           call 0x7fd640
// 00888000  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00888004  50                   push eax
// 00888005  8d542410             lea edx, [esp + 0x10]
// 00888009  52                   push edx
// 0088800a  8bcb                 mov ecx, ebx
// 0088800c  e8edc5f6ff           call 0x7f45fe
// 00888011  85db                 test ebx, ebx
// 00888013  7504                 jne 0x888019
// 00888015  33c0                 xor eax, eax
// 00888017  eb03                 jmp 0x88801c
// 00888019  8b4304               mov eax, dword ptr [ebx + 4]
// 0088801c  6a00                 push 0
// 0088801e  8d4c2410             lea ecx, [esp + 0x10]
// 00888022  51                   push ecx
// 00888023  6a00                 push 0
// 00888025  6a03                 push 3
// 00888027  50                   push eax
// 00888028  8d8e60040000         lea ecx, [esi + 0x460]
// 0088802e  e80d38feff           call 0x86b840
// 00888033  57                   push edi
// 00888034  8bce                 mov ecx, esi
// 00888036  e8f55ff7ff           call 0x7fe030
// 0088803b  85c0                 test eax, eax
// 0088803d  751a                 jne 0x888059
// 0088803f  8b969c040000         mov edx, dword ptr [esi + 0x49c]
// 00888045  8b86a0040000         mov eax, dword ptr [esi + 0x4a0]
// 0088804b  52                   push edx
// 0088804c  50                   push eax
// 0088804d  8d4c2414             lea ecx, [esp + 0x14]
// 00888051  51                   push ecx
// 00888052  8bcb                 mov ecx, ebx
// 00888054  e89fc5f6ff           call 0x7f45f8
// 00888059  5f                   pop edi
// 0088805a  5e                   pop esi
// 0088805b  5b                   pop ebx
// 0088805c  83c420               add esp, 0x20
// 0088805f  c20800               ret 8
// copied from an identical function in another client (function ?FillCommandBarEntry@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp