// roc 2009-12 005fe890  unit: G3D::_internal::DialogTemplate  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe890
//
// 005fe890  53                   push ebx
// 005fe891  55                   push ebp
// 005fe892  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005fe896  56                   push esi
// 005fe897  57                   push edi
// 005fe898  8b3db8b79800         mov edi, dword ptr [0x98b7b8]
// 005fe89e  68b82f9c00           push 0x9c2fb8
// 005fe8a3  8bd8                 mov ebx, eax
// 005fe8a5  ffd7                 call edi
// 005fe8a7  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fe8ab  50                   push eax
// 005fe8ac  6830ea9b00           push 0x9bea30
// 005fe8b1  ffd7                 call edi
// 005fe8b3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005fe8b7  51                   push ecx
// 005fe8b8  6810389a00           push 0x9a3810
// 005fe8bd  ffd7                 call edi
// 005fe8bf  83c414               add esp, 0x14
// 005fe8c2  83fb0a               cmp ebx, 0xa
// 005fe8c5  7e05                 jle 0x5fe8cc
// 005fe8c7  bb0a000000           mov ebx, 0xa
// 005fe8cc  83ceff               or esi, 0xffffffff
// 005fe8cf  83fb01               cmp ebx, 1
// 005fe8d2  7e7f                 jle 0x5fe953
// 005fe8d4  681cd89a00           push 0x9ad81c
// 005fe8d9  ffd7                 call edi
// 005fe8db  689c2f9c00           push 0x9c2f9c
// 005fe8e0  ffd7                 call edi
// 005fe8e2  83c408               add esp, 8
// 005fe8e5  85f6                 test esi, esi
// 005fe8e7  7c08                 jl 0x5fe8f1
// 005fe8e9  3bf3                 cmp esi, ebx
// 005fe8eb  0f8c86000000         jl 0x5fe977
// 005fe8f1  681cd89a00           push 0x9ad81c
// 005fe8f6  ffd7                 call edi
// 005fe8f8  83c404               add esp, 4
// 005fe8fb  33f6                 xor esi, esi
// 005fe8fd  85db                 test ebx, ebx
// 005fe8ff  7e27                 jle 0x5fe928
// 005fe901  83fb03               cmp ebx, 3
// 005fe904  7f0d                 jg 0x5fe913
// 005fe906  8b54b500             mov edx, dword ptr [ebp + esi*4]
// 005fe90a  52                   push edx
// 005fe90b  56                   push esi
// 005fe90c  68902f9c00           push 0x9c2f90
// 005fe911  eb0b                 jmp 0x5fe91e
// 005fe913  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 005fe917  50                   push eax
// 005fe918  56                   push esi
// 005fe919  68842f9c00           push 0x9c2f84
// 005fe91e  ffd7                 call edi
// 005fe920  46                   inc esi
// 005fe921  83c40c               add esp, 0xc
// 005fe924  3bf3                 cmp esi, ebx
// 005fe926  7cd9                 jl 0x5fe901
// 005fe928  68802f9c00           push 0x9c2f80
// 005fe92d  ffd7                 call edi
// 005fe92f  83c404               add esp, 4
// 005fe932  ff15b0b89800         call dword ptr [0x98b8b0]
// 005fe938  8bf0                 mov esi, eax
// 005fe93a  83ee30               sub esi, 0x30
// 005fe93d  780c                 js 0x5fe94b
// 005fe93f  3bf3                 cmp esi, ebx
// 005fe941  7d08                 jge 0x5fe94b
// 005fe943  56                   push esi
// 005fe944  68d4689a00           push 0x9a68d4
// 005fe949  eb95                 jmp 0x5fe8e0
// 005fe94b  56                   push esi
// 005fe94c  68642f9c00           push 0x9c2f64
// 005fe951  eb8d                 jmp 0x5fe8e0
// 005fe953  7510                 jne 0x5fe965
// 005fe955  8b4d00               mov ecx, dword ptr [ebp]
// 005fe958  51                   push ecx
// 005fe959  68482f9c00           push 0x9c2f48
// 005fe95e  ffd7                 call edi
// 005fe960  83c408               add esp, 8
// 005fe963  eb0a                 jmp 0x5fe96f
// 005fe965  68342f9c00           push 0x9c2f34
// 005fe96a  ffd7                 call edi
// 005fe96c  83c404               add esp, 4
// 005fe96f  ff15b0b89800         call dword ptr [0x98b8b0]
// 005fe975  33f6                 xor esi, esi
// 005fe977  68b82f9c00           push 0x9c2fb8
// 005fe97c  ffd7                 call edi
// 005fe97e  83c404               add esp, 4
// 005fe981  5f                   pop edi
// 005fe982  8bc6                 mov eax, esi
// 005fe984  5e                   pop esi
// 005fe985  5d                   pop ebp
// 005fe986  5b                   pop ebx
// 005fe987  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?textPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
