// from server: 75% by colin
// from server: 72% by king_originala
// roc 2008-06 004290b0  unit: MainLogManager  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004290b0
//
// 004290b0  55                   push ebp
// 004290b1  8bec                 mov ebp, esp
// 004290b3  6aff                 push -1
// 004290b5  6898f27b00           push 0x7bf298
// 004290ba  64a100000000         mov eax, dword ptr fs:[0]
// 004290c0  50                   push eax
// 004290c1  64892500000000       mov dword ptr fs:[0], esp
// 004290c8  51                   push ecx
// 004290c9  53                   push ebx
// 004290ca  56                   push esi
// 004290cb  57                   push edi
// 004290cc  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004290cf  33f6                 xor esi, esi
// 004290d1  3bfe                 cmp edi, esi
// 004290d3  750a                 jne 0x4290df
// 004290d5  b803400080           mov eax, 0x80004003
// 004290da  e907010000           jmp 0x4291e6
// 004290df  89750c               mov dword ptr [ebp + 0xc], esi
// 004290e2  8b1db8218000         mov ebx, dword ptr [0x8021b8]
// 004290e8  57                   push edi
// 004290e9  8975fc               mov dword ptr [ebp - 4], esi
// 004290ec  ffd3                 call ebx
// 004290ee  56                   push esi
// 004290ef  40                   inc eax
// 004290f0  99                   cdq 
// 004290f1  6a02                 push 2
// 004290f3  52                   push edx
// 004290f4  50                   push eax
// 004290f5  e8d6852700           call 0x6a16d0
// 004290fa  8bf0                 mov esi, eax
// 004290fc  0500000080           add eax, 0x80000000
// 00429101  83d200               adc edx, 0
// 00429104  85d2                 test edx, edx
// 00429106  7745                 ja 0x42914d
// 00429108  7205                 jb 0x42910f
// 0042910a  83f8ff               cmp eax, -1
// 0042910d  773e                 ja 0x42914d
// 0042910f  81fe00040000         cmp esi, 0x400
// 00429115  7f18                 jg 0x42912f
// 00429117  56                   push esi
// 00429118  e8f394fdff           call 0x402610
// 0042911d  83c404               add esp, 4
// 00429120  84c0                 test al, al
// 00429122  740b                 je 0x42912f
// 00429124  8bc6                 mov eax, esi
// 00429126  e835842700           call 0x6a1560
// 0042912b  8bc4                 mov eax, esp
// 0042912d  eb09                 jmp 0x429138
// 0042912f  56                   push esi
// 00429130  8d4d0c               lea ecx, [ebp + 0xc]
// 00429133  e8189efdff           call 0x402f50
// 00429138  6a03                 push 3
// 0042913a  d1ee                 shr esi, 1
// 0042913c  56                   push esi
// 0042913d  57                   push edi
// 0042913e  50                   push eax
// 0042913f  e81c86fdff           call 0x401760
// 00429144  8bc8                 mov ecx, eax
// 00429146  894df0               mov dword ptr [ebp - 0x10], ecx
// 00429149  85c9                 test ecx, ecx
// 0042914b  7512                 jne 0x42915f
// 0042914d  8d4d0c               lea ecx, [ebp + 0xc]
// 00429150  e8fb7ffdff           call 0x401150
// 00429155  b80e000780           mov eax, 0x8007000e
// 0042915a  e987000000           jmp 0x4291e6
// 0042915f  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 00429162  33c0                 xor eax, eax
// 00429164  85ff                 test edi, edi
// 00429166  7459                 je 0x4291c1
// 00429168  57                   push edi
// 00429169  ffd3                 call ebx
// 0042916b  40                   inc eax
// 0042916c  6a02                 push 2
// 0042916e  50                   push eax
// 0042916f  894514               mov dword ptr [ebp + 0x14], eax
// 00429172  8d4514               lea eax, [ebp + 0x14]
// 00429175  50                   push eax
// 00429176  e89585fdff           call 0x401710
// 0042917b  83c40c               add esp, 0xc
// 0042917e  85c0                 test eax, eax
// 00429180  7ccb                 jl 0x42914d
// 00429182  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00429185  81fe00040000         cmp esi, 0x400
// 0042918b  7f18                 jg 0x4291a5
// 0042918d  56                   push esi
// 0042918e  e87d94fdff           call 0x402610
// 00429193  83c404               add esp, 4
// 00429196  84c0                 test al, al
// 00429198  740b                 je 0x4291a5
// 0042919a  8bc6                 mov eax, esi
// 0042919c  e8bf832700           call 0x6a1560
// 004291a1  8bc4                 mov eax, esp
// 004291a3  eb09                 jmp 0x4291ae
// 004291a5  56                   push esi
// 004291a6  8d4d0c               lea ecx, [ebp + 0xc]
// 004291a9  e8a29dfdff           call 0x402f50
// 004291ae  6a03                 push 3
// 004291b0  d1ee                 shr esi, 1
// 004291b2  56                   push esi
// 004291b3  57                   push edi
// 004291b4  50                   push eax
// 004291b5  e8a685fdff           call 0x401760
// 004291ba  85c0                 test eax, eax
// 004291bc  748f                 je 0x42914d
// 004291be  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004291c1  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 004291c4  6a00                 push 0
// 004291c6  52                   push edx
// 004291c7  8b5518               mov edx, dword ptr [ebp + 0x18]
// 004291ca  52                   push edx
// 004291cb  50                   push eax
// 004291cc  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004291cf  50                   push eax
// 004291d0  51                   push ecx
// 004291d1  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004291d4  51                   push ecx
// 004291d5  e806f9ffff           call 0x428ae0
// 004291da  8d4d0c               lea ecx, [ebp + 0xc]
// 004291dd  8bf0                 mov esi, eax
// 004291df  e86c7ffdff           call 0x401150
// 004291e4  8bc6                 mov eax, esi
// 004291e6  8d65e4               lea esp, [ebp - 0x1c]
// 004291e9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004291ec  64890d00000000       mov dword ptr fs:[0], ecx
// 004291f3  5f                   pop edi
// 004291f4  5e                   pop esi
// 004291f5  5b                   pop ebx
// 004291f6  8be5                 mov esp, ebp
// 004291f8  5d                   pop ebp
// 004291f9  c21800               ret 0x18
extern "C" __declspec(dllimport) int __stdcall lstrlenA(const char *);

