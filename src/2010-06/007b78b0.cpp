// roc 2010-06 007b78b0  unit: CPatchedControlComboBox  size: 587 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b78b0
//
// 007b78b0  6aff                 push -1
// 007b78b2  6821f39a00           push 0x9af321
// 007b78b7  64a100000000         mov eax, dword ptr fs:[0]
// 007b78bd  50                   push eax
// 007b78be  83ec30               sub esp, 0x30
// 007b78c1  53                   push ebx
// 007b78c2  55                   push ebp
// 007b78c3  56                   push esi
// 007b78c4  57                   push edi
// 007b78c5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b78ca  33c4                 xor eax, esp
// 007b78cc  50                   push eax
// 007b78cd  8d442444             lea eax, [esp + 0x44]
// 007b78d1  64a300000000         mov dword ptr fs:[0], eax
// 007b78d7  8bd9                 mov ebx, ecx
// 007b78d9  895c2418             mov dword ptr [esp + 0x18], ebx
// 007b78dd  8d4c2414             lea ecx, [esp + 0x14]
// 007b78e1  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007b78e7  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 007b78eb  8b7508               mov esi, dword ptr [ebp + 8]
// 007b78ee  8bcb                 mov ecx, ebx
// 007b78f0  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 007b78f8  e8e3ddffff           call 0x7b56e0
// 007b78fd  8b10                 mov edx, dword ptr [eax]
// 007b78ff  8b9224020000         mov edx, dword ptr [edx + 0x224]
// 007b7905  8d4c2414             lea ecx, [esp + 0x14]
// 007b7909  51                   push ecx
// 007b790a  56                   push esi
// 007b790b  8bc8                 mov ecx, eax
// 007b790d  ffd2                 call edx
// 007b790f  8d451c               lea eax, [ebp + 0x1c]
// 007b7912  50                   push eax
// 007b7913  8d4c2428             lea ecx, [esp + 0x28]
// 007b7917  51                   push ecx
// 007b7918  ff1548bc9e00         call dword ptr [0x9ebc48]
// 007b791e  8b5518               mov edx, dword ptr [ebp + 0x18]
// 007b7921  52                   push edx
// 007b7922  e845541c00           call 0x97cd6c
// 007b7927  8b7510               mov esi, dword ptr [ebp + 0x10]
// 007b792a  8bcb                 mov ecx, ebx
// 007b792c  8bf8                 mov edi, eax
// 007b792e  83e601               and esi, 1
// 007b7931  e84a27ffff           call 0x7aa080
// 007b7936  6a05                 push 5
// 007b7938  6a02                 push 2
// 007b793a  6a00                 push 0
// 007b793c  6a00                 push 0
// 007b793e  8bd8                 mov ebx, eax
// 007b7940  8b07                 mov eax, dword ptr [edi]
// 007b7942  8b13                 mov edx, dword ptr [ebx]
// 007b7944  6a01                 push 1
// 007b7946  6a00                 push 0
// 007b7948  8944246c             mov dword ptr [esp + 0x6c], eax
// 007b794c  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007b7952  56                   push esi
// 007b7953  8bcb                 mov ecx, ebx
// 007b7955  ffd0                 call eax
// 007b7957  8b542454             mov edx, dword ptr [esp + 0x54]
// 007b795b  50                   push eax
// 007b795c  8b4238               mov eax, dword ptr [edx + 0x38]
// 007b795f  8bcf                 mov ecx, edi
// 007b7961  ffd0                 call eax
// 007b7963  89442420             mov dword ptr [esp + 0x20], eax
// 007b7967  6a05                 push 5
// 007b7969  85f6                 test esi, esi
// 007b796b  743b                 je 0x7b79a8
// 007b796d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b7971  8b13                 mov edx, dword ptr [ebx]
// 007b7973  6a02                 push 2
// 007b7975  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 007b797b  6a00                 push 0
// 007b797d  6a00                 push 0
// 007b797f  6a01                 push 1
// 007b7981  6a00                 push 0
// 007b7983  6a01                 push 1
// 007b7985  83ec10               sub esp, 0x10
// 007b7988  8bc4                 mov eax, esp
// 007b798a  8908                 mov dword ptr [eax], ecx
// 007b798c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007b7990  894804               mov dword ptr [eax + 4], ecx
// 007b7993  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007b7997  894808               mov dword ptr [eax + 8], ecx
// 007b799a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007b799e  89480c               mov dword ptr [eax + 0xc], ecx
// 007b79a1  57                   push edi
// 007b79a2  8bcb                 mov ecx, ebx
// 007b79a4  ffd2                 call edx
// 007b79a6  eb14                 jmp 0x7b79bc
// 007b79a8  8bcb                 mov ecx, ebx
// 007b79aa  e86157ffff           call 0x7ad110
// 007b79af  50                   push eax
// 007b79b0  8d442428             lea eax, [esp + 0x28]
// 007b79b4  50                   push eax
// 007b79b5  8bcf                 mov ecx, edi
// 007b79b7  e8820dffff           call 0x7a873e
// 007b79bc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b79c0  e8cbfeffff           call 0x7b7890
// 007b79c5  89442454             mov dword ptr [esp + 0x54], eax
// 007b79c9  83f8ff               cmp eax, -1
// 007b79cc  0f84a0000000         je 0x7b7a72
// 007b79d2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b79d6  8b11                 mov edx, dword ptr [ecx]
// 007b79d8  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 007b79de  ffd0                 call eax
// 007b79e0  8bc8                 mov ecx, eax
// 007b79e2  e8290d0000           call 0x7b8710
// 007b79e7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 007b79ea  034c2454             add ecx, dword ptr [esp + 0x54]
// 007b79ee  6a00                 push 0
// 007b79f0  51                   push ecx
// 007b79f1  8bc8                 mov ecx, eax
// 007b79f3  e828c20000           call 0x7c3c20
// 007b79f8  8be8                 mov ebp, eax
// 007b79fa  85ed                 test ebp, ebp
// 007b79fc  7474                 je 0x7b7a72
// 007b79fe  83ec08               sub esp, 8
// 007b7a01  8bc4                 mov eax, esp
// 007b7a03  8bcd                 mov ecx, ebp
// 007b7a05  8964245c             mov dword ptr [esp + 0x5c], esp
// 007b7a09  c70000000000         mov dword ptr [eax], 0
// 007b7a0f  c7400400000000       mov dword ptr [eax + 4], 0
// 007b7a16  e835110000           call 0x7b8b50
// 007b7a1b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007b7a1f  8b542430             mov edx, dword ptr [esp + 0x30]
// 007b7a23  03d1                 add edx, ecx
// 007b7a25  2bd0                 sub edx, eax
// 007b7a27  8bc2                 mov eax, edx
// 007b7a29  99                   cdq 
// 007b7a2a  2bc2                 sub eax, edx
// 007b7a2c  d1f8                 sar eax, 1
// 007b7a2e  8944245c             mov dword ptr [esp + 0x5c], eax
// 007b7a32  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b7a36  83c002               add eax, 2
// 007b7a39  f7de                 neg esi
// 007b7a3b  1bf6                 sbb esi, esi
// 007b7a3d  83e602               and esi, 2
// 007b7a40  56                   push esi
// 007b7a41  8bcd                 mov ecx, ebp
// 007b7a43  89442424             mov dword ptr [esp + 0x24], eax
// 007b7a47  e8b4ca0000           call 0x7c4500
// 007b7a4c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007b7a50  8b542420             mov edx, dword ptr [esp + 0x20]
// 007b7a54  50                   push eax
// 007b7a55  51                   push ecx
// 007b7a56  52                   push edx
// 007b7a57  57                   push edi
// 007b7a58  8bcd                 mov ecx, ebp
// 007b7a5a  e8f1d40000           call 0x7c4f50
// 007b7a5f  8bcd                 mov ecx, ebp
// 007b7a61  e83a670100           call 0x7ce1a0
// 007b7a66  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b7a6a  8d540102             lea edx, [ecx + eax + 2]
// 007b7a6e  89542424             mov dword ptr [esp + 0x24], edx
// 007b7a72  81c3a4000000         add ebx, 0xa4
// 007b7a78  53                   push ebx
// 007b7a79  57                   push edi
// 007b7a7a  8d4c243c             lea ecx, [esp + 0x3c]
// 007b7a7e  e81d7c0400           call 0x7ff6a0
// 007b7a83  6a01                 push 1
// 007b7a85  8bcf                 mov ecx, edi
// 007b7a87  c644245001           mov byte ptr [esp + 0x50], 1
// 007b7a8c  e823531c00           call 0x97cdb4
// 007b7a91  8344242403           add dword ptr [esp + 0x24], 3
// 007b7a96  8b37                 mov esi, dword ptr [edi]
// 007b7a98  6824080000           push 0x824
// 007b7a9d  8d442428             lea eax, [esp + 0x28]
// 007b7aa1  50                   push eax
// 007b7aa2  8d4c241c             lea ecx, [esp + 0x1c]
// 007b7aa6  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b7aac  50                   push eax
// 007b7aad  8d4c2420             lea ecx, [esp + 0x20]
// 007b7ab1  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007b7ab7  8b5670               mov edx, dword ptr [esi + 0x70]
// 007b7aba  50                   push eax
// 007b7abb  8bcf                 mov ecx, edi
// 007b7abd  ffd2                 call edx
// 007b7abf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b7ac3  8b07                 mov eax, dword ptr [edi]
// 007b7ac5  8b5038               mov edx, dword ptr [eax + 0x38]
// 007b7ac8  51                   push ecx
// 007b7ac9  8bcf                 mov ecx, edi
// 007b7acb  ffd2                 call edx
// 007b7acd  8d4c2434             lea ecx, [esp + 0x34]
// 007b7ad1  c644244c00           mov byte ptr [esp + 0x4c], 0
// 007b7ad6  e8457c0400           call 0x7ff720
// 007b7adb  8d4c2414             lea ecx, [esp + 0x14]
// 007b7adf  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b7ae5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b7ae9  64890d00000000       mov dword ptr fs:[0], ecx
// 007b7af0  59                   pop ecx
// 007b7af1  5f                   pop edi
// 007b7af2  5e                   pop esi
// 007b7af3  5d                   pop ebp
// 007b7af4  5b                   pop ebx
// 007b7af5  83c43c               add esp, 0x3c
// 007b7af8  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPControlComboBox@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp