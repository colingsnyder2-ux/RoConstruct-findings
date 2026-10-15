// roc 2008-06 0056fac0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056fac0
//
// 0056fac0  6aff                 push -1
// 0056fac2  68c98e7d00           push 0x7d8ec9
// 0056fac7  64a100000000         mov eax, dword ptr fs:[0]
// 0056facd  50                   push eax
// 0056face  64892500000000       mov dword ptr fs:[0], esp
// 0056fad5  83ec1c               sub esp, 0x1c
// 0056fad8  53                   push ebx
// 0056fad9  56                   push esi
// 0056fada  57                   push edi
// 0056fadb  688c649400           push 0x94648c
// 0056fae0  8bf1                 mov esi, ecx
// 0056fae2  68a4f78200           push 0x82f7a4
// 0056fae7  8974242c             mov dword ptr [esp + 0x2c], esi
// 0056faeb  e8a0caffff           call 0x56c590
// 0056faf0  8d442423             lea eax, [esp + 0x23]
// 0056faf4  50                   push eax
// 0056faf5  8d542427             lea edx, [esp + 0x27]
// 0056faf9  33ff                 xor edi, edi
// 0056fafb  8d4e30               lea ecx, [esi + 0x30]
// 0056fafe  52                   push edx
// 0056faff  897c2438             mov dword ptr [esp + 0x38], edi
// 0056fb03  c7069cf78200         mov dword ptr [esi], 0x82f79c
// 0056fb09  e80266edff           call 0x446110
// 0056fb0e  8d442423             lea eax, [esp + 0x23]
// 0056fb12  50                   push eax
// 0056fb13  8d542427             lea edx, [esp + 0x27]
// 0056fb17  8d4e50               lea ecx, [esi + 0x50]
// 0056fb1a  52                   push edx
// 0056fb1b  c644243801           mov byte ptr [esp + 0x38], 1
// 0056fb20  e8eb65edff           call 0x446110
// 0056fb25  6a04                 push 4
// 0056fb27  c644243402           mov byte ptr [esp + 0x34], 2
// 0056fb2c  8d5e70               lea ebx, [esi + 0x70]
// 0056fb2f  e8ec0d1300           call 0x6a0920
// 0056fb34  83c404               add esp, 4
// 0056fb37  3bc7                 cmp eax, edi
// 0056fb39  7404                 je 0x56fb3f
// 0056fb3b  8918                 mov dword ptr [eax], ebx
// 0056fb3d  eb02                 jmp 0x56fb41
// 0056fb3f  33c0                 xor eax, eax
// 0056fb41  8903                 mov dword ptr [ebx], eax
// 0056fb43  897b0c               mov dword ptr [ebx + 0xc], edi
// 0056fb46  897b10               mov dword ptr [ebx + 0x10], edi
// 0056fb49  897b14               mov dword ptr [ebx + 0x14], edi
// 0056fb4c  6a04                 push 4
// 0056fb4e  c644243404           mov byte ptr [esp + 0x34], 4
// 0056fb53  8d9e88000000         lea ebx, [esi + 0x88]
// 0056fb59  e8c20d1300           call 0x6a0920
// 0056fb5e  83c404               add esp, 4
// 0056fb61  3bc7                 cmp eax, edi
// 0056fb63  7404                 je 0x56fb69
// 0056fb65  8918                 mov dword ptr [eax], ebx
// 0056fb67  eb02                 jmp 0x56fb6b
// 0056fb69  33c0                 xor eax, eax
// 0056fb6b  8903                 mov dword ptr [ebx], eax
// 0056fb6d  897b0c               mov dword ptr [ebx + 0xc], edi
// 0056fb70  897b10               mov dword ptr [ebx + 0x10], edi
// 0056fb73  897b14               mov dword ptr [ebx + 0x14], edi
// 0056fb76  6a04                 push 4
// 0056fb78  c644243406           mov byte ptr [esp + 0x34], 6
// 0056fb7d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 0056fb83  e8980d1300           call 0x6a0920
// 0056fb88  83c404               add esp, 4
// 0056fb8b  3bc7                 cmp eax, edi
// 0056fb8d  7404                 je 0x56fb93
// 0056fb8f  8918                 mov dword ptr [eax], ebx
// 0056fb91  eb02                 jmp 0x56fb95
// 0056fb93  33c0                 xor eax, eax
// 0056fb95  8903                 mov dword ptr [ebx], eax
// 0056fb97  897b0c               mov dword ptr [ebx + 0xc], edi
// 0056fb9a  897b10               mov dword ptr [ebx + 0x10], edi
// 0056fb9d  897b14               mov dword ptr [ebx + 0x14], edi
// 0056fba0  6a04                 push 4
// 0056fba2  c644243408           mov byte ptr [esp + 0x34], 8
// 0056fba7  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0056fbad  e86e0d1300           call 0x6a0920
// 0056fbb2  83c404               add esp, 4
// 0056fbb5  3bc7                 cmp eax, edi
// 0056fbb7  7404                 je 0x56fbbd
// 0056fbb9  8918                 mov dword ptr [eax], ebx
// 0056fbbb  eb02                 jmp 0x56fbbf
// 0056fbbd  33c0                 xor eax, eax
// 0056fbbf  8903                 mov dword ptr [ebx], eax
// 0056fbc1  897b0c               mov dword ptr [ebx + 0xc], edi
// 0056fbc4  897b10               mov dword ptr [ebx + 0x10], edi
// 0056fbc7  897b14               mov dword ptr [ebx + 0x14], edi
// 0056fbca  6a04                 push 4
// 0056fbcc  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 0056fbd1  8d9ed0000000         lea ebx, [esi + 0xd0]
// 0056fbd7  e8440d1300           call 0x6a0920
// 0056fbdc  83c404               add esp, 4
// 0056fbdf  3bc7                 cmp eax, edi
// 0056fbe1  7404                 je 0x56fbe7
// 0056fbe3  8918                 mov dword ptr [eax], ebx
// 0056fbe5  eb02                 jmp 0x56fbe9
// 0056fbe7  33c0                 xor eax, eax
// 0056fbe9  8903                 mov dword ptr [ebx], eax
// 0056fbeb  897b0c               mov dword ptr [ebx + 0xc], edi
// 0056fbee  897b10               mov dword ptr [ebx + 0x10], edi
// 0056fbf1  897b14               mov dword ptr [ebx + 0x14], edi
// 0056fbf4  6804e58100           push 0x81e504
// 0056fbf9  6a01                 push 1
// 0056fbfb  8bce                 mov ecx, esi
// 0056fbfd  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 0056fc02  e829d90d00           call 0x64d530
// 0056fc07  6890f78200           push 0x82f790
// 0056fc0c  6a04                 push 4
// 0056fc0e  8bce                 mov ecx, esi
// 0056fc10  e81bd90d00           call 0x64d530
// 0056fc15  6888f78200           push 0x82f788
// 0056fc1a  6a02                 push 2
// 0056fc1c  8bce                 mov ecx, esi
// 0056fc1e  e80dd90d00           call 0x64d530
// 0056fc23  6880f78200           push 0x82f780
// 0056fc28  6a05                 push 5
// 0056fc2a  8bce                 mov ecx, esi
// 0056fc2c  e8ffd80d00           call 0x64d530
// 0056fc31  6878f78200           push 0x82f778
// 0056fc36  57                   push edi
// 0056fc37  8bce                 mov ecx, esi
// 0056fc39  e8f2d80d00           call 0x64d530
// 0056fc3e  68fce48100           push 0x81e4fc
// 0056fc43  6a03                 push 3
// 0056fc45  8bce                 mov ecx, esi
// 0056fc47  e8e4d80d00           call 0x64d530
// 0056fc4c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056fc50  5f                   pop edi
// 0056fc51  8bc6                 mov eax, esi
// 0056fc53  5e                   pop esi
// 0056fc54  5b                   pop ebx
// 0056fc55  64890d00000000       mov dword ptr fs:[0], ecx
// 0056fc5c  83c428               add esp, 0x28
// 0056fc5f  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4NormalId@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
