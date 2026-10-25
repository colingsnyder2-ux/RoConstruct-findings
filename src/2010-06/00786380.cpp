// from server: 66% by atomic.potato
// roc 2010-06 00786380  unit: RBX::HUMAN::GettingUp  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00786380
//
// 00786380  83ec08               sub esp, 8
// 00786383  f30f100598fba100     movss xmm0, dword ptr [0xa1fb98]
// 0078638b  53                   push ebx
// 0078638c  56                   push esi
// 0078638d  8bf1                 mov esi, ecx
// 0078638f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00786392  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 00786395  b867666666           mov eax, 0x66666667
// 0078639a  f7e9                 imul ecx
// 0078639c  c1fa04               sar edx, 4
// 0078639f  8bc2                 mov eax, edx
// 007863a1  57                   push edi
// 007863a2  33db                 xor ebx, ebx
// 007863a4  c1e81f               shr eax, 0x1f
// 007863a7  33ff                 xor edi, edi
// 007863a9  03c2                 add eax, edx
// 007863ab  895c2410             mov dword ptr [esp + 0x10], ebx
// 007863af  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 007863b5  747a                 je 0x786431
// 007863b7  55                   push ebp
// 007863b8  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007863bc  3bf8                 cmp edi, eax
// 007863be  7206                 jb 0x7863c6
// 007863c0  ff150ca99e00         call dword ptr [0x9ea90c]
// 007863c6  8b560c               mov edx, dword ptr [esi + 0xc]
// 007863c9  f30f10441308         movss xmm0, dword ptr [ebx + edx + 8]
// 007863cf  f30f594504           mulss xmm0, dword ptr [ebp + 4]
// 007863d4  f30f104c130c         movss xmm1, dword ptr [ebx + edx + 0xc]
// 007863da  f30f594d08           mulss xmm1, dword ptr [ebp + 8]
// 007863df  8d0413               lea eax, [ebx + edx]
// 007863e2  f30f58c1             addss xmm0, xmm1
// 007863e6  f30f104d00           movss xmm1, dword ptr [ebp]
// 007863eb  f30f594804           mulss xmm1, dword ptr [eax + 4]
// 007863f0  f30f58c1             addss xmm0, xmm1
// 007863f4  0f2f442410           comiss xmm0, dword ptr [esp + 0x10]
// 007863f9  760a                 jbe 0x786405
// 007863fb  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 00786401  89442414             mov dword ptr [esp + 0x14], eax
// 00786405  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00786408  2bca                 sub ecx, edx
// 0078640a  b867666666           mov eax, 0x66666667
// 0078640f  f7e9                 imul ecx
// 00786411  c1fa04               sar edx, 4
// 00786414  8bc2                 mov eax, edx
// 00786416  c1e81f               shr eax, 0x1f
// 00786419  47                   inc edi
// 0078641a  03c2                 add eax, edx
// 0078641c  83c328               add ebx, 0x28
// 0078641f  3bf8                 cmp edi, eax
// 00786421  72a3                 jb 0x7863c6
// 00786423  8b442414             mov eax, dword ptr [esp + 0x14]
// 00786427  5d                   pop ebp
// 00786428  5f                   pop edi
// 00786429  5e                   pop esi
// 0078642a  5b                   pop ebx
// 0078642b  83c408               add esp, 8
// 0078642e  c20400               ret 4
// 00786431  5f                   pop edi
// 00786432  5e                   pop esi
// 00786433  8bc3                 mov eax, ebx
// 00786435  5b                   pop ebx
// 00786436  83c408               add esp, 8
// 00786439  c20400               ret 4

extern "C" __declspec(dllimport) void __stdcall _invalid_parameter_noinfo();

struct S {
    char pad0[0xc];
    int m0c;
    int m10;
    int f(int arg);
};

int S::f(int arg)
{
    float best = *(float*)0xa1fb98;
    int count = (m10 - m0c) / 40;
    unsigned int i = 0;
    int off = 0;
    int result = 0;
    if (count != 0) {
        do {
            if (i >= (unsigned int)count)
                _invalid_parameter_noinfo();
            float* p = (float*)(m0c + off);
            float v = p[2] * *(float*)(arg + 4)
                    + p[3] * *(float*)(arg + 8)
                    + p[1] * *(float*)(arg + 0);
            if (v > best) {
                best = v;
                result = (int)p;
            }
            count = (m10 - m0c) / 40;
            i++;
            off += 40;
        } while (i < (unsigned int)count);
    }
    return result;
}
