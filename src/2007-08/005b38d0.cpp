// roc 2007-08 005b38d0  unit: RBX::Assembly  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b38d0
//
// 005b38d0  8b442408             mov eax, dword ptr [esp + 8]
// 005b38d4  57                   push edi
// 005b38d5  8b7c2408             mov edi, dword ptr [esp + 8]
// 005b38d9  3bf8                 cmp edi, eax
// 005b38db  0f8491000000         je 0x5b3972
// 005b38e1  56                   push esi
// 005b38e2  8d7704               lea esi, [edi + 4]
// 005b38e5  3bf0                 cmp esi, eax
// 005b38e7  0f8484000000         je 0x5b3971
// 005b38ed  53                   push ebx
// 005b38ee  55                   push ebp
// 005b38ef  8d6e04               lea ebp, [esi + 4]
// 005b38f2  8b07                 mov eax, dword ptr [edi]
// 005b38f4  8b0e                 mov ecx, dword ptr [esi]
// 005b38f6  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005b38fa  50                   push eax
// 005b38fb  51                   push ecx
// 005b38fc  ffd3                 call ebx
// 005b38fe  83c408               add esp, 8
// 005b3901  84c0                 test al, al
// 005b3903  7419                 je 0x5b391e
// 005b3905  3bfe                 cmp edi, esi
// 005b3907  745a                 je 0x5b3963
// 005b3909  3bf5                 cmp esi, ebp
// 005b390b  7456                 je 0x5b3963
// 005b390d  6a00                 push 0
// 005b390f  6a00                 push 0
// 005b3911  55                   push ebp
// 005b3912  56                   push esi
// 005b3913  57                   push edi
// 005b3914  e80794f4ff           call 0x4fcd20
// 005b3919  83c414               add esp, 0x14
// 005b391c  eb45                 jmp 0x5b3963
// 005b391e  8b55f8               mov edx, dword ptr [ebp - 8]
// 005b3921  8b06                 mov eax, dword ptr [esi]
// 005b3923  8d7df8               lea edi, [ebp - 8]
// 005b3926  52                   push edx
// 005b3927  50                   push eax
// 005b3928  ffd3                 call ebx
// 005b392a  83c408               add esp, 8
// 005b392d  84c0                 test al, al
// 005b392f  742e                 je 0x5b395f
// 005b3931  8b4ffc               mov ecx, dword ptr [edi - 4]
// 005b3934  8b16                 mov edx, dword ptr [esi]
// 005b3936  8bdf                 mov ebx, edi
// 005b3938  83ef04               sub edi, 4
// 005b393b  51                   push ecx
// 005b393c  52                   push edx
// 005b393d  ff542424             call dword ptr [esp + 0x24]
// 005b3941  83c408               add esp, 8
// 005b3944  84c0                 test al, al
// 005b3946  75e9                 jne 0x5b3931
// 005b3948  3bde                 cmp ebx, esi
// 005b394a  7413                 je 0x5b395f
// 005b394c  3bf5                 cmp esi, ebp
// 005b394e  740f                 je 0x5b395f
// 005b3950  6a00                 push 0
// 005b3952  6a00                 push 0
// 005b3954  55                   push ebp
// 005b3955  56                   push esi
// 005b3956  53                   push ebx
// 005b3957  e8c493f4ff           call 0x4fcd20
// 005b395c  83c414               add esp, 0x14
// 005b395f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005b3963  83c604               add esi, 4
// 005b3966  83c504               add ebp, 4
// 005b3969  3b742418             cmp esi, dword ptr [esp + 0x18]
// 005b396d  7583                 jne 0x5b38f2
// 005b396f  5d                   pop ebp
// 005b3970  5b                   pop ebx
// 005b3971  5e                   pop esi
// 005b3972  5f                   pop edi
// 005b3973  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Insertion_sort@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
