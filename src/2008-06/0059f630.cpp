// roc 2008-06 0059f630  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f630
//
// 0059f630  6aff                 push -1
// 0059f632  68c98e7d00           push 0x7d8ec9
// 0059f637  64a100000000         mov eax, dword ptr fs:[0]
// 0059f63d  50                   push eax
// 0059f63e  64892500000000       mov dword ptr fs:[0], esp
// 0059f645  83ec1c               sub esp, 0x1c
// 0059f648  53                   push ebx
// 0059f649  56                   push esi
// 0059f64a  57                   push edi
// 0059f64b  6800b49400           push 0x94b400
// 0059f650  8bf1                 mov esi, ecx
// 0059f652  6894338300           push 0x833394
// 0059f657  8974242c             mov dword ptr [esp + 0x2c], esi
// 0059f65b  e830cffcff           call 0x56c590
// 0059f660  8d442423             lea eax, [esp + 0x23]
// 0059f664  50                   push eax
// 0059f665  8d542427             lea edx, [esp + 0x27]
// 0059f669  33ff                 xor edi, edi
// 0059f66b  8d4e30               lea ecx, [esi + 0x30]
// 0059f66e  52                   push edx
// 0059f66f  897c2438             mov dword ptr [esp + 0x38], edi
// 0059f673  c7065c338300         mov dword ptr [esi], 0x83335c
// 0059f679  e8926aeaff           call 0x446110
// 0059f67e  8d442423             lea eax, [esp + 0x23]
// 0059f682  50                   push eax
// 0059f683  8d542427             lea edx, [esp + 0x27]
// 0059f687  8d4e50               lea ecx, [esi + 0x50]
// 0059f68a  52                   push edx
// 0059f68b  c644243801           mov byte ptr [esp + 0x38], 1
// 0059f690  e87b6aeaff           call 0x446110
// 0059f695  6a04                 push 4
// 0059f697  c644243402           mov byte ptr [esp + 0x34], 2
// 0059f69c  8d5e70               lea ebx, [esi + 0x70]
// 0059f69f  e87c121000           call 0x6a0920
// 0059f6a4  83c404               add esp, 4
// 0059f6a7  3bc7                 cmp eax, edi
// 0059f6a9  7404                 je 0x59f6af
// 0059f6ab  8918                 mov dword ptr [eax], ebx
// 0059f6ad  eb02                 jmp 0x59f6b1
// 0059f6af  33c0                 xor eax, eax
// 0059f6b1  8903                 mov dword ptr [ebx], eax
// 0059f6b3  897b0c               mov dword ptr [ebx + 0xc], edi
// 0059f6b6  897b10               mov dword ptr [ebx + 0x10], edi
// 0059f6b9  897b14               mov dword ptr [ebx + 0x14], edi
// 0059f6bc  6a04                 push 4
// 0059f6be  c644243404           mov byte ptr [esp + 0x34], 4
// 0059f6c3  8d9e88000000         lea ebx, [esi + 0x88]
// 0059f6c9  e852121000           call 0x6a0920
// 0059f6ce  83c404               add esp, 4
// 0059f6d1  3bc7                 cmp eax, edi
// 0059f6d3  7404                 je 0x59f6d9
// 0059f6d5  8918                 mov dword ptr [eax], ebx
// 0059f6d7  eb02                 jmp 0x59f6db
// 0059f6d9  33c0                 xor eax, eax
// 0059f6db  8903                 mov dword ptr [ebx], eax
// 0059f6dd  897b0c               mov dword ptr [ebx + 0xc], edi
// 0059f6e0  897b10               mov dword ptr [ebx + 0x10], edi
// 0059f6e3  897b14               mov dword ptr [ebx + 0x14], edi
// 0059f6e6  6a04                 push 4
// 0059f6e8  c644243406           mov byte ptr [esp + 0x34], 6
// 0059f6ed  8d9ea0000000         lea ebx, [esi + 0xa0]
// 0059f6f3  e828121000           call 0x6a0920
// 0059f6f8  83c404               add esp, 4
// 0059f6fb  3bc7                 cmp eax, edi
// 0059f6fd  7404                 je 0x59f703
// 0059f6ff  8918                 mov dword ptr [eax], ebx
// 0059f701  eb02                 jmp 0x59f705
// 0059f703  33c0                 xor eax, eax
// 0059f705  8903                 mov dword ptr [ebx], eax
// 0059f707  897b0c               mov dword ptr [ebx + 0xc], edi
// 0059f70a  897b10               mov dword ptr [ebx + 0x10], edi
// 0059f70d  897b14               mov dword ptr [ebx + 0x14], edi
// 0059f710  6a04                 push 4
// 0059f712  c644243408           mov byte ptr [esp + 0x34], 8
// 0059f717  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0059f71d  e8fe111000           call 0x6a0920
// 0059f722  83c404               add esp, 4
// 0059f725  3bc7                 cmp eax, edi
// 0059f727  7404                 je 0x59f72d
// 0059f729  8918                 mov dword ptr [eax], ebx
// 0059f72b  eb02                 jmp 0x59f72f
// 0059f72d  33c0                 xor eax, eax
// 0059f72f  8903                 mov dword ptr [ebx], eax
// 0059f731  897b0c               mov dword ptr [ebx + 0xc], edi
// 0059f734  897b10               mov dword ptr [ebx + 0x10], edi
// 0059f737  897b14               mov dword ptr [ebx + 0x14], edi
// 0059f73a  6a04                 push 4
// 0059f73c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 0059f741  8d9ed0000000         lea ebx, [esi + 0xd0]
// 0059f747  e8d4111000           call 0x6a0920
// 0059f74c  83c404               add esp, 4
// 0059f74f  3bc7                 cmp eax, edi
// 0059f751  7404                 je 0x59f757
// 0059f753  8918                 mov dword ptr [eax], ebx
// 0059f755  eb02                 jmp 0x59f759
// 0059f757  33c0                 xor eax, eax
// 0059f759  8903                 mov dword ptr [ebx], eax
// 0059f75b  897b0c               mov dword ptr [ebx + 0xc], edi
// 0059f75e  897b10               mov dword ptr [ebx + 0x10], edi
// 0059f761  897b14               mov dword ptr [ebx + 0x14], edi
// 0059f764  688c338300           push 0x83338c
// 0059f769  57                   push edi
// 0059f76a  8bce                 mov ecx, esi
// 0059f76c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 0059f771  e8badd0a00           call 0x64d530
// 0059f776  681c2a8300           push 0x832a1c
// 0059f77b  6a01                 push 1
// 0059f77d  8bce                 mov ecx, esi
// 0059f77f  e8acdd0a00           call 0x64d530
// 0059f784  6884338300           push 0x833384
// 0059f789  6a02                 push 2
// 0059f78b  8bce                 mov ecx, esi
// 0059f78d  e89edd0a00           call 0x64d530
// 0059f792  68dc2d8300           push 0x832ddc
// 0059f797  6a06                 push 6
// 0059f799  8bce                 mov ecx, esi
// 0059f79b  e890dd0a00           call 0x64d530
// 0059f7a0  687c338300           push 0x83337c
// 0059f7a5  6a03                 push 3
// 0059f7a7  8bce                 mov ecx, esi
// 0059f7a9  e882dd0a00           call 0x64d530
// 0059f7ae  6870338300           push 0x833370
// 0059f7b3  6a04                 push 4
// 0059f7b5  8bce                 mov ecx, esi
// 0059f7b7  e874dd0a00           call 0x64d530
// 0059f7bc  6864338300           push 0x833364
// 0059f7c1  6a05                 push 5
// 0059f7c3  8bce                 mov ecx, esi
// 0059f7c5  e866dd0a00           call 0x64d530
// 0059f7ca  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059f7ce  5f                   pop edi
// 0059f7cf  8bc6                 mov eax, esi
// 0059f7d1  5e                   pop esi
// 0059f7d2  5b                   pop ebx
// 0059f7d3  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f7da  83c428               add esp, 0x28
// 0059f7dd  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4MeshType@SpecialShape@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
