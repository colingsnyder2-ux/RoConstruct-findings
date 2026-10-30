// roc 2009-06 00766460  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00766460
//
// 00766460  6aff                 push -1
// 00766462  68248c8700           push 0x878c24
// 00766467  64a100000000         mov eax, dword ptr fs:[0]
// 0076646d  50                   push eax
// 0076646e  83ec08               sub esp, 8
// 00766471  53                   push ebx
// 00766472  55                   push ebp
// 00766473  56                   push esi
// 00766474  57                   push edi
// 00766475  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0076647a  33c4                 xor eax, esp
// 0076647c  50                   push eax
// 0076647d  8d44241c             lea eax, [esp + 0x1c]
// 00766481  64a300000000         mov dword ptr fs:[0], eax
// 00766487  8bf9                 mov edi, ecx
// 00766489  897c2414             mov dword ptr [esp + 0x14], edi
// 0076648d  8d4c2418             lea ecx, [esp + 0x18]
// 00766491  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00766497  33db                 xor ebx, ebx
// 00766499  895c2424             mov dword ptr [esp + 0x24], ebx
// 0076649d  e89e4c0300           call 0x79b140
// 007664a2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007664a6  8b10                 mov edx, dword ptr [eax]
// 007664a8  8b5208               mov edx, dword ptr [edx + 8]
// 007664ab  51                   push ecx
// 007664ac  8d4c241c             lea ecx, [esp + 0x1c]
// 007664b0  51                   push ecx
// 007664b1  8bc8                 mov ecx, eax
// 007664b3  ffd2                 call edx
// 007664b5  6a08                 push 8
// 007664b7  e87c25fbff           call 0x718a38
// 007664bc  8bf0                 mov esi, eax
// 007664be  83c404               add esp, 4
// 007664c1  8974242c             mov dword ptr [esp + 0x2c], esi
// 007664c5  c644242401           mov byte ptr [esp + 0x24], 1
// 007664ca  3bf3                 cmp esi, ebx
// 007664cc  7423                 je 0x7664f1
// 007664ce  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 007664d4  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 007664da  50                   push eax
// 007664db  8d4c241c             lea ecx, [esp + 0x1c]
// 007664df  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007664e5  50                   push eax
// 007664e6  8bce                 mov ecx, esi
// 007664e8  e853f5ffff           call 0x765a40
// 007664ed  8be8                 mov ebp, eax
// 007664ef  eb02                 jmp 0x7664f3
// 007664f1  33ed                 xor ebp, ebp
// 007664f3  83bf4401000000       cmp dword ptr [edi + 0x144], 0
// 007664fa  c644242400           mov byte ptr [esp + 0x24], 0
// 007664ff  7e64                 jle 0x766565
// 00766501  85db                 test ebx, ebx
// 00766503  0f8c9a000000         jl 0x7665a3
// 00766509  3b9f44010000         cmp ebx, dword ptr [edi + 0x144]
// 0076650f  0f8d8e000000         jge 0x7665a3
// 00766515  8b8f40010000         mov ecx, dword ptr [edi + 0x140]
// 0076651b  8b1499               mov edx, dword ptr [ecx + ebx*4]
// 0076651e  8b7a04               mov edi, dword ptr [edx + 4]
// 00766521  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00766524  33f6                 xor esi, esi
// 00766526  85c0                 test eax, eax
// 00766528  7e2c                 jle 0x766556
// 0076652a  85f6                 test esi, esi
// 0076652c  7c11                 jl 0x76653f
// 0076652e  3bf0                 cmp esi, eax
// 00766530  7d0d                 jge 0x76653f
// 00766532  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00766535  7d6c                 jge 0x7665a3
// 00766537  8b4728               mov eax, dword ptr [edi + 0x28]
// 0076653a  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0076653d  eb02                 jmp 0x766541
// 0076653f  33c0                 xor eax, eax
// 00766541  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00766544  6a00                 push 0
// 00766546  6aff                 push -1
// 00766548  50                   push eax
// 00766549  e8825f0000           call 0x76c4d0
// 0076654e  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00766551  46                   inc esi
// 00766552  3bf0                 cmp esi, eax
// 00766554  7cd4                 jl 0x76652a
// 00766556  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076655a  43                   inc ebx
// 0076655b  3b9944010000         cmp ebx, dword ptr [ecx + 0x144]
// 00766561  8bf9                 mov edi, ecx
// 00766563  7c9c                 jl 0x766501
// 00766565  8b442430             mov eax, dword ptr [esp + 0x30]
// 00766569  83f8ff               cmp eax, -1
// 0076656c  7506                 jne 0x766574
// 0076656e  8b8744010000         mov eax, dword ptr [edi + 0x144]
// 00766574  6a01                 push 1
// 00766576  55                   push ebp
// 00766577  50                   push eax
// 00766578  8d8f3c010000         lea ecx, [edi + 0x13c]
// 0076657e  e86dba0a00           call 0x811ff0
// 00766583  8d4c2418             lea ecx, [esp + 0x18]
// 00766587  ff1510fd8900         call dword ptr [0x89fd10]
// 0076658d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00766591  64890d00000000       mov dword ptr fs:[0], ecx
// 00766598  59                   pop ecx
// 00766599  5f                   pop edi
// 0076659a  5e                   pop esi
// 0076659b  5d                   pop ebp
// 0076659c  5b                   pop ebx
// 0076659d  83c414               add esp, 0x14
// 007665a0  c20800               ret 8
// 007665a3  e83c27fbff           call 0x718ce4
// copied from an identical function in another client (function ?InsertAllCommandsCategory@CXTPCustomizeCommandsPage@@QAEXIH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp