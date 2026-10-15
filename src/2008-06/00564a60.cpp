// roc 2008-06 00564a60  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00564a60
//
// 00564a60  6aff                 push -1
// 00564a62  68c98e7d00           push 0x7d8ec9
// 00564a67  64a100000000         mov eax, dword ptr fs:[0]
// 00564a6d  50                   push eax
// 00564a6e  64892500000000       mov dword ptr fs:[0], esp
// 00564a75  83ec1c               sub esp, 0x1c
// 00564a78  53                   push ebx
// 00564a79  56                   push esi
// 00564a7a  57                   push edi
// 00564a7b  6870529400           push 0x945270
// 00564a80  8bf1                 mov esi, ecx
// 00564a82  682ce38200           push 0x82e32c
// 00564a87  8974242c             mov dword ptr [esp + 0x2c], esi
// 00564a8b  e8007b0000           call 0x56c590
// 00564a90  8d442423             lea eax, [esp + 0x23]
// 00564a94  50                   push eax
// 00564a95  8d542427             lea edx, [esp + 0x27]
// 00564a99  33ff                 xor edi, edi
// 00564a9b  8d4e30               lea ecx, [esi + 0x30]
// 00564a9e  52                   push edx
// 00564a9f  897c2438             mov dword ptr [esp + 0x38], edi
// 00564aa3  c706f0e28200         mov dword ptr [esi], 0x82e2f0
// 00564aa9  e86216eeff           call 0x446110
// 00564aae  8d442423             lea eax, [esp + 0x23]
// 00564ab2  50                   push eax
// 00564ab3  8d542427             lea edx, [esp + 0x27]
// 00564ab7  8d4e50               lea ecx, [esi + 0x50]
// 00564aba  52                   push edx
// 00564abb  c644243801           mov byte ptr [esp + 0x38], 1
// 00564ac0  e84b16eeff           call 0x446110
// 00564ac5  6a04                 push 4
// 00564ac7  c644243402           mov byte ptr [esp + 0x34], 2
// 00564acc  8d5e70               lea ebx, [esi + 0x70]
// 00564acf  e84cbe1300           call 0x6a0920
// 00564ad4  83c404               add esp, 4
// 00564ad7  3bc7                 cmp eax, edi
// 00564ad9  7404                 je 0x564adf
// 00564adb  8918                 mov dword ptr [eax], ebx
// 00564add  eb02                 jmp 0x564ae1
// 00564adf  33c0                 xor eax, eax
// 00564ae1  8903                 mov dword ptr [ebx], eax
// 00564ae3  897b0c               mov dword ptr [ebx + 0xc], edi
// 00564ae6  897b10               mov dword ptr [ebx + 0x10], edi
// 00564ae9  897b14               mov dword ptr [ebx + 0x14], edi
// 00564aec  6a04                 push 4
// 00564aee  c644243404           mov byte ptr [esp + 0x34], 4
// 00564af3  8d9e88000000         lea ebx, [esi + 0x88]
// 00564af9  e822be1300           call 0x6a0920
// 00564afe  83c404               add esp, 4
// 00564b01  3bc7                 cmp eax, edi
// 00564b03  7404                 je 0x564b09
// 00564b05  8918                 mov dword ptr [eax], ebx
// 00564b07  eb02                 jmp 0x564b0b
// 00564b09  33c0                 xor eax, eax
// 00564b0b  8903                 mov dword ptr [ebx], eax
// 00564b0d  897b0c               mov dword ptr [ebx + 0xc], edi
// 00564b10  897b10               mov dword ptr [ebx + 0x10], edi
// 00564b13  897b14               mov dword ptr [ebx + 0x14], edi
// 00564b16  6a04                 push 4
// 00564b18  c644243406           mov byte ptr [esp + 0x34], 6
// 00564b1d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 00564b23  e8f8bd1300           call 0x6a0920
// 00564b28  83c404               add esp, 4
// 00564b2b  3bc7                 cmp eax, edi
// 00564b2d  7404                 je 0x564b33
// 00564b2f  8918                 mov dword ptr [eax], ebx
// 00564b31  eb02                 jmp 0x564b35
// 00564b33  33c0                 xor eax, eax
// 00564b35  8903                 mov dword ptr [ebx], eax
// 00564b37  897b0c               mov dword ptr [ebx + 0xc], edi
// 00564b3a  897b10               mov dword ptr [ebx + 0x10], edi
// 00564b3d  897b14               mov dword ptr [ebx + 0x14], edi
// 00564b40  6a04                 push 4
// 00564b42  c644243408           mov byte ptr [esp + 0x34], 8
// 00564b47  8d9eb8000000         lea ebx, [esi + 0xb8]
// 00564b4d  e8cebd1300           call 0x6a0920
// 00564b52  83c404               add esp, 4
// 00564b55  3bc7                 cmp eax, edi
// 00564b57  7404                 je 0x564b5d
// 00564b59  8918                 mov dword ptr [eax], ebx
// 00564b5b  eb02                 jmp 0x564b5f
// 00564b5d  33c0                 xor eax, eax
// 00564b5f  8903                 mov dword ptr [ebx], eax
// 00564b61  897b0c               mov dword ptr [ebx + 0xc], edi
// 00564b64  897b10               mov dword ptr [ebx + 0x10], edi
// 00564b67  897b14               mov dword ptr [ebx + 0x14], edi
// 00564b6a  6a04                 push 4
// 00564b6c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 00564b71  8d9ed0000000         lea ebx, [esi + 0xd0]
// 00564b77  e8a4bd1300           call 0x6a0920
// 00564b7c  83c404               add esp, 4
// 00564b7f  3bc7                 cmp eax, edi
// 00564b81  7404                 je 0x564b87
// 00564b83  8918                 mov dword ptr [eax], ebx
// 00564b85  eb02                 jmp 0x564b89
// 00564b87  33c0                 xor eax, eax
// 00564b89  8903                 mov dword ptr [ebx], eax
// 00564b8b  897b0c               mov dword ptr [ebx + 0xc], edi
// 00564b8e  897b10               mov dword ptr [ebx + 0x10], edi
// 00564b91  897b14               mov dword ptr [ebx + 0x14], edi
// 00564b94  6820e38200           push 0x82e320
// 00564b99  57                   push edi
// 00564b9a  8bce                 mov ecx, esi
// 00564b9c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 00564ba1  e88a890e00           call 0x64d530
// 00564ba6  6818e38200           push 0x82e318
// 00564bab  6a01                 push 1
// 00564bad  8bce                 mov ecx, esi
// 00564baf  e87c890e00           call 0x64d530
// 00564bb4  6810e38200           push 0x82e310
// 00564bb9  6a02                 push 2
// 00564bbb  8bce                 mov ecx, esi
// 00564bbd  e86e890e00           call 0x64d530
// 00564bc2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00564bc6  5f                   pop edi
// 00564bc7  8bc6                 mov eax, esi
// 00564bc9  5e                   pop esi
// 00564bca  5b                   pop ebx
// 00564bcb  64890d00000000       mov dword ptr fs:[0], ecx
// 00564bd2  83c428               add esp, 0x28
// 00564bd5  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4ErrorReporting@DebugSettings@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
