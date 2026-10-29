// roc 2009-06 00444e70  unit: G3D::_WeakPtr  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00444e70
//
// 00444e70  53                   push ebx
// 00444e71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00444e75  85db                 test ebx, ebx
// 00444e77  7506                 jne 0x444e7f
// 00444e79  33c0                 xor eax, eax
// 00444e7b  5b                   pop ebx
// 00444e7c  c20400               ret 4
// 00444e7f  66833b00             cmp word ptr [ebx], 0
// 00444e83  55                   push ebp
// 00444e84  56                   push esi
// 00444e85  8beb                 mov ebp, ebx
// 00444e87  8bf3                 mov esi, ebx
// 00444e89  742a                 je 0x444eb5
// 00444e8b  57                   push edi
// 00444e8c  8b3dc4ed8900         mov edi, dword ptr [0x89edc4]
// 00444e92  56                   push esi
// 00444e93  ffd7                 call edi
// 00444e95  0fb70e               movzx ecx, word ptr [esi]
// 00444e98  6683f95c             cmp cx, 0x5c
// 00444e9c  740c                 je 0x444eaa
// 00444e9e  6683f92f             cmp cx, 0x2f
// 00444ea2  7406                 je 0x444eaa
// 00444ea4  6683f93a             cmp cx, 0x3a
// 00444ea8  7502                 jne 0x444eac
// 00444eaa  8be8                 mov ebp, eax
// 00444eac  66833800             cmp word ptr [eax], 0
// 00444eb0  8bf0                 mov esi, eax
// 00444eb2  75de                 jne 0x444e92
// 00444eb4  5f                   pop edi
// 00444eb5  8bc5                 mov eax, ebp
// 00444eb7  5e                   pop esi
// 00444eb8  2bc3                 sub eax, ebx
// 00444eba  5d                   pop ebp
// 00444ebb  d1f8                 sar eax, 1
// 00444ebd  5b                   pop ebx
// 00444ebe  c20400               ret 4
// copied from an identical function in another client (function ?f@@YGHPB_W@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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