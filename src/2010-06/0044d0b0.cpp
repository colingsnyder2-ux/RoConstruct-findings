// roc 2010-06 0044d0b0  unit: CRobloxApp  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044d0b0
//
// 0044d0b0  53                   push ebx
// 0044d0b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0044d0b5  85db                 test ebx, ebx
// 0044d0b7  7506                 jne 0x44d0bf
// 0044d0b9  33c0                 xor eax, eax
// 0044d0bb  5b                   pop ebx
// 0044d0bc  c20400               ret 4
// 0044d0bf  66833b00             cmp word ptr [ebx], 0
// 0044d0c3  55                   push ebp
// 0044d0c4  56                   push esi
// 0044d0c5  8beb                 mov ebp, ebx
// 0044d0c7  8bf3                 mov esi, ebx
// 0044d0c9  742a                 je 0x44d0f5
// 0044d0cb  57                   push edi
// 0044d0cc  8b3de4bb9e00         mov edi, dword ptr [0x9ebbe4]
// 0044d0d2  56                   push esi
// 0044d0d3  ffd7                 call edi
// 0044d0d5  0fb70e               movzx ecx, word ptr [esi]
// 0044d0d8  6683f95c             cmp cx, 0x5c
// 0044d0dc  740c                 je 0x44d0ea
// 0044d0de  6683f92f             cmp cx, 0x2f
// 0044d0e2  7406                 je 0x44d0ea
// 0044d0e4  6683f93a             cmp cx, 0x3a
// 0044d0e8  7502                 jne 0x44d0ec
// 0044d0ea  8be8                 mov ebp, eax
// 0044d0ec  66833800             cmp word ptr [eax], 0
// 0044d0f0  8bf0                 mov esi, eax
// 0044d0f2  75de                 jne 0x44d0d2
// 0044d0f4  5f                   pop edi
// 0044d0f5  8bc5                 mov eax, ebp
// 0044d0f7  5e                   pop esi
// 0044d0f8  2bc3                 sub eax, ebx
// 0044d0fa  5d                   pop ebp
// 0044d0fb  d1f8                 sar eax, 1
// 0044d0fd  5b                   pop ebx
// 0044d0fe  c20400               ret 4
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