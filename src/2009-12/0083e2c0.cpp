// roc 2009-12 0083e2c0  unit: CXTPCustomizeSheet  size: 809 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083e2c0
//
// 0083e2c0  6aff                 push -1
// 0083e2c2  6859c99500           push 0x95c959
// 0083e2c7  64a100000000         mov eax, dword ptr fs:[0]
// 0083e2cd  50                   push eax
// 0083e2ce  83ec48               sub esp, 0x48
// 0083e2d1  53                   push ebx
// 0083e2d2  55                   push ebp
// 0083e2d3  56                   push esi
// 0083e2d4  57                   push edi
// 0083e2d5  a10052b600           mov eax, dword ptr [0xb65200]
// 0083e2da  33c4                 xor eax, esp
// 0083e2dc  50                   push eax
// 0083e2dd  8d44245c             lea eax, [esp + 0x5c]
// 0083e2e1  64a300000000         mov dword ptr fs:[0], eax
// 0083e2e7  8bf1                 mov esi, ecx
// 0083e2e9  bb64309a00           mov ebx, 0x9a3064
// 0083e2ee  33ff                 xor edi, edi
// 0083e2f0  895c2428             mov dword ptr [esp + 0x28], ebx
// 0083e2f4  897c242c             mov dword ptr [esp + 0x2c], edi
// 0083e2f8  897c2464             mov dword ptr [esp + 0x64], edi
// 0083e2fc  e89f050300           call 0x86e8a0
// 0083e301  8b10                 mov edx, dword ptr [eax]
// 0083e303  8b520c               mov edx, dword ptr [edx + 0xc]
// 0083e306  68a1230000           push 0x23a1
// 0083e30b  8d4c242c             lea ecx, [esp + 0x2c]
// 0083e30f  51                   push ecx
// 0083e310  8bc8                 mov ecx, eax
// 0083e312  ffd2                 call edx
// 0083e314  85c0                 test eax, eax
// 0083e316  7509                 jne 0x83e321
// 0083e318  895c2428             mov dword ptr [esp + 0x28], ebx
// 0083e31c  e9a3020000           jmp 0x83e5c4
// 0083e321  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0083e325  57                   push edi
// 0083e326  50                   push eax
// 0083e327  ff1548cc9800         call dword ptr [0x98cc48]
// 0083e32d  50                   push eax
// 0083e32e  e8b75bfbff           call 0x7f3eea
// 0083e333  8be8                 mov ebp, eax
// 0083e335  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0083e339  3bef                 cmp ebp, edi
// 0083e33b  74db                 je 0x83e318
// 0083e33d  57                   push edi
// 0083e33e  e84d360000           call 0x841990
// 0083e343  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083e349  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 0083e34f  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 0083e355  8988e4000000         mov dword ptr [eax + 0xe4], ecx
// 0083e35b  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 0083e361  89b208010000         mov dword ptr [edx + 0x108], esi
// 0083e367  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083e36d  83c404               add esp, 4
// 0083e370  e86b63fdff           call 0x8146e0
// 0083e375  8b1d0cb29800         mov ebx, dword ptr [0x98b20c]
// 0083e37b  8bf8                 mov edi, eax
// 0083e37d  8d4704               lea eax, [edi + 4]
// 0083e380  50                   push eax
// 0083e381  ffd3                 call ebx
// 0083e383  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0083e389  57                   push edi
// 0083e38a  e8d161fcff           call 0x804560
// 0083e38f  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0083e395  83c004               add eax, 4
// 0083e398  50                   push eax
// 0083e399  ffd3                 call ebx
// 0083e39b  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083e3a1  e8fa5ffdff           call 0x8143a0
// 0083e3a6  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0083e3ac  894178               mov dword ptr [ecx + 0x78], eax
// 0083e3af  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0083e3b5  51                   push ecx
// 0083e3b6  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0083e3bc  e81f62fcff           call 0x8045e0
// 0083e3c1  8b5504               mov edx, dword ptr [ebp + 4]
// 0083e3c4  33db                 xor ebx, ebx
// 0083e3c6  52                   push edx
// 0083e3c7  895c2418             mov dword ptr [esp + 0x18], ebx
// 0083e3cb  ff1540cc9800         call dword ptr [0x98cc40]
// 0083e3d1  85c0                 test eax, eax
// 0083e3d3  0f8ee3010000         jle 0x83e5bc
// 0083e3d9  8da42400000000       lea esp, [esp]
// 0083e3e0  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0083e3e3  33c0                 xor eax, eax
// 0083e3e5  89442438             mov dword ptr [esp + 0x38], eax
// 0083e3e9  8944243c             mov dword ptr [esp + 0x3c], eax
// 0083e3ed  89442440             mov dword ptr [esp + 0x40], eax
// 0083e3f1  89442444             mov dword ptr [esp + 0x44], eax
// 0083e3f5  89442448             mov dword ptr [esp + 0x48], eax
// 0083e3f9  8944244c             mov dword ptr [esp + 0x4c], eax
// 0083e3fd  89442450             mov dword ptr [esp + 0x50], eax
// 0083e401  89442454             mov dword ptr [esp + 0x54], eax
// 0083e405  89442458             mov dword ptr [esp + 0x58], eax
// 0083e409  8d442430             lea eax, [esp + 0x30]
// 0083e40d  50                   push eax
// 0083e40e  6a01                 push 1
// 0083e410  53                   push ebx
// 0083e411  51                   push ecx
// 0083e412  c74424402c000000     mov dword ptr [esp + 0x40], 0x2c
// 0083e41a  c744244411000000     mov dword ptr [esp + 0x44], 0x11
// 0083e422  ff15b4ca9800         call dword ptr [0x98cab4]
// 0083e428  8b5504               mov edx, dword ptr [ebp + 4]
// 0083e42b  53                   push ebx
// 0083e42c  52                   push edx
// 0083e42d  ff1544cc9800         call dword ptr [0x98cc44]
// 0083e433  8bf8                 mov edi, eax
// 0083e435  8d4c2418             lea ecx, [esp + 0x18]
// 0083e439  897c2420             mov dword ptr [esp + 0x20], edi
// 0083e43d  ff1574de9800         call dword ptr [0x98de74]
// 0083e443  6800040000           push 0x400
// 0083e448  8d44241c             lea eax, [esp + 0x1c]
// 0083e44c  50                   push eax
// 0083e44d  53                   push ebx
// 0083e44e  55                   push ebp
// 0083e44f  c644247401           mov byte ptr [esp + 0x74], 1
// 0083e454  e847040300           call 0x86e8a0
// 0083e459  8bc8                 mov ecx, eax
// 0083e45b  e880ff0200           call 0x86e3e0
// 0083e460  f744243800080000     test dword ptr [esp + 0x38], 0x800
// 0083e468  0f8529010000         jne 0x83e597
// 0083e46e  85ff                 test edi, edi
// 0083e470  0f8421010000         je 0x83e597
// 0083e476  81ffaa230000         cmp edi, 0x23aa
// 0083e47c  7577                 jne 0x83e4f5
// 0083e47e  6884010000           push 0x184
// 0083e483  e8d853fbff           call 0x7f3860
// 0083e488  83c404               add esp, 4
// 0083e48b  89442424             mov dword ptr [esp + 0x24], eax
// 0083e48f  c644246402           mov byte ptr [esp + 0x64], 2
// 0083e494  85c0                 test eax, eax
// 0083e496  740b                 je 0x83e4a3
// 0083e498  8bc8                 mov ecx, eax
// 0083e49a  e831c6ffff           call 0x83aad0
// 0083e49f  8bf8                 mov edi, eax
// 0083e4a1  eb02                 jmp 0x83e4a5
// 0083e4a3  33ff                 xor edi, edi
// 0083e4a5  685c020000           push 0x25c
// 0083e4aa  c644246801           mov byte ptr [esp + 0x68], 1
// 0083e4af  e8ac53fbff           call 0x7f3860
// 0083e4b4  83c404               add esp, 4
// 0083e4b7  89442424             mov dword ptr [esp + 0x24], eax
// 0083e4bb  c644246403           mov byte ptr [esp + 0x64], 3
// 0083e4c0  85c0                 test eax, eax
// 0083e4c2  740b                 je 0x83e4cf
// 0083e4c4  8bc8                 mov ecx, eax
// 0083e4c6  e8656a0000           call 0x844f30
// 0083e4cb  8be8                 mov ebp, eax
// 0083e4cd  eb02                 jmp 0x83e4d1
// 0083e4cf  33ed                 xor ebp, ebp
// 0083e4d1  55                   push ebp
// 0083e4d2  8bcf                 mov ecx, edi
// 0083e4d4  c644246801           mov byte ptr [esp + 0x68], 1
// 0083e4d9  c785d8000000aa230000 mov dword ptr [ebp + 0xd8], 0x23aa
// 0083e4e3  e868d1ffff           call 0x83b650
// 0083e4e8  8bcd                 mov ecx, ebp
// 0083e4ea  e8ed58fbff           call 0x7f3ddc
// 0083e4ef  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0083e4f3  eb57                 jmp 0x83e54c
// 0083e4f5  81ffa5230000         cmp edi, 0x23a5
// 0083e4fb  7523                 jne 0x83e520
// 0083e4fd  68b0010000           push 0x1b0
// 0083e502  e85953fbff           call 0x7f3860
// 0083e507  83c404               add esp, 4
// 0083e50a  89442424             mov dword ptr [esp + 0x24], eax
// 0083e50e  c644246404           mov byte ptr [esp + 0x64], 4
// 0083e513  85c0                 test eax, eax
// 0083e515  742c                 je 0x83e543
// 0083e517  8bc8                 mov ecx, eax
// 0083e519  e832f4ffff           call 0x83d950
// 0083e51e  eb25                 jmp 0x83e545
// 0083e520  6874010000           push 0x174
// 0083e525  e83653fbff           call 0x7f3860
// 0083e52a  83c404               add esp, 4
// 0083e52d  89442424             mov dword ptr [esp + 0x24], eax
// 0083e531  c644246405           mov byte ptr [esp + 0x64], 5
// 0083e536  85c0                 test eax, eax
// 0083e538  7409                 je 0x83e543
// 0083e53a  8bc8                 mov ecx, eax
// 0083e53c  e85ff4ffff           call 0x83d9a0
// 0083e541  eb02                 jmp 0x83e545
// 0083e543  33c0                 xor eax, eax
// 0083e545  8bf8                 mov edi, eax
// 0083e547  c644246401           mov byte ptr [esp + 0x64], 1
// 0083e54c  8d4c2418             lea ecx, [esp + 0x18]
// 0083e550  ff1580de9800         call dword ptr [0x98de80]
// 0083e556  50                   push eax
// 0083e557  8bcf                 mov ecx, edi
// 0083e559  e8d281fbff           call 0x7f6730
// 0083e55e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0083e562  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0083e568  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0083e56e  6a00                 push 0
// 0083e570  6aff                 push -1
// 0083e572  6a00                 push 0
// 0083e574  52                   push edx
// 0083e575  57                   push edi
// 0083e576  e8759a0000           call 0x847ff0
// 0083e57b  837c241400           cmp dword ptr [esp + 0x14], 0
// 0083e580  741d                 je 0x83e59f
// 0083e582  8b07                 mov eax, dword ptr [edi]
// 0083e584  8b5064               mov edx, dword ptr [eax + 0x64]
// 0083e587  6a01                 push 1
// 0083e589  8bcf                 mov ecx, edi
// 0083e58b  ffd2                 call edx
// 0083e58d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0083e595  eb08                 jmp 0x83e59f
// 0083e597  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0083e59f  8d4c2418             lea ecx, [esp + 0x18]
// 0083e5a3  ff15c0de9800         call dword ptr [0x98dec0]
// 0083e5a9  8b4504               mov eax, dword ptr [ebp + 4]
// 0083e5ac  50                   push eax
// 0083e5ad  43                   inc ebx
// 0083e5ae  ff1540cc9800         call dword ptr [0x98cc40]
// 0083e5b4  3bd8                 cmp ebx, eax
// 0083e5b6  0f8c24feffff         jl 0x83e3e0
// 0083e5bc  c744242864309a00     mov dword ptr [esp + 0x28], 0x9a3064
// 0083e5c4  8d4c2428             lea ecx, [esp + 0x28]
// 0083e5c8  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0083e5d0  e8fd5bfbff           call 0x7f41d2
// 0083e5d5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0083e5d9  64890d00000000       mov dword ptr fs:[0], ecx
// 0083e5e0  59                   pop ecx
// 0083e5e1  5f                   pop edi
// 0083e5e2  5e                   pop esi
// 0083e5e3  5d                   pop ebp
// 0083e5e4  5b                   pop ebx
// 0083e5e5  83c454               add esp, 0x54
// 0083e5e8  c3                   ret 
// copied from an identical function in another client (function ?CreateContextMenu@CXTPCustomizeSheet@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeSheet.cpp