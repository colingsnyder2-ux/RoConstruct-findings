// roc 2008-06 00564d70  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 360 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00564d70
//
// 00564d70  6aff                 push -1
// 00564d72  68c98e7d00           push 0x7d8ec9
// 00564d77  64a100000000         mov eax, dword ptr fs:[0]
// 00564d7d  50                   push eax
// 00564d7e  64892500000000       mov dword ptr fs:[0], esp
// 00564d85  83ec1c               sub esp, 0x1c
// 00564d88  53                   push ebx
// 00564d89  56                   push esi
// 00564d8a  57                   push edi
// 00564d8b  68c4529400           push 0x9452c4
// 00564d90  8bf1                 mov esi, ecx
// 00564d92  68a0e38200           push 0x82e3a0
// 00564d97  8974242c             mov dword ptr [esp + 0x2c], esi
// 00564d9b  e8f0770000           call 0x56c590
// 00564da0  8d442423             lea eax, [esp + 0x23]
// 00564da4  50                   push eax
// 00564da5  8d542427             lea edx, [esp + 0x27]
// 00564da9  33ff                 xor edi, edi
// 00564dab  8d4e30               lea ecx, [esi + 0x30]
// 00564dae  52                   push edx
// 00564daf  897c2438             mov dword ptr [esp + 0x38], edi
// 00564db3  c70608e38200         mov dword ptr [esi], 0x82e308
// 00564db9  e85213eeff           call 0x446110
// 00564dbe  8d442423             lea eax, [esp + 0x23]
// 00564dc2  50                   push eax
// 00564dc3  8d542427             lea edx, [esp + 0x27]
// 00564dc7  8d4e50               lea ecx, [esi + 0x50]
// 00564dca  52                   push edx
// 00564dcb  c644243801           mov byte ptr [esp + 0x38], 1
// 00564dd0  e83b13eeff           call 0x446110
// 00564dd5  6a04                 push 4
// 00564dd7  c644243402           mov byte ptr [esp + 0x34], 2
// 00564ddc  8d5e70               lea ebx, [esi + 0x70]
// 00564ddf  e83cbb1300           call 0x6a0920
// 00564de4  83c404               add esp, 4
// 00564de7  3bc7                 cmp eax, edi
// 00564de9  7404                 je 0x564def
// 00564deb  8918                 mov dword ptr [eax], ebx
// 00564ded  eb02                 jmp 0x564df1
// 00564def  33c0                 xor eax, eax
// 00564df1  8903                 mov dword ptr [ebx], eax
// 00564df3  897b0c               mov dword ptr [ebx + 0xc], edi
// 00564df6  897b10               mov dword ptr [ebx + 0x10], edi
// 00564df9  897b14               mov dword ptr [ebx + 0x14], edi
// 00564dfc  6a04                 push 4
// 00564dfe  c644243404           mov byte ptr [esp + 0x34], 4
// 00564e03  8d9e88000000         lea ebx, [esi + 0x88]
// 00564e09  e812bb1300           call 0x6a0920
// 00564e0e  83c404               add esp, 4
// 00564e11  3bc7                 cmp eax, edi
// 00564e13  7404                 je 0x564e19
// 00564e15  8918                 mov dword ptr [eax], ebx
// 00564e17  eb02                 jmp 0x564e1b
// 00564e19  33c0                 xor eax, eax
// 00564e1b  8903                 mov dword ptr [ebx], eax
// 00564e1d  897b0c               mov dword ptr [ebx + 0xc], edi
// 00564e20  897b10               mov dword ptr [ebx + 0x10], edi
// 00564e23  897b14               mov dword ptr [ebx + 0x14], edi
// 00564e26  6a04                 push 4
// 00564e28  c644243406           mov byte ptr [esp + 0x34], 6
// 00564e2d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 00564e33  e8e8ba1300           call 0x6a0920
// 00564e38  83c404               add esp, 4
// 00564e3b  3bc7                 cmp eax, edi
// 00564e3d  7404                 je 0x564e43
// 00564e3f  8918                 mov dword ptr [eax], ebx
// 00564e41  eb02                 jmp 0x564e45
// 00564e43  33c0                 xor eax, eax
// 00564e45  8903                 mov dword ptr [ebx], eax
// 00564e47  897b0c               mov dword ptr [ebx + 0xc], edi
// 00564e4a  897b10               mov dword ptr [ebx + 0x10], edi
// 00564e4d  897b14               mov dword ptr [ebx + 0x14], edi
// 00564e50  6a04                 push 4
// 00564e52  c644243408           mov byte ptr [esp + 0x34], 8
// 00564e57  8d9eb8000000         lea ebx, [esi + 0xb8]
// 00564e5d  e8beba1300           call 0x6a0920
// 00564e62  83c404               add esp, 4
// 00564e65  3bc7                 cmp eax, edi
// 00564e67  7404                 je 0x564e6d
// 00564e69  8918                 mov dword ptr [eax], ebx
// 00564e6b  eb02                 jmp 0x564e6f
// 00564e6d  33c0                 xor eax, eax
// 00564e6f  8903                 mov dword ptr [ebx], eax
// 00564e71  897b0c               mov dword ptr [ebx + 0xc], edi
// 00564e74  897b10               mov dword ptr [ebx + 0x10], edi
// 00564e77  897b14               mov dword ptr [ebx + 0x14], edi
// 00564e7a  6a04                 push 4
// 00564e7c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 00564e81  8d9ed0000000         lea ebx, [esi + 0xd0]
// 00564e87  e894ba1300           call 0x6a0920
// 00564e8c  83c404               add esp, 4
// 00564e8f  3bc7                 cmp eax, edi
// 00564e91  7404                 je 0x564e97
// 00564e93  8918                 mov dword ptr [eax], ebx
// 00564e95  eb02                 jmp 0x564e99
// 00564e97  33c0                 xor eax, eax
// 00564e99  8903                 mov dword ptr [ebx], eax
// 00564e9b  897b0c               mov dword ptr [ebx + 0xc], edi
// 00564e9e  897b10               mov dword ptr [ebx + 0x10], edi
// 00564ea1  897b14               mov dword ptr [ebx + 0x14], edi
// 00564ea4  6890e38200           push 0x82e390
// 00564ea9  57                   push edi
// 00564eaa  8bce                 mov ecx, esi
// 00564eac  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 00564eb1  e87a860e00           call 0x64d530
// 00564eb6  6880e38200           push 0x82e380
// 00564ebb  6a01                 push 1
// 00564ebd  8bce                 mov ecx, esi
// 00564ebf  e86c860e00           call 0x64d530
// 00564ec4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00564ec8  5f                   pop edi
// 00564ec9  8bc6                 mov eax, esi
// 00564ecb  5e                   pop esi
// 00564ecc  5b                   pop ebx
// 00564ecd  64890d00000000       mov dword ptr fs:[0], ecx
// 00564ed4  83c428               add esp, 0x28
// 00564ed7  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4AssertAction@Debugable@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
