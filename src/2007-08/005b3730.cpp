// roc 2007-08 005b3730  unit: RBX::Assembly  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3730
//
// 005b3730  51                   push ecx
// 005b3731  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b3735  53                   push ebx
// 005b3736  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005b373a  55                   push ebp
// 005b373b  56                   push esi
// 005b373c  57                   push edi
// 005b373d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005b3741  8bc1                 mov eax, ecx
// 005b3743  2bc7                 sub eax, edi
// 005b3745  c1f802               sar eax, 2
// 005b3748  99                   cdq 
// 005b3749  2bc2                 sub eax, edx
// 005b374b  53                   push ebx
// 005b374c  d1f8                 sar eax, 1
// 005b374e  83c1fc               add ecx, -4
// 005b3751  51                   push ecx
// 005b3752  8d3487               lea esi, [edi + eax*4]
// 005b3755  56                   push esi
// 005b3756  57                   push edi
// 005b3757  e8c4fbffff           call 0x5b3320
// 005b375c  83c410               add esp, 0x10
// 005b375f  3bfe                 cmp edi, esi
// 005b3761  8d6e04               lea ebp, [esi + 4]
// 005b3764  7327                 jae 0x5b378d
// 005b3766  8b06                 mov eax, dword ptr [esi]
// 005b3768  8b4efc               mov ecx, dword ptr [esi - 4]
// 005b376b  50                   push eax
// 005b376c  51                   push ecx
// 005b376d  ffd3                 call ebx
// 005b376f  83c408               add esp, 8
// 005b3772  84c0                 test al, al
// 005b3774  7517                 jne 0x5b378d
// 005b3776  8b56fc               mov edx, dword ptr [esi - 4]
// 005b3779  8b06                 mov eax, dword ptr [esi]
// 005b377b  52                   push edx
// 005b377c  50                   push eax
// 005b377d  ffd3                 call ebx
// 005b377f  83c408               add esp, 8
// 005b3782  84c0                 test al, al
// 005b3784  7507                 jne 0x5b378d
// 005b3786  83c6fc               add esi, -4
// 005b3789  3bfe                 cmp edi, esi
// 005b378b  72d9                 jb 0x5b3766
// 005b378d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005b3791  3bef                 cmp ebp, edi
// 005b3793  7327                 jae 0x5b37bc
// 005b3795  8b0e                 mov ecx, dword ptr [esi]
// 005b3797  8b5500               mov edx, dword ptr [ebp]
// 005b379a  51                   push ecx
// 005b379b  52                   push edx
// 005b379c  ffd3                 call ebx
// 005b379e  83c408               add esp, 8
// 005b37a1  84c0                 test al, al
// 005b37a3  7517                 jne 0x5b37bc
// 005b37a5  8b4500               mov eax, dword ptr [ebp]
// 005b37a8  8b0e                 mov ecx, dword ptr [esi]
// 005b37aa  50                   push eax
// 005b37ab  51                   push ecx
// 005b37ac  ffd3                 call ebx
// 005b37ae  83c408               add esp, 8
// 005b37b1  84c0                 test al, al
// 005b37b3  7507                 jne 0x5b37bc
// 005b37b5  83c504               add ebp, 4
// 005b37b8  3bef                 cmp ebp, edi
// 005b37ba  72d9                 jb 0x5b3795
// 005b37bc  8bfd                 mov edi, ebp
// 005b37be  8bde                 mov ebx, esi
// 005b37c0  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005b37c4  7338                 jae 0x5b37fe
// 005b37c6  8b17                 mov edx, dword ptr [edi]
// 005b37c8  8b06                 mov eax, dword ptr [esi]
// 005b37ca  52                   push edx
// 005b37cb  50                   push eax
// 005b37cc  ff54242c             call dword ptr [esp + 0x2c]
// 005b37d0  83c408               add esp, 8
// 005b37d3  84c0                 test al, al
// 005b37d5  751e                 jne 0x5b37f5
// 005b37d7  8b0e                 mov ecx, dword ptr [esi]
// 005b37d9  8b17                 mov edx, dword ptr [edi]
// 005b37db  51                   push ecx
// 005b37dc  52                   push edx
// 005b37dd  ff54242c             call dword ptr [esp + 0x2c]
// 005b37e1  83c408               add esp, 8
// 005b37e4  84c0                 test al, al
// 005b37e6  7516                 jne 0x5b37fe
// 005b37e8  8b17                 mov edx, dword ptr [edi]
// 005b37ea  8bc5                 mov eax, ebp
// 005b37ec  8b08                 mov ecx, dword ptr [eax]
// 005b37ee  8910                 mov dword ptr [eax], edx
// 005b37f0  83c504               add ebp, 4
// 005b37f3  890f                 mov dword ptr [edi], ecx
// 005b37f5  83c704               add edi, 4
// 005b37f8  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005b37fc  72c8                 jb 0x5b37c6
// 005b37fe  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005b3802  763f                 jbe 0x5b3843
// 005b3804  8b06                 mov eax, dword ptr [esi]
// 005b3806  8b4bfc               mov ecx, dword ptr [ebx - 4]
// 005b3809  50                   push eax
// 005b380a  51                   push ecx
// 005b380b  ff54242c             call dword ptr [esp + 0x2c]
// 005b380f  83c408               add esp, 8
// 005b3812  84c0                 test al, al
// 005b3814  7520                 jne 0x5b3836
// 005b3816  8b53fc               mov edx, dword ptr [ebx - 4]
// 005b3819  8b06                 mov eax, dword ptr [esi]
// 005b381b  52                   push edx
// 005b381c  50                   push eax
// 005b381d  ff54242c             call dword ptr [esp + 0x2c]
// 005b3821  83c408               add esp, 8
// 005b3824  84c0                 test al, al
// 005b3826  7517                 jne 0x5b383f
// 005b3828  8b4bfc               mov ecx, dword ptr [ebx - 4]
// 005b382b  8b46fc               mov eax, dword ptr [esi - 4]
// 005b382e  83ee04               sub esi, 4
// 005b3831  890e                 mov dword ptr [esi], ecx
// 005b3833  8943fc               mov dword ptr [ebx - 4], eax
// 005b3836  83c3fc               add ebx, -4
// 005b3839  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 005b383d  72c5                 jb 0x5b3804
// 005b383f  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005b3843  7536                 jne 0x5b387b
// 005b3845  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005b3849  746a                 je 0x5b38b5
// 005b384b  3bef                 cmp ebp, edi
// 005b384d  740a                 je 0x5b3859
// 005b384f  8b5500               mov edx, dword ptr [ebp]
// 005b3852  8b06                 mov eax, dword ptr [esi]
// 005b3854  8916                 mov dword ptr [esi], edx
// 005b3856  894500               mov dword ptr [ebp], eax
// 005b3859  8bce                 mov ecx, esi
// 005b385b  8b11                 mov edx, dword ptr [ecx]
// 005b385d  8bc7                 mov eax, edi
// 005b385f  89542410             mov dword ptr [esp + 0x10], edx
// 005b3863  8b10                 mov edx, dword ptr [eax]
// 005b3865  8911                 mov dword ptr [ecx], edx
// 005b3867  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b386b  83c504               add ebp, 4
// 005b386e  83c604               add esi, 4
// 005b3871  83c704               add edi, 4
// 005b3874  8908                 mov dword ptr [eax], ecx
// 005b3876  e945ffffff           jmp 0x5b37c0
// 005b387b  83eb04               sub ebx, 4
// 005b387e  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005b3882  7521                 jne 0x5b38a5
// 005b3884  83ee04               sub esi, 4
// 005b3887  3bde                 cmp ebx, esi
// 005b3889  7408                 je 0x5b3893
// 005b388b  8b16                 mov edx, dword ptr [esi]
// 005b388d  8b03                 mov eax, dword ptr [ebx]
// 005b388f  8913                 mov dword ptr [ebx], edx
// 005b3891  8906                 mov dword ptr [esi], eax
// 005b3893  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b3896  8b06                 mov eax, dword ptr [esi]
// 005b3898  83ed04               sub ebp, 4
// 005b389b  890e                 mov dword ptr [esi], ecx
// 005b389d  894500               mov dword ptr [ebp], eax
// 005b38a0  e91bffffff           jmp 0x5b37c0
// 005b38a5  8b07                 mov eax, dword ptr [edi]
// 005b38a7  8b13                 mov edx, dword ptr [ebx]
// 005b38a9  8917                 mov dword ptr [edi], edx
// 005b38ab  8903                 mov dword ptr [ebx], eax
// 005b38ad  83c704               add edi, 4
// 005b38b0  e90bffffff           jmp 0x5b37c0
// 005b38b5  8b442418             mov eax, dword ptr [esp + 0x18]
// 005b38b9  5f                   pop edi
// 005b38ba  8930                 mov dword ptr [eax], esi
// 005b38bc  5e                   pop esi
// 005b38bd  896804               mov dword ptr [eax + 4], ebp
// 005b38c0  5d                   pop ebp
// 005b38c1  5b                   pop ebx
// 005b38c2  59                   pop ecx
// 005b38c3  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Unguarded_partition@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YA?AU?$pair@PAPAVMotorJoint@RBX@@PAPAV12@@0@PAPAVMotorJoint@RBX@@0P6A_NPBV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