extern "C" void *__cdecl _alloca(unsigned int);
#pragma intrinsic(_alloca)

extern bool __cdecl canUseStack(int);
extern int __cdecl checkedMultiply(int *, int, int);
extern wchar_t *__stdcall convertText(void *, const char *, unsigned int, unsigned int);
extern long __stdcall dispatch(void *, const wchar_t *, unsigned int,
                               const wchar_t *, unsigned int, unsigned int,
                               unsigned int);

struct ConversionStorage
{
    void *head;
    ~ConversionStorage() throw();
    void *allocate(int);
};

long __stdcall convertAndDispatch(void *context, const char *text,
                                  unsigned int operation, const char *optionalText,
                                  unsigned int flags, unsigned int value)
{
    if (!text)
        return (long)0x80004003;

    ConversionStorage storage = { 0 };
    int (__stdcall *length)(const char *) = lstrlenA;

    __int64 bytes = (__int64)(length(text) + 1) * 2;
    if ((unsigned __int64)(bytes + 0x80000000i64) > 0xffffffffui64)
        return (long)0x8007000e;

    int count = (int)bytes;
    void *buffer;
    if (count <= 1024 && canUseStack(count))
        buffer = _alloca(count);
    else
        buffer = storage.allocate(count);

    wchar_t *converted = convertText(buffer, text, (unsigned int)count / 2, 3);
    if (!converted)
        return (long)0x8007000e;

    wchar_t *convertedOptional = 0;
    if (optionalText)
    {
        int optionalBytes = length(optionalText) + 1;
        if (checkedMultiply(&optionalBytes, optionalBytes, 2) < 0)
            return (long)0x8007000e;

        count = optionalBytes;
        if (count <= 1024 && canUseStack(count))
            buffer = _alloca(count);
        else
            buffer = storage.allocate(count);

        convertedOptional = convertText(buffer, optionalText,
                                        (unsigned int)count / 2, 3);
        if (!convertedOptional)
            return (long)0x8007000e;
    }

    return dispatch(context, converted, operation, convertedOptional,
                    flags, value, 0);
}
