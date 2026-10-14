// roc 2008-06 00648960  unit: RBX::Block  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00648960
//
// 00648960  83ec10               sub esp, 0x10
// 00648963  53                   push ebx
// 00648964  8bd9                 mov ebx, ecx
// 00648966  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00648969  8b4804               mov ecx, dword ptr [eax + 4]
// 0064896c  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00648970  55                   push ebp
// 00648971  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00648975  8bd0                 mov edx, eax
// 00648977  56                   push esi
// 00648978  b001                 mov al, 1
// 0064897a  57                   push edi
// 0064897b  89542414             mov dword ptr [esp + 0x14], edx
// 0064897f  88442410             mov byte ptr [esp + 0x10], al
// 00648983  755e                 jne 0x6489e3
// 00648985  d9410c               fld dword ptr [ecx + 0xc]
// 00648988  894c2414             mov dword ptr [esp + 0x14], ecx
// 0064898c  d85d00               fcomp dword ptr [ebp]
// 0064898f  dfe0                 fnstsw ax
// 00648991  f6c441               test ah, 0x41
// 00648994  7434                 je 0x6489ca
// 00648996  d9410c               fld dword ptr [ecx + 0xc]
// 00648999  d85d00               fcomp dword ptr [ebp]
// 0064899c  dfe0                 fnstsw ax
// 0064899e  f6c405               test ah, 5
// 006489a1  7b2d                 jnp 0x6489d0
// 006489a3  d94110               fld dword ptr [ecx + 0x10]
// 006489a6  d85d04               fcomp dword ptr [ebp + 4]
// 006489a9  dfe0                 fnstsw ax
// 006489ab  f6c441               test ah, 0x41
// 006489ae  741a                 je 0x6489ca
// 006489b0  d94110               fld dword ptr [ecx + 0x10]
// 006489b3  d85d04               fcomp dword ptr [ebp + 4]
// 006489b6  dfe0                 fnstsw ax
// 006489b8  f6c405               test ah, 5
// 006489bb  7b13                 jnp 0x6489d0
// 006489bd  d94114               fld dword ptr [ecx + 0x14]
// 006489c0  d85d08               fcomp dword ptr [ebp + 8]
// 006489c3  dfe0                 fnstsw ax
// 006489c5  f6c441               test ah, 0x41
// 006489c8  7506                 jne 0x6489d0
// 006489ca  8b09                 mov ecx, dword ptr [ecx]
// 006489cc  b001                 mov al, 1
// 006489ce  eb05                 jmp 0x6489d5
// 006489d0  8b4908               mov ecx, dword ptr [ecx + 8]
// 006489d3  32c0                 xor al, al
// 006489d5  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 006489d9  88442410             mov byte ptr [esp + 0x10], al
// 006489dd  74a6                 je 0x648985
// 006489df  8b542414             mov edx, dword ptr [esp + 0x14]
// 006489e3  8b33                 mov esi, dword ptr [ebx]
// 006489e5  8bfa                 mov edi, edx
// 006489e7  897c241c             mov dword ptr [esp + 0x1c], edi
// 006489eb  89742418             mov dword ptr [esp + 0x18], esi
// 006489ef  84c0                 test al, al
// 006489f1  7456                 je 0x648a49
// 006489f3  8b4318               mov eax, dword ptr [ebx + 0x18]
// 006489f6  8b38                 mov edi, dword ptr [eax]
// 006489f8  85f6                 test esi, esi
// 006489fa  7404                 je 0x648a00
// 006489fc  3bf6                 cmp esi, esi
// 006489fe  740a                 je 0x648a0a
// 00648a00  ff1590288000         call dword ptr [0x802890]
// 00648a06  8b542414             mov edx, dword ptr [esp + 0x14]
// 00648a0a  8d4c2418             lea ecx, [esp + 0x18]
// 00648a0e  3bd7                 cmp edx, edi
// 00648a10  752a                 jne 0x648a3c
// 00648a12  55                   push ebp
// 00648a13  52                   push edx
// 00648a14  6a01                 push 1
// 00648a16  51                   push ecx
// 00648a17  8bcb                 mov ecx, ebx
// 00648a19  e872faffff           call 0x648490
// 00648a1e  5f                   pop edi
// 00648a1f  8bc8                 mov ecx, eax
// 00648a21  8b11                 mov edx, dword ptr [ecx]
// 00648a23  8b442420             mov eax, dword ptr [esp + 0x20]
// 00648a27  8b4904               mov ecx, dword ptr [ecx + 4]
// 00648a2a  5e                   pop esi
// 00648a2b  5d                   pop ebp
// 00648a2c  8910                 mov dword ptr [eax], edx
// 00648a2e  894804               mov dword ptr [eax + 4], ecx
// 00648a31  c6400801             mov byte ptr [eax + 8], 1
// 00648a35  5b                   pop ebx
// 00648a36  83c410               add esp, 0x10
// 00648a39  c20800               ret 8
// 00648a3c  e89ff7ffff           call 0x6481e0
// 00648a41  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00648a45  8b742418             mov esi, dword ptr [esp + 0x18]
// 00648a49  55                   push ebp
// 00648a4a  8d570c               lea edx, [edi + 0xc]
// 00648a4d  52                   push edx
// 00648a4e  8d4b08               lea ecx, [ebx + 8]
// 00648a51  e80aedffff           call 0x647760
// 00648a56  84c0                 test al, al
// 00648a58  7412                 je 0x648a6c
// 00648a5a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00648a5e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00648a62  55                   push ebp
// 00648a63  50                   push eax
// 00648a64  51                   push ecx
// 00648a65  8d542424             lea edx, [esp + 0x24]
// 00648a69  52                   push edx
// 00648a6a  ebab                 jmp 0x648a17
// 00648a6c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00648a70  897804               mov dword ptr [eax + 4], edi
// 00648a73  5f                   pop edi
// 00648a74  8930                 mov dword ptr [eax], esi
// 00648a76  5e                   pop esi
// 00648a77  5d                   pop ebp
// 00648a78  c6400800             mov byte ptr [eax + 8], 0
// 00648a7c  5b                   pop ebx
// 00648a7d  83c410               add esp, 0x10
// 00648a80  c20800               ret 8
// library rbxgs-dll/v8world\Block.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/Block.cpp
