// from server: 100% by king_originala
// roc 2008-06 00449f50  unit: CIDEDocManager  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449f50
//
// 00449f50  53                   push ebx
// 00449f51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00449f55  85db                 test ebx, ebx
// 00449f57  7506                 jne 0x449f5f
// 00449f59  33c0                 xor eax, eax
// 00449f5b  5b                   pop ebx
// 00449f5c  c20400               ret 4
// 00449f5f  66833b00             cmp word ptr [ebx], 0
// 00449f63  55                   push ebp
// 00449f64  56                   push esi
// 00449f65  8beb                 mov ebp, ebx
// 00449f67  8bf3                 mov esi, ebx
// 00449f69  742a                 je 0x449f95
// 00449f6b  57                   push edi
// 00449f6c  8b3d302d8000         mov edi, dword ptr [0x802d30]
// 00449f72  56                   push esi
// 00449f73  ffd7                 call edi
// 00449f75  0fb70e               movzx ecx, word ptr [esi]
// 00449f78  6683f95c             cmp cx, 0x5c
// 00449f7c  740c                 je 0x449f8a
// 00449f7e  6683f92f             cmp cx, 0x2f
// 00449f82  7406                 je 0x449f8a
// 00449f84  6683f93a             cmp cx, 0x3a
// 00449f88  7502                 jne 0x449f8c
// 00449f8a  8be8                 mov ebp, eax
// 00449f8c  66833800             cmp word ptr [eax], 0
// 00449f90  8bf0                 mov esi, eax
// 00449f92  75de                 jne 0x449f72
// 00449f94  5f                   pop edi
// 00449f95  8bc5                 mov eax, ebp
// 00449f97  5e                   pop esi
// 00449f98  2bc3                 sub eax, ebx
// 00449f9a  5d                   pop ebp
// 00449f9b  d1f8                 sar eax, 1
// 00449f9d  5b                   pop ebx
// 00449f9e  c20400               ret 4

extern "C" wchar_t* (__stdcall *CharNextW)(const wchar_t*);

int __stdcall f(const wchar_t* path)
{
    if (!path)
        return 0;

    const wchar_t* last = path;
    const wchar_t* current = path;

    if (*current)
    {
        wchar_t* (__stdcall *nextChar)(const wchar_t*) = CharNextW;
        do
        {
            const wchar_t* next = nextChar(current);
            if (*current == L'\\' || *current == L'/' || *current == L':')
                last = next;
            current = next;
        } while (*current);
    }

    return last - path;
}
