// roc 2009-12 0044b110  unit: CRobloxControlColorSelector  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044b110
//
// 0044b110  53                   push ebx
// 0044b111  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0044b115  85db                 test ebx, ebx
// 0044b117  7506                 jne 0x44b11f
// 0044b119  33c0                 xor eax, eax
// 0044b11b  5b                   pop ebx
// 0044b11c  c20400               ret 4
// 0044b11f  66833b00             cmp word ptr [ebx], 0
// 0044b123  55                   push ebp
// 0044b124  56                   push esi
// 0044b125  8beb                 mov ebp, ebx
// 0044b127  8bf3                 mov esi, ebx
// 0044b129  742a                 je 0x44b155
// 0044b12b  57                   push edi
// 0044b12c  8b3d60ca9800         mov edi, dword ptr [0x98ca60]
// 0044b132  56                   push esi
// 0044b133  ffd7                 call edi
// 0044b135  0fb70e               movzx ecx, word ptr [esi]
// 0044b138  6683f95c             cmp cx, 0x5c
// 0044b13c  740c                 je 0x44b14a
// 0044b13e  6683f92f             cmp cx, 0x2f
// 0044b142  7406                 je 0x44b14a
// 0044b144  6683f93a             cmp cx, 0x3a
// 0044b148  7502                 jne 0x44b14c
// 0044b14a  8be8                 mov ebp, eax
// 0044b14c  66833800             cmp word ptr [eax], 0
// 0044b150  8bf0                 mov esi, eax
// 0044b152  75de                 jne 0x44b132
// 0044b154  5f                   pop edi
// 0044b155  8bc5                 mov eax, ebp
// 0044b157  5e                   pop esi
// 0044b158  2bc3                 sub eax, ebx
// 0044b15a  5d                   pop ebp
// 0044b15b  d1f8                 sar eax, 1
// 0044b15d  5b                   pop ebx
// 0044b15e  c20400               ret 4
// copied from an identical function in another client (function ?f@ns_ROCX00001f@@YGHPB_W@Z)

namespace ns_ROCX00001f {
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
}
