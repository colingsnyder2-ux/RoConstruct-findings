// roc 2009-06 00766970  unit: CXTPCustomizeCommandsPage  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00766970
//
// 00766970  83ec08               sub esp, 8
// 00766973  53                   push ebx
// 00766974  55                   push ebp
// 00766975  56                   push esi
// 00766976  57                   push edi
// 00766977  8bf1                 mov esi, ecx
// 00766979  e8de29fbff           call 0x71935c
// 0076697e  8b1d90ee8900         mov ebx, dword ptr [0x89ee90]
// 00766984  33ff                 xor edi, edi
// 00766986  39be44010000         cmp dword ptr [esi + 0x144], edi
// 0076698c  7e66                 jle 0x7669f4
// 0076698e  8bff                 mov edi, edi
// 00766990  85ff                 test edi, edi
// 00766992  0f8c1c010000         jl 0x766ab4
// 00766998  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 0076699e  0f8d10010000         jge 0x766ab4
// 007669a4  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 007669aa  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 007669ad  8d04b8               lea eax, [eax + edi*4]
// 007669b0  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007669b6  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 007669bc  50                   push eax
// 007669bd  6a00                 push 0
// 007669bf  6880010000           push 0x180
// 007669c4  51                   push ecx
// 007669c5  ffd3                 call ebx
// 007669c7  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 007669cd  57                   push edi
// 007669ce  50                   push eax
// 007669cf  689a010000           push 0x19a
// 007669d4  52                   push edx
// 007669d5  ffd3                 call ebx
// 007669d7  85ff                 test edi, edi
// 007669d9  7510                 jne 0x7669eb
// 007669db  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 007669e1  57                   push edi
// 007669e2  57                   push edi
// 007669e3  6886010000           push 0x186
// 007669e8  50                   push eax
// 007669e9  ffd3                 call ebx
// 007669eb  47                   inc edi
// 007669ec  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 007669f2  7c9c                 jl 0x766990
// 007669f4  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 007669fa  8bb9b8000000         mov edi, dword ptr [ecx + 0xb8]
// 00766a00  8bcf                 mov ecx, edi
// 00766a02  e8f92ffcff           call 0x729a00
// 00766a07  8b28                 mov ebp, dword ptr [eax]
// 00766a09  33c9                 xor ecx, ecx
// 00766a0b  57                   push edi
// 00766a0c  51                   push ecx
// 00766a0d  51                   push ecx
// 00766a0e  83ec10               sub esp, 0x10
// 00766a11  8bd4                 mov edx, esp
// 00766a13  890a                 mov dword ptr [edx], ecx
// 00766a15  894a04               mov dword ptr [edx + 4], ecx
// 00766a18  894a08               mov dword ptr [edx + 8], ecx
// 00766a1b  51                   push ecx
// 00766a1c  894a0c               mov dword ptr [edx + 0xc], ecx
// 00766a1f  51                   push ecx
// 00766a20  8d542434             lea edx, [esp + 0x34]
// 00766a24  8bc8                 mov ecx, eax
// 00766a26  8b4570               mov eax, dword ptr [ebp + 0x70]
// 00766a29  52                   push edx
// 00766a2a  ffd0                 call eax
// 00766a2c  0fb74c2414           movzx ecx, word ptr [esp + 0x14]
// 00766a31  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 00766a37  51                   push ecx
// 00766a38  6aff                 push -1
// 00766a3a  68a0010000           push 0x1a0
// 00766a3f  52                   push edx
// 00766a40  ffd3                 call ebx
// 00766a42  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00766a48  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00766a4e  898edc000000         mov dword ptr [esi + 0xdc], ecx
// 00766a54  8bcf                 mov ecx, edi
// 00766a56  c786e000000001000000 mov dword ptr [esi + 0xe0], 1
// 00766a60  e84b2cfcff           call 0x7296b0
// 00766a65  85c0                 test eax, eax
// 00766a67  7428                 je 0x766a91
// 00766a69  6a00                 push 0
// 00766a6b  6800004000           push 0x400000
// 00766a70  6a00                 push 0
// 00766a72  8d8e88000000         lea ecx, [esi + 0x88]
// 00766a78  e85b25fbff           call 0x718fd8
// 00766a7d  6a00                 push 0
// 00766a7f  6800700000           push 0x7000
// 00766a84  6a00                 push 0
// 00766a86  8d8ee4000000         lea ecx, [esi + 0xe4]
// 00766a8c  e84725fbff           call 0x718fd8
// 00766a91  8b5620               mov edx, dword ptr [esi + 0x20]
// 00766a94  52                   push edx
// 00766a95  8bcf                 mov ecx, edi
// 00766a97  e82444fcff           call 0x72aec0
// 00766a9c  8bc8                 mov ecx, eax
// 00766a9e  e8bdda0200           call 0x794560
// 00766aa3  8bce                 mov ecx, esi
// 00766aa5  e806fbffff           call 0x7665b0
// 00766aaa  5f                   pop edi
// 00766aab  5e                   pop esi
// 00766aac  5d                   pop ebp
// 00766aad  33c0                 xor eax, eax
// 00766aaf  5b                   pop ebx
// 00766ab0  83c408               add esp, 8
// 00766ab3  c3                   ret 
// 00766ab4  e82b22fbff           call 0x718ce4
// copied from an identical function in another client (function ?OnInitDialog@CXTPCustomizeCommandsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp