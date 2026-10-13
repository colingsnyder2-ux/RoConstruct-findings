// from server: 86% by colin
// roc 2008-06 004038f0  unit: ATL::CRegObject  size: 111 bytes
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
        return 0;
    }
    catch (...)
    {
        return (long)0x8007000EUL;
    }
}
