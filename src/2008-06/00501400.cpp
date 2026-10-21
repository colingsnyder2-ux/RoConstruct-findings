// from server: 67% by EspClaude
// from server: 66% by colin
// roc 2008-06 00501400  unit: boost::bad_lexical_cast  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501400
// 00501400  55                   push ebp
// 00501401  8bec                 mov ebp, esp
// 00501403  6aff                 push -1
// 00501405  68485c8e00           push 0x8e5c48
// 0050140a  6812156a00           push 0x6a1512
// 0050140f  64a100000000         mov eax, dword ptr fs:[0]
// 00501415  50                   push eax
// 00501416  64892500000000       mov dword ptr fs:[0], esp
// 0050141d  83ec18               sub esp, 0x18
// 00501420  53                   push ebx
// 00501421  56                   push esi
// 00501422  57                   push edi
// 00501423  8965e8               mov dword ptr [ebp - 0x18], esp
// 00501426  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0050142d  0f31                 rdtsc 
// 0050142f  8bf0                 mov esi, eax
// 00501431  8bfa                 mov edi, edx
// 00501433  ff750c               push dword ptr [ebp + 0xc]
// 00501436  ff5508               call dword ptr [ebp + 8]
// 00501439  5b                   pop ebx
// 0050143a  0f31                 rdtsc 
// 0050143c  8955e0               mov dword ptr [ebp - 0x20], edx
// 0050143f  8945d8               mov dword ptr [ebp - 0x28], eax
// 00501442  897de4               mov dword ptr [ebp - 0x1c], edi
// 00501445  8975dc               mov dword ptr [ebp - 0x24], esi
// 00501448  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0050144f  33f6                 xor esi, esi
// 00501451  8b7de4               mov edi, dword ptr [ebp - 0x1c]
// 00501454  6a01                 push 1
// 00501456  56                   push esi
// 00501457  56                   push esi
// 00501458  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 0050145b  50                   push eax
// 0050145c  e86f021a00           call 0x6a16d0
// 00501461  2bc6                 sub eax, esi
// 00501463  1bd7                 sbb edx, edi
// 00501465  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00501468  2bc1                 sub eax, ecx
// 0050146a  1bd6                 sbb edx, esi
// 0050146c  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 0050146f  03c1                 add eax, ecx
// 00501471  13d6                 adc edx, esi
// 00501473  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00501476  64890d00000000       mov dword ptr fs:[0], ecx
// 0050147d  5f                   pop edi
// 0050147e  5e                   pop esi
// 0050147f  5b                   pop ebx
// 00501480  8be5                 mov esp, ebp
// 00501482  5d                   pop ebp
// 00501483  c3                   ret 
extern "C" unsigned __int64 __rdtsc();
#pragma intrinsic(__rdtsc)

unsigned __int64 __cdecl measure(void (__cdecl *callback)(void *), void *argument)
{
    unsigned __int64 start, end;

    __try
    {
        unsigned __int64 s = __rdtsc();
        callback(argument);
        unsigned __int64 e = __rdtsc();
        start = s;
        end = e;
    }
    __except (1)
    {
        return 0;
    }

    return (unsigned __int64)(unsigned int)(end >> 32) * 0x100000000ull + (unsigned int)end
         - ((unsigned __int64)(unsigned int)(start >> 32) << 32) - (unsigned int)start;
}
