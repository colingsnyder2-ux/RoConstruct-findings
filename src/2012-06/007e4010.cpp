// roc 2012-06 007e4010  unit: RBX::Assembly  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e4010
//
// 007e4010  51                   push ecx
// 007e4011  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e4015  56                   push esi
// 007e4016  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e401a  3bf0                 cmp esi, eax
// 007e401c  0f849a000000         je 0x7e40bc
// 007e4022  53                   push ebx
// 007e4023  8d5e04               lea ebx, [esi + 4]
// 007e4026  3bd8                 cmp ebx, eax
// 007e4028  0f848d000000         je 0x7e40bb
// 007e402e  b804000000           mov eax, 4
// 007e4033  2bc6                 sub eax, esi
// 007e4035  55                   push ebp
// 007e4036  8944240c             mov dword ptr [esp + 0xc], eax
// 007e403a  57                   push edi
// 007e403b  eb03                 jmp 0x7e4040
// 007e403d  8d4900               lea ecx, [ecx]
// 007e4040  8b06                 mov eax, dword ptr [esi]
// 007e4042  8b2b                 mov ebp, dword ptr [ebx]
// 007e4044  50                   push eax
// 007e4045  55                   push ebp
// 007e4046  8bfb                 mov edi, ebx
// 007e4048  ff542428             call dword ptr [esp + 0x28]
// 007e404c  83c408               add esp, 8
// 007e404f  84c0                 test al, al
// 007e4051  742b                 je 0x7e407e
// 007e4053  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e4057  8d4419fc             lea eax, [ecx + ebx - 4]
// 007e405b  c1f802               sar eax, 2
// 007e405e  85c0                 test eax, eax
// 007e4060  7e18                 jle 0x7e407a
// 007e4062  03c0                 add eax, eax
// 007e4064  03c0                 add eax, eax
// 007e4066  50                   push eax
// 007e4067  8bd3                 mov edx, ebx
// 007e4069  56                   push esi
// 007e406a  2bd0                 sub edx, eax
// 007e406c  50                   push eax
// 007e406d  83c204               add edx, 4
// 007e4070  52                   push edx
// 007e4071  ff15c02ab200         call dword ptr [0xb22ac0]
// 007e4077  83c410               add esp, 0x10
// 007e407a  892e                 mov dword ptr [esi], ebp
// 007e407c  eb32                 jmp 0x7e40b0
// 007e407e  8b43fc               mov eax, dword ptr [ebx - 4]
// 007e4081  8d73fc               lea esi, [ebx - 4]
// 007e4084  50                   push eax
// 007e4085  55                   push ebp
// 007e4086  ff542428             call dword ptr [esp + 0x28]
// 007e408a  83c408               add esp, 8
// 007e408d  84c0                 test al, al
// 007e408f  7419                 je 0x7e40aa
// 007e4091  8b0e                 mov ecx, dword ptr [esi]
// 007e4093  890f                 mov dword ptr [edi], ecx
// 007e4095  8b56fc               mov edx, dword ptr [esi - 4]
// 007e4098  8bfe                 mov edi, esi
// 007e409a  83ee04               sub esi, 4
// 007e409d  52                   push edx
// 007e409e  55                   push ebp
// 007e409f  ff542428             call dword ptr [esp + 0x28]
// 007e40a3  83c408               add esp, 8
// 007e40a6  84c0                 test al, al
// 007e40a8  75e7                 jne 0x7e4091
// 007e40aa  8b742418             mov esi, dword ptr [esp + 0x18]
// 007e40ae  892f                 mov dword ptr [edi], ebp
// 007e40b0  83c304               add ebx, 4
// 007e40b3  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 007e40b7  7587                 jne 0x7e4040
// 007e40b9  5f                   pop edi
// 007e40ba  5d                   pop ebp
// 007e40bb  5b                   pop ebx
// 007e40bc  5e                   pop esi
// 007e40bd  59                   pop ecx
// 007e40be  c3                   ret 
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$_Insertion_sort1@PAPAVAssembly@RBX@@P6A_NPBV12@0@ZPAV12@@std@@YAXPAPAVAssembly@RBX@@0P6A_NPBV12@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
