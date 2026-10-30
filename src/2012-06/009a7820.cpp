// roc 2012-06 009a7820  unit: CRobloxReportView  size: 785 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a7820
//
// 009a7820  6aff                 push -1
// 009a7822  68acdcad00           push 0xaddcac
// 009a7827  64a100000000         mov eax, dword ptr fs:[0]
// 009a782d  50                   push eax
// 009a782e  81ec9c000000         sub esp, 0x9c
// 009a7834  53                   push ebx
// 009a7835  55                   push ebp
// 009a7836  56                   push esi
// 009a7837  57                   push edi
// 009a7838  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009a783d  33c4                 xor eax, esp
// 009a783f  50                   push eax
// 009a7840  8d8424b0000000       lea eax, [esp + 0xb0]
// 009a7847  64a300000000         mov dword ptr fs:[0], eax
// 009a784d  8bd9                 mov ebx, ecx
// 009a784f  33ff                 xor edi, edi
// 009a7851  53                   push ebx
// 009a7852  8d4c2440             lea ecx, [esp + 0x40]
// 009a7856  897c241c             mov dword ptr [esp + 0x1c], edi
// 009a785a  e811ff0200           call 0x9d7770
// 009a785f  8d4c241c             lea ecx, [esp + 0x1c]
// 009a7863  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 009a786a  ff158447b200         call dword ptr [0xb24784]
// 009a7870  8bcb                 mov ecx, ebx
// 009a7872  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 009a787a  e831acfdff           call 0x9824b0
// 009a787f  85c0                 test eax, eax
// 009a7881  7413                 je 0x9a7896
// 009a7883  8d44241c             lea eax, [esp + 0x1c]
// 009a7887  50                   push eax
// 009a7888  8bcb                 mov ecx, ebx
// 009a788a  e821acfdff           call 0x9824b0
// 009a788f  8bc8                 mov ecx, eax
// 009a7891  e860aefdff           call 0x9826f6
// 009a7896  6878fcc000           push 0xc0fc78
// 009a789b  8d4c2440             lea ecx, [esp + 0x40]
// 009a789f  e818acfdff           call 0x9824bc
// 009a78a4  8d4c241c             lea ecx, [esp + 0x1c]
// 009a78a8  ff159847b200         call dword ptr [0xb24798]
// 009a78ae  50                   push eax
// 009a78af  68c9000000           push 0xc9
// 009a78b4  8d4c2444             lea ecx, [esp + 0x44]
// 009a78b8  e8a71e0f00           call 0xa99764
// 009a78bd  8bb424c4000000       mov esi, dword ptr [esp + 0xc4]
// 009a78c4  8d4c2414             lea ecx, [esp + 0x14]
// 009a78c8  51                   push ecx
// 009a78c9  8b0e                 mov ecx, dword ptr [esi]
// 009a78cb  e88e1e0f00           call 0xa9975e
// 009a78d0  8bc8                 mov ecx, eax
// 009a78d2  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 009a78da  ff159847b200         call dword ptr [0xb24798]
// 009a78e0  50                   push eax
// 009a78e1  68ca000000           push 0xca
// 009a78e6  8d4c2444             lea ecx, [esp + 0x44]
// 009a78ea  e8751e0f00           call 0xa99764
// 009a78ef  8d4c2414             lea ecx, [esp + 0x14]
// 009a78f3  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 009a78fb  ff15d047b200         call dword ptr [0xb247d0]
// 009a7901  8b0e                 mov ecx, dword ptr [esi]
// 009a7903  8d542420             lea edx, [esp + 0x20]
// 009a7907  52                   push edx
// 009a7908  e84b1e0f00           call 0xa99758
// 009a790d  8bc8                 mov ecx, eax
// 009a790f  c68424b800000003     mov byte ptr [esp + 0xb8], 3
// 009a7917  ff159847b200         call dword ptr [0xb24798]
// 009a791d  50                   push eax
// 009a791e  68cb000000           push 0xcb
// 009a7923  8d4c2444             lea ecx, [esp + 0x44]
// 009a7927  e8381e0f00           call 0xa99764
// 009a792c  8d4c2420             lea ecx, [esp + 0x20]
// 009a7930  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 009a7938  ff15d047b200         call dword ptr [0xb247d0]
// 009a793e  6a05                 push 5
// 009a7940  8d4c2440             lea ecx, [esp + 0x40]
// 009a7944  e85bb1fdff           call 0x982aa4
// 009a7949  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 009a794d  50                   push eax
// 009a794e  ff15c43cb200         call dword ptr [0xb23cc4]
// 009a7954  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009a7957  8b462c               mov eax, dword ptr [esi + 0x2c]
// 009a795a  8b5628               mov edx, dword ptr [esi + 0x28]
// 009a795d  8d6e24               lea ebp, [esi + 0x24]
// 009a7960  894c2428             mov dword ptr [esp + 0x28], ecx
// 009a7964  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 009a7967  89442430             mov dword ptr [esp + 0x30], eax
// 009a796b  8b8360030000         mov eax, dword ptr [ebx + 0x360]
// 009a7971  8954242c             mov dword ptr [esp + 0x2c], edx
// 009a7975  8b5614               mov edx, dword ptr [esi + 0x14]
// 009a7978  894c2434             mov dword ptr [esp + 0x34], ecx
// 009a797c  8b4830               mov ecx, dword ptr [eax + 0x30]
// 009a797f  897830               mov dword ptr [eax + 0x30], edi
// 009a7982  8bbc24c0000000       mov edi, dword ptr [esp + 0xc0]
// 009a7989  89542414             mov dword ptr [esp + 0x14], edx
// 009a798d  8b17                 mov edx, dword ptr [edi]
// 009a798f  8b4224               mov eax, dword ptr [edx + 0x24]
// 009a7992  894c2424             mov dword ptr [esp + 0x24], ecx
// 009a7996  8bcf                 mov ecx, edi
// 009a7998  ffd0                 call eax
// 009a799a  6a00                 push 0
// 009a799c  6a00                 push 0
// 009a799e  6a00                 push 0
// 009a79a0  6a00                 push 0
// 009a79a2  8bcf                 mov ecx, edi
// 009a79a4  e84db6fdff           call 0x982ff6
// 009a79a9  8b4368               mov eax, dword ptr [ebx + 0x68]
// 009a79ac  894614               mov dword ptr [esi + 0x14], eax
// 009a79af  3b442414             cmp eax, dword ptr [esp + 0x14]
// 009a79b3  0f83be000000         jae 0x9a7a77
// 009a79b9  8da42400000000       lea esp, [esp]
// 009a79c0  8b13                 mov edx, dword ptr [ebx]
// 009a79c2  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 009a79c8  56                   push esi
// 009a79c9  57                   push edi
// 009a79ca  8bcb                 mov ecx, ebx
// 009a79cc  ffd0                 call eax
// 009a79ce  837e1000             cmp dword ptr [esi + 0x10], 0
// 009a79d2  0f849f000000         je 0x9a7a77
// 009a79d8  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 009a79db  51                   push ecx
// 009a79dc  8d542420             lea edx, [esp + 0x20]
// 009a79e0  689c0db500           push 0xb50d9c
// 009a79e5  52                   push edx
// 009a79e6  ff158847b200         call dword ptr [0xb24788]
// 009a79ec  83c40c               add esp, 0xc
// 009a79ef  8d4c241c             lea ecx, [esp + 0x1c]
// 009a79f3  ff159847b200         call dword ptr [0xb24798]
// 009a79f9  50                   push eax
// 009a79fa  68cc000000           push 0xcc
// 009a79ff  8d4c2444             lea ecx, [esp + 0x44]
// 009a7a03  e85c1d0f00           call 0xa99764
// 009a7a08  8b4708               mov eax, dword ptr [edi + 8]
// 009a7a0b  6a0a                 push 0xa
// 009a7a0d  50                   push eax
// 009a7a0e  ff154821b200         call dword ptr [0xb22148]
// 009a7a14  8b4f08               mov ecx, dword ptr [edi + 8]
// 009a7a17  6a08                 push 8
// 009a7a19  51                   push ecx
// 009a7a1a  89442440             mov dword ptr [esp + 0x40], eax
// 009a7a1e  ff154821b200         call dword ptr [0xb22148]
// 009a7a24  8b542438             mov edx, dword ptr [esp + 0x38]
// 009a7a28  52                   push edx
// 009a7a29  50                   push eax
// 009a7a2a  6a00                 push 0
// 009a7a2c  6a00                 push 0
// 009a7a2e  55                   push ebp
// 009a7a2f  ff156c3bb200         call dword ptr [0xb23b6c]
// 009a7a35  8b4708               mov eax, dword ptr [edi + 8]
// 009a7a38  6a02                 push 2
// 009a7a3a  55                   push ebp
// 009a7a3b  50                   push eax
// 009a7a3c  ff15f420b200         call dword ptr [0xb220f4]
// 009a7a42  8b13                 mov edx, dword ptr [ebx]
// 009a7a44  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 009a7a4a  56                   push esi
// 009a7a4b  57                   push edi
// 009a7a4c  8bcb                 mov ecx, ebx
// 009a7a4e  ffd0                 call eax
// 009a7a50  ff4614               inc dword ptr [esi + 0x14]
// 009a7a53  6a00                 push 0
// 009a7a55  6a00                 push 0
// 009a7a57  e894fc0200           call 0x9d76f0
// 009a7a5c  85c0                 test eax, eax
// 009a7a5e  740f                 je 0x9a7a6f
// 009a7a60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009a7a64  394e14               cmp dword ptr [esi + 0x14], ecx
// 009a7a67  0f8253ffffff         jb 0x9a79c0
// 009a7a6d  eb08                 jmp 0x9a7a77
// 009a7a6f  c744241801000000     mov dword ptr [esp + 0x18], 1
// 009a7a77  8d4c243c             lea ecx, [esp + 0x3c]
// 009a7a7b  e818a7fdff           call 0x982198
// 009a7a80  837c241800           cmp dword ptr [esp + 0x18], 0
// 009a7a85  751a                 jne 0x9a7aa1
// 009a7a87  8b442414             mov eax, dword ptr [esp + 0x14]
// 009a7a8b  394614               cmp dword ptr [esi + 0x14], eax
// 009a7a8e  7407                 je 0x9a7a97
// 009a7a90  3dffff0000           cmp eax, 0xffff
// 009a7a95  750a                 jne 0x9a7aa1
// 009a7a97  c744241801000000     mov dword ptr [esp + 0x18], 1
// 009a7a9f  eb08                 jmp 0x9a7aa9
// 009a7aa1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 009a7aa9  8b542418             mov edx, dword ptr [esp + 0x18]
// 009a7aad  895610               mov dword ptr [esi + 0x10], edx
// 009a7ab0  8b07                 mov eax, dword ptr [edi]
// 009a7ab2  8b5028               mov edx, dword ptr [eax + 0x28]
// 009a7ab5  6aff                 push -1
// 009a7ab7  8bcf                 mov ecx, edi
// 009a7ab9  ffd2                 call edx
// 009a7abb  8b8360030000         mov eax, dword ptr [ebx + 0x360]
// 009a7ac1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009a7ac5  8b542414             mov edx, dword ptr [esp + 0x14]
// 009a7ac9  894830               mov dword ptr [eax + 0x30], ecx
// 009a7acc  8b442428             mov eax, dword ptr [esp + 0x28]
// 009a7ad0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009a7ad4  894500               mov dword ptr [ebp], eax
// 009a7ad7  8b442434             mov eax, dword ptr [esp + 0x34]
// 009a7adb  895614               mov dword ptr [esi + 0x14], edx
// 009a7ade  8b542430             mov edx, dword ptr [esp + 0x30]
// 009a7ae2  894d04               mov dword ptr [ebp + 4], ecx
// 009a7ae5  895508               mov dword ptr [ebp + 8], edx
// 009a7ae8  8d4c241c             lea ecx, [esp + 0x1c]
// 009a7aec  89450c               mov dword ptr [ebp + 0xc], eax
// 009a7aef  ff15d047b200         call dword ptr [0xb247d0]
// 009a7af5  8d4c243c             lea ecx, [esp + 0x3c]
// 009a7af9  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 009a7b04  c744243c84f7c000     mov dword ptr [esp + 0x3c], 0xc0f784
// 009a7b0c  e8fdaefdff           call 0x982a0e
// 009a7b11  8b442418             mov eax, dword ptr [esp + 0x18]
// 009a7b15  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 009a7b1c  64890d00000000       mov dword ptr fs:[0], ecx
// 009a7b23  59                   pop ecx
// 009a7b24  5f                   pop edi
// 009a7b25  5e                   pop esi
// 009a7b26  5d                   pop ebp
// 009a7b27  5b                   pop ebx
// 009a7b28  81c4a8000000         add esp, 0xa8
// 009a7b2e  c20800               ret 8
// copied from an identical function in another client (function ?PaginateTo@CXTPReportView@@MAEHPAVCDC@@PAUCPrintInfo@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportView.cpp