// roc 2011-06 00819d90  unit: CPatchedControlComboBox  size: 587 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00819d90
//
// 00819d90  6aff                 push -1
// 00819d92  68912ba000           push 0xa02b91
// 00819d97  64a100000000         mov eax, dword ptr fs:[0]
// 00819d9d  50                   push eax
// 00819d9e  83ec30               sub esp, 0x30
// 00819da1  53                   push ebx
// 00819da2  55                   push ebp
// 00819da3  56                   push esi
// 00819da4  57                   push edi
// 00819da5  a12058c900           mov eax, dword ptr [0xc95820]
// 00819daa  33c4                 xor eax, esp
// 00819dac  50                   push eax
// 00819dad  8d442444             lea eax, [esp + 0x44]
// 00819db1  64a300000000         mov dword ptr fs:[0], eax
// 00819db7  8bd9                 mov ebx, ecx
// 00819db9  895c2418             mov dword ptr [esp + 0x18], ebx
// 00819dbd  8d4c2414             lea ecx, [esp + 0x14]
// 00819dc1  ff15b42da400         call dword ptr [0xa42db4]
// 00819dc7  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00819dcb  8b7508               mov esi, dword ptr [ebp + 8]
// 00819dce  8bcb                 mov ecx, ebx
// 00819dd0  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00819dd8  e893ddffff           call 0x817b70
// 00819ddd  8b10                 mov edx, dword ptr [eax]
// 00819ddf  8b9224020000         mov edx, dword ptr [edx + 0x224]
// 00819de5  8d4c2414             lea ecx, [esp + 0x14]
// 00819de9  51                   push ecx
// 00819dea  56                   push esi
// 00819deb  8bc8                 mov ecx, eax
// 00819ded  ffd2                 call edx
// 00819def  8d451c               lea eax, [ebp + 0x1c]
// 00819df2  50                   push eax
// 00819df3  8d4c2428             lea ecx, [esp + 0x28]
// 00819df7  51                   push ecx
// 00819df8  ff15681ca400         call dword ptr [0xa41c68]
// 00819dfe  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00819e01  52                   push edx
// 00819e02  e8b1271b00           call 0x9cc5b8
// 00819e07  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00819e0a  8bcb                 mov ecx, ebx
// 00819e0c  8bf8                 mov edi, eax
// 00819e0e  83e601               and esi, 1
// 00819e11  e84a29ffff           call 0x80c760
// 00819e16  6a05                 push 5
// 00819e18  6a02                 push 2
// 00819e1a  6a00                 push 0
// 00819e1c  6a00                 push 0
// 00819e1e  8bd8                 mov ebx, eax
// 00819e20  8b07                 mov eax, dword ptr [edi]
// 00819e22  8b13                 mov edx, dword ptr [ebx]
// 00819e24  6a01                 push 1
// 00819e26  6a00                 push 0
// 00819e28  8944246c             mov dword ptr [esp + 0x6c], eax
// 00819e2c  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00819e32  56                   push esi
// 00819e33  8bcb                 mov ecx, ebx
// 00819e35  ffd0                 call eax
// 00819e37  8b542454             mov edx, dword ptr [esp + 0x54]
// 00819e3b  50                   push eax
// 00819e3c  8b4238               mov eax, dword ptr [edx + 0x38]
// 00819e3f  8bcf                 mov ecx, edi
// 00819e41  ffd0                 call eax
// 00819e43  89442420             mov dword ptr [esp + 0x20], eax
// 00819e47  6a05                 push 5
// 00819e49  85f6                 test esi, esi
// 00819e4b  743b                 je 0x819e88
// 00819e4d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00819e51  8b13                 mov edx, dword ptr [ebx]
// 00819e53  6a02                 push 2
// 00819e55  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 00819e5b  6a00                 push 0
// 00819e5d  6a00                 push 0
// 00819e5f  6a01                 push 1
// 00819e61  6a00                 push 0
// 00819e63  6a01                 push 1
// 00819e65  83ec10               sub esp, 0x10
// 00819e68  8bc4                 mov eax, esp
// 00819e6a  8908                 mov dword ptr [eax], ecx
// 00819e6c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00819e70  894804               mov dword ptr [eax + 4], ecx
// 00819e73  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00819e77  894808               mov dword ptr [eax + 8], ecx
// 00819e7a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00819e7e  89480c               mov dword ptr [eax + 0xc], ecx
// 00819e81  57                   push edi
// 00819e82  8bcb                 mov ecx, ebx
// 00819e84  ffd2                 call edx
// 00819e86  eb14                 jmp 0x819e9c
// 00819e88  8bcb                 mov ecx, ebx
// 00819e8a  e82157ffff           call 0x80f5b0
// 00819e8f  50                   push eax
// 00819e90  8d442428             lea eax, [esp + 0x28]
// 00819e94  50                   push eax
// 00819e95  8bcf                 mov ecx, edi
// 00819e97  e8840fffff           call 0x80ae20
// 00819e9c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00819ea0  e8cbfeffff           call 0x819d70
// 00819ea5  89442454             mov dword ptr [esp + 0x54], eax
// 00819ea9  83f8ff               cmp eax, -1
// 00819eac  0f84a0000000         je 0x819f52
// 00819eb2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00819eb6  8b11                 mov edx, dword ptr [ecx]
// 00819eb8  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00819ebe  ffd0                 call eax
// 00819ec0  8bc8                 mov ecx, eax
// 00819ec2  e8090d0000           call 0x81abd0
// 00819ec7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00819eca  034c2454             add ecx, dword ptr [esp + 0x54]
// 00819ece  6a00                 push 0
// 00819ed0  51                   push ecx
// 00819ed1  8bc8                 mov ecx, eax
// 00819ed3  e8b8bb0000           call 0x825a90
// 00819ed8  8be8                 mov ebp, eax
// 00819eda  85ed                 test ebp, ebp
// 00819edc  7474                 je 0x819f52
// 00819ede  83ec08               sub esp, 8
// 00819ee1  8bc4                 mov eax, esp
// 00819ee3  8bcd                 mov ecx, ebp
// 00819ee5  8964245c             mov dword ptr [esp + 0x5c], esp
// 00819ee9  c70000000000         mov dword ptr [eax], 0
// 00819eef  c7400400000000       mov dword ptr [eax + 4], 0
// 00819ef6  e8d5a20800           call 0x8a41d0
// 00819efb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00819eff  8b542430             mov edx, dword ptr [esp + 0x30]
// 00819f03  03d1                 add edx, ecx
// 00819f05  2bd0                 sub edx, eax
// 00819f07  8bc2                 mov eax, edx
// 00819f09  99                   cdq 
// 00819f0a  2bc2                 sub eax, edx
// 00819f0c  d1f8                 sar eax, 1
// 00819f0e  8944245c             mov dword ptr [esp + 0x5c], eax
// 00819f12  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00819f16  83c002               add eax, 2
// 00819f19  f7de                 neg esi
// 00819f1b  1bf6                 sbb esi, esi
// 00819f1d  83e602               and esi, 2
// 00819f20  56                   push esi
// 00819f21  8bcd                 mov ecx, ebp
// 00819f23  89442424             mov dword ptr [esp + 0x24], eax
// 00819f27  e894c10000           call 0x8260c0
// 00819f2c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00819f30  8b542420             mov edx, dword ptr [esp + 0x20]
// 00819f34  50                   push eax
// 00819f35  51                   push ecx
// 00819f36  52                   push edx
// 00819f37  57                   push edi
// 00819f38  8bcd                 mov ecx, ebp
// 00819f3a  e831cb0000           call 0x826a70
// 00819f3f  8bcd                 mov ecx, ebp
// 00819f41  e84af40400           call 0x869390
// 00819f46  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00819f4a  8d540102             lea edx, [ecx + eax + 2]
// 00819f4e  89542424             mov dword ptr [esp + 0x24], edx
// 00819f52  81c3a4000000         add ebx, 0xa4
// 00819f58  53                   push ebx
// 00819f59  57                   push edi
// 00819f5a  8d4c243c             lea ecx, [esp + 0x3c]
// 00819f5e  e8bd310400           call 0x85d120
// 00819f63  6a01                 push 1
// 00819f65  8bcf                 mov ecx, edi
// 00819f67  c644245001           mov byte ptr [esp + 0x50], 1
// 00819f6c  e87d261b00           call 0x9cc5ee
// 00819f71  8344242403           add dword ptr [esp + 0x24], 3
// 00819f76  8b37                 mov esi, dword ptr [edi]
// 00819f78  6824080000           push 0x824
// 00819f7d  8d442428             lea eax, [esp + 0x28]
// 00819f81  50                   push eax
// 00819f82  8d4c241c             lea ecx, [esp + 0x1c]
// 00819f86  ff15a826a400         call dword ptr [0xa426a8]
// 00819f8c  50                   push eax
// 00819f8d  8d4c2420             lea ecx, [esp + 0x20]
// 00819f91  ff15c82da400         call dword ptr [0xa42dc8]
// 00819f97  8b5670               mov edx, dword ptr [esi + 0x70]
// 00819f9a  50                   push eax
// 00819f9b  8bcf                 mov ecx, edi
// 00819f9d  ffd2                 call edx
// 00819f9f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00819fa3  8b07                 mov eax, dword ptr [edi]
// 00819fa5  8b5038               mov edx, dword ptr [eax + 0x38]
// 00819fa8  51                   push ecx
// 00819fa9  8bcf                 mov ecx, edi
// 00819fab  ffd2                 call edx
// 00819fad  8d4c2434             lea ecx, [esp + 0x34]
// 00819fb1  c644244c00           mov byte ptr [esp + 0x4c], 0
// 00819fb6  e8e5310400           call 0x85d1a0
// 00819fbb  8d4c2414             lea ecx, [esp + 0x14]
// 00819fbf  ff15082ea400         call dword ptr [0xa42e08]
// 00819fc5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00819fc9  64890d00000000       mov dword ptr fs:[0], ecx
// 00819fd0  59                   pop ecx
// 00819fd1  5f                   pop edi
// 00819fd2  5e                   pop esi
// 00819fd3  5d                   pop ebp
// 00819fd4  5b                   pop ebx
// 00819fd5  83c43c               add esp, 0x3c
// 00819fd8  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPControlComboBox@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp