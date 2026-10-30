// roc 2012-06 009a5a60  unit: MyXTPCommandBars  size: 650 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a5a60
//
// 009a5a60  51                   push ecx
// 009a5a61  53                   push ebx
// 009a5a62  55                   push ebp
// 009a5a63  56                   push esi
// 009a5a64  8b742414             mov esi, dword ptr [esp + 0x14]
// 009a5a68  57                   push edi
// 009a5a69  33db                 xor ebx, ebx
// 009a5a6b  8bf9                 mov edi, ecx
// 009a5a6d  895e3c               mov dword ptr [esi + 0x3c], ebx
// 009a5a70  895e40               mov dword ptr [esi + 0x40], ebx
// 009a5a73  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 009a5a79  e8e2cdffff           call 0x9a2860
// 009a5a7e  8bc8                 mov ecx, eax
// 009a5a80  e87b1efeff           call 0x987900
// 009a5a85  89442410             mov dword ptr [esp + 0x10], eax
// 009a5a89  6a20                 push 0x20
// 009a5a8b  8d44241c             lea eax, [esp + 0x1c]
// 009a5a8f  50                   push eax
// 009a5a90  6800f7c000           push 0xc0f700
// 009a5a95  56                   push esi
// 009a5a96  c744242820000000     mov dword ptr [esp + 0x28], 0x20
// 009a5a9e  e87d280300           call 0x9d8320
// 009a5aa3  6a01                 push 1
// 009a5aa5  8d4f20               lea ecx, [edi + 0x20]
// 009a5aa8  51                   push ecx
// 009a5aa9  68ecf6c000           push 0xc0f6ec
// 009a5aae  56                   push esi
// 009a5aaf  e8fc280300           call 0x9d83b0
// 009a5ab4  6a01                 push 1
// 009a5ab6  8d5724               lea edx, [edi + 0x24]
// 009a5ab9  52                   push edx
// 009a5aba  68d8f6c000           push 0xc0f6d8
// 009a5abf  56                   push esi
// 009a5ac0  e8eb280300           call 0x9d83b0
// 009a5ac5  6a01                 push 1
// 009a5ac7  8d4728               lea eax, [edi + 0x28]
// 009a5aca  50                   push eax
// 009a5acb  68c4f6c000           push 0xc0f6c4
// 009a5ad0  56                   push esi
// 009a5ad1  e8da280300           call 0x9d83b0
// 009a5ad6  83c440               add esp, 0x40
// 009a5ad9  53                   push ebx
// 009a5ada  8d4f2c               lea ecx, [edi + 0x2c]
// 009a5add  51                   push ecx
// 009a5ade  68b0f6c000           push 0xc0f6b0
// 009a5ae3  56                   push esi
// 009a5ae4  e8c7280300           call 0x9d83b0
// 009a5ae9  53                   push ebx
// 009a5aea  8d5730               lea edx, [edi + 0x30]
// 009a5aed  52                   push edx
// 009a5aee  68a4f6c000           push 0xc0f6a4
// 009a5af3  56                   push esi
// 009a5af4  e8b7280300           call 0x9d83b0
// 009a5af9  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 009a5afd  83c420               add esp, 0x20
// 009a5b00  837c241807           cmp dword ptr [esp + 0x18], 7
// 009a5b05  7639                 jbe 0x9a5b40
// 009a5b07  395e28               cmp dword ptr [esi + 0x28], ebx
// 009a5b0a  7518                 jne 0x9a5b24
// 009a5b0c  8b06                 mov eax, dword ptr [esi]
// 009a5b0e  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 009a5b14  8bce                 mov ecx, esi
// 009a5b16  ffd2                 call edx
// 009a5b18  85c0                 test eax, eax
// 009a5b1a  7408                 je 0x9a5b24
// 009a5b1c  399fb4000000         cmp dword ptr [edi + 0xb4], ebx
// 009a5b22  7415                 je 0x9a5b39
// 009a5b24  8d87a8000000         lea eax, [edi + 0xa8]
// 009a5b2a  50                   push eax
// 009a5b2b  6894f6c000           push 0xc0f694
// 009a5b30  56                   push esi
// 009a5b31  e86afdffff           call 0x9a58a0
// 009a5b36  83c40c               add esp, 0xc
// 009a5b39  837c241807           cmp dword ptr [esp + 0x18], 7
// 009a5b3e  7704                 ja 0x9a5b44
// 009a5b40  3beb                 cmp ebp, ebx
// 009a5b42  741b                 je 0x9a5b5f
// 009a5b44  53                   push ebx
// 009a5b45  8d4f54               lea ecx, [edi + 0x54]
// 009a5b48  51                   push ecx
// 009a5b49  689821bb00           push 0xbb2198
// 009a5b4e  56                   push esi
// 009a5b4f  e8cc270300           call 0x9d8320
// 009a5b54  83c410               add esp, 0x10
// 009a5b57  3beb                 cmp ebp, ebx
// 009a5b59  0f8583010000         jne 0x9a5ce2
// 009a5b5f  6a01                 push 1
// 009a5b61  8d5f34               lea ebx, [edi + 0x34]
// 009a5b64  53                   push ebx
// 009a5b65  6880f6c000           push 0xc0f680
// 009a5b6a  56                   push esi
// 009a5b6b  e840280300           call 0x9d83b0
// 009a5b70  6a01                 push 1
// 009a5b72  8d6f38               lea ebp, [edi + 0x38]
// 009a5b75  55                   push ebp
// 009a5b76  6868f6c000           push 0xc0f668
// 009a5b7b  56                   push esi
// 009a5b7c  e82f280300           call 0x9d83b0
// 009a5b81  33c9                 xor ecx, ecx
// 009a5b83  51                   push ecx
// 009a5b84  33c0                 xor eax, eax
// 009a5b86  50                   push eax
// 009a5b87  8d5764               lea edx, [edi + 0x64]
// 009a5b8a  52                   push edx
// 009a5b8b  685cf6c000           push 0xc0f65c
// 009a5b90  56                   push esi
// 009a5b91  e80a290300           call 0x9d84a0
// 009a5b96  33c9                 xor ecx, ecx
// 009a5b98  51                   push ecx
// 009a5b99  33c0                 xor eax, eax
// 009a5b9b  50                   push eax
// 009a5b9c  8d476c               lea eax, [edi + 0x6c]
// 009a5b9f  50                   push eax
// 009a5ba0  684cf6c000           push 0xc0f64c
// 009a5ba5  56                   push esi
// 009a5ba6  e8f5280300           call 0x9d84a0
// 009a5bab  83c448               add esp, 0x48
// 009a5bae  837e2800             cmp dword ptr [esi + 0x28], 0
// 009a5bb2  7519                 jne 0x9a5bcd
// 009a5bb4  8b16                 mov edx, dword ptr [esi]
// 009a5bb6  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 009a5bbc  8bce                 mov ecx, esi
// 009a5bbe  ffd0                 call eax
// 009a5bc0  85c0                 test eax, eax
// 009a5bc2  7409                 je 0x9a5bcd
// 009a5bc4  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 009a5bcb  7415                 je 0x9a5be2
// 009a5bcd  8d8f8c000000         lea ecx, [edi + 0x8c]
// 009a5bd3  51                   push ecx
// 009a5bd4  683cf6c000           push 0xc0f63c
// 009a5bd9  56                   push esi
// 009a5bda  e8c1fcffff           call 0x9a58a0
// 009a5bdf  83c40c               add esp, 0xc
// 009a5be2  8b542410             mov edx, dword ptr [esp + 0x10]
// 009a5be6  6a00                 push 0
// 009a5be8  83c208               add edx, 8
// 009a5beb  52                   push edx
// 009a5bec  682cf6c000           push 0xc0f62c
// 009a5bf1  56                   push esi
// 009a5bf2  e8b9270300           call 0x9d83b0
// 009a5bf7  8b442420             mov eax, dword ptr [esp + 0x20]
// 009a5bfb  6a01                 push 1
// 009a5bfd  83c004               add eax, 4
// 009a5c00  50                   push eax
// 009a5c01  6818f6c000           push 0xc0f618
// 009a5c06  56                   push esi
// 009a5c07  e8a4270300           call 0x9d83b0
// 009a5c0c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009a5c10  6a01                 push 1
// 009a5c12  51                   push ecx
// 009a5c13  6808f6c000           push 0xc0f608
// 009a5c18  56                   push esi
// 009a5c19  e892270300           call 0x9d83b0
// 009a5c1e  83c430               add esp, 0x30
// 009a5c21  837c241807           cmp dword ptr [esp + 0x18], 7
// 009a5c26  767b                 jbe 0x9a5ca3
// 009a5c28  6a01                 push 1
// 009a5c2a  53                   push ebx
// 009a5c2b  6880f6c000           push 0xc0f680
// 009a5c30  56                   push esi
// 009a5c31  e87a270300           call 0x9d83b0
// 009a5c36  6a01                 push 1
// 009a5c38  55                   push ebp
// 009a5c39  6868f6c000           push 0xc0f668
// 009a5c3e  56                   push esi
// 009a5c3f  e86c270300           call 0x9d83b0
// 009a5c44  6a00                 push 0
// 009a5c46  8d573c               lea edx, [edi + 0x3c]
// 009a5c49  52                   push edx
// 009a5c4a  68f8f5c000           push 0xc0f5f8
// 009a5c4f  56                   push esi
// 009a5c50  e85b270300           call 0x9d83b0
// 009a5c55  6a00                 push 0
// 009a5c57  8d4740               lea eax, [edi + 0x40]
// 009a5c5a  50                   push eax
// 009a5c5b  68e4f5c000           push 0xc0f5e4
// 009a5c60  56                   push esi
// 009a5c61  e84a270300           call 0x9d83b0
// 009a5c66  83c440               add esp, 0x40
// 009a5c69  6a01                 push 1
// 009a5c6b  8d4f44               lea ecx, [edi + 0x44]
// 009a5c6e  51                   push ecx
// 009a5c6f  68ccf5c000           push 0xc0f5cc
// 009a5c74  56                   push esi
// 009a5c75  e836270300           call 0x9d83b0
// 009a5c7a  6a01                 push 1
// 009a5c7c  8d5748               lea edx, [edi + 0x48]
// 009a5c7f  52                   push edx
// 009a5c80  68b4f5c000           push 0xc0f5b4
// 009a5c85  56                   push esi
// 009a5c86  e825270300           call 0x9d83b0
// 009a5c8b  33c9                 xor ecx, ecx
// 009a5c8d  51                   push ecx
// 009a5c8e  33c0                 xor eax, eax
// 009a5c90  50                   push eax
// 009a5c91  8d4774               lea eax, [edi + 0x74]
// 009a5c94  50                   push eax
// 009a5c95  68a4f5c000           push 0xc0f5a4
// 009a5c9a  56                   push esi
// 009a5c9b  e800280300           call 0x9d84a0
// 009a5ca0  83c434               add esp, 0x34
// 009a5ca3  837c241808           cmp dword ptr [esp + 0x18], 8
// 009a5ca8  7638                 jbe 0x9a5ce2
// 009a5caa  6a01                 push 1
// 009a5cac  8d4f5c               lea ecx, [edi + 0x5c]
// 009a5caf  51                   push ecx
// 009a5cb0  6894f5c000           push 0xc0f594
// 009a5cb5  56                   push esi
// 009a5cb6  e865260300           call 0x9d8320
// 009a5cbb  6a00                 push 0
// 009a5cbd  8d9fcc000000         lea ebx, [edi + 0xcc]
// 009a5cc3  53                   push ebx
// 009a5cc4  6880f5c000           push 0xc0f580
// 009a5cc9  56                   push esi
// 009a5cca  e851260300           call 0x9d8320
// 009a5ccf  83c420               add esp, 0x20
// 009a5cd2  837e2800             cmp dword ptr [esi + 0x28], 0
// 009a5cd6  740a                 je 0x9a5ce2
// 009a5cd8  8b13                 mov edx, dword ptr [ebx]
// 009a5cda  52                   push edx
// 009a5cdb  8bcf                 mov ecx, edi
// 009a5cdd  e83ec4ffff           call 0x9a2120
// 009a5ce2  5f                   pop edi
// 009a5ce3  5e                   pop esi
// 009a5ce4  5d                   pop ebp
// 009a5ce5  5b                   pop ebx
// 009a5ce6  59                   pop ecx
// 009a5ce7  c20800               ret 8
// copied from an identical function in another client (function ?DoPropExchange@CXTPCommandBarsOptions@@QAEXPAVCXTPPropExchange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp