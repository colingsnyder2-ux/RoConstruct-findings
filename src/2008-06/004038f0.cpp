// from server: 65% by colin
// roc 2008-06 004038f0  unit: ATL::CRegObject  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004038f0
//
// 004038f0  55                   push ebp
// 004038f1  8bec                 mov ebp, esp
// 004038f3  6aff                 push -1
// 004038f5  6850cc7b00           push 0x7bcc50
// 004038fa  64a100000000         mov eax, dword ptr fs:[0]
// 00403900  50                   push eax
// 00403901  64892500000000       mov dword ptr fs:[0], esp
// 00403908  83ec08               sub esp, 8
// 0040390b  53                   push ebx
// 0040390c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040390f  56                   push esi
// 00403910  57                   push edi
// 00403911  8965f0               mov dword ptr [ebp - 0x10], esp
// 00403914  85db                 test ebx, ebx
// 00403916  7518                 jne 0x403930
// 00403918  b857000780           mov eax, 0x80070057
// 0040391d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00403920  64890d00000000       mov dword ptr fs:[0], ecx
// 00403927  5f                   pop edi
// 00403928  5e                   pop esi
// 00403929  5b                   pop ebx
// 0040392a  8be5                 mov esp, ebp
// 0040392c  5d                   pop ebp
// 0040392d  c20c00               ret 0xc
// 00403930  6a0c                 push 0xc
// 00403932  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00403939  e8e2cf2900           call 0x6a0920
// 0040393e  8bf0                 mov esi, eax
// 00403940  83c404               add esp, 4
// 00403943  85f6                 test esi, esi
// 00403945  7526                 jne 0x40396d
// 00403947  b80e000780           mov eax, 0x8007000e
// 0040394c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040394f  64890d00000000       mov dword ptr fs:[0], ecx
// 00403956  5f                   pop edi
// 00403957  5e                   pop esi
// 00403958  5b                   pop ebx
// 00403959  8be5                 mov esp, ebp
// 0040395b  5d                   pop ebp
// 0040395c  c20c00               ret 0xc
// 0040395f  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00403962  e8e9cf2900           call 0x6a0950
// 00403967  b847394000           mov eax, 0x403947
// 0040396c  c3                   ret 
// 0040396d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00403970  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00403973  8d7b0c               lea edi, [ebx + 0xc]
// 00403976  57                   push edi
// 00403977  8906                 mov dword ptr [esi], eax
// 00403979  894e04               mov dword ptr [esi + 4], ecx
// 0040397c  ff15d4228000         call dword ptr [0x8022d4]
// 00403982  8b5308               mov edx, dword ptr [ebx + 8]
// 00403985  895608               mov dword ptr [esi + 8], edx
// 00403988  57                   push edi
// 00403989  c7450800000000       mov dword ptr [ebp + 8], 0
// 00403990  897308               mov dword ptr [ebx + 8], esi
// 00403993  ff15f4218000         call dword ptr [0x8021f4]
// 00403999  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040399c  8b4508               mov eax, dword ptr [ebp + 8]
// 0040399f  5f                   pop edi
// 004039a0  5e                   pop esi
// 004039a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004039a8  5b                   pop ebx
// 004039a9  8be5                 mov esp, ebp
// 004039ab  5d                   pop ebp
// 004039ac  c20c00               ret 0xc

// from server: 0% by colin
// from server: 86% by colin
// roc 2008-06 004038f0  unit: ATL::CRegObject  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004038f0
//
// 004038f0  55                   push ebp
// 004038f1  8bec                 mov ebp, esp
// 004038f3  6aff                 push -1
// 004038f5  6850cc7b00           push 0x7bcc50
// 004038fa  64a100000000         mov eax, dword ptr fs:[0]
// 00403900  50                   push eax
// 00403901  64892500000000       mov dword ptr fs:[0], esp
// 00403908  83ec08               sub esp, 8
// 0040390b  53                   push ebx
// 0040390c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040390f  56                   push esi
// 00403910  57                   push edi
// 00403911  8965f0               mov dword ptr [ebp - 0x10], esp
// 00403914  85db                 test ebx, ebx
// 00403916  7518                 jne 0x403930
// 00403918  b857000780           mov eax, 0x80070057
// 0040391d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00403920  64890d00000000       mov dword ptr fs:[0], ecx
// 00403927  5f                   pop edi
// 00403928  5e                   pop esi
// 00403929  5b                   pop ebx
// 0040392a  8be5                 mov esp, ebp
// 0040392c  5d                   pop ebp
// 0040392d  c20c00               ret 0xc
// 00403930  6a0c                 push 0xc
// 00403932  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00403939  e8e2cf2900           call 0x6a0920
// 0040393e  8bf0                 mov esi, eax
// 00403940  83c404               add esp, 4
// 00403943  85f6                 test esi, esi
// 00403945  7526                 jne 0x40396d

// from server: 73% by king_originala
void* __cdecl operator new(unsigned int);

long __stdcall f(void* value, void* arg2, void* arg3)
{
    if (!value)
        return (long)0x80070057UL;

    try
    {
        void* allocation = operator new(12);
        if (!allocation)
            return (long)0x8007000EUL;
        return (long)allocation;
    }
    catch (...)
    {
        return (long)0x8007000EUL;
    }
}
