// roc 2012-06 0046c780  unit: RBX::TeleportCallback  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046c780
//
// 0046c780  53                   push ebx
// 0046c781  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0046c785  85db                 test ebx, ebx
// 0046c787  7506                 jne 0x46c78f
// 0046c789  33c0                 xor eax, eax
// 0046c78b  5b                   pop ebx
// 0046c78c  c20400               ret 4
// 0046c78f  66833b00             cmp word ptr [ebx], 0
// 0046c793  55                   push ebp
// 0046c794  56                   push esi
// 0046c795  8beb                 mov ebp, ebx
// 0046c797  8bf3                 mov esi, ebx
// 0046c799  742a                 je 0x46c7c5
// 0046c79b  57                   push edi
// 0046c79c  8b3d283cb200         mov edi, dword ptr [0xb23c28]
// 0046c7a2  56                   push esi
// 0046c7a3  ffd7                 call edi
// 0046c7a5  0fb70e               movzx ecx, word ptr [esi]
// 0046c7a8  6683f95c             cmp cx, 0x5c
// 0046c7ac  740c                 je 0x46c7ba
// 0046c7ae  6683f92f             cmp cx, 0x2f
// 0046c7b2  7406                 je 0x46c7ba
// 0046c7b4  6683f93a             cmp cx, 0x3a
// 0046c7b8  7502                 jne 0x46c7bc
// 0046c7ba  8be8                 mov ebp, eax
// 0046c7bc  66833800             cmp word ptr [eax], 0
// 0046c7c0  8bf0                 mov esi, eax
// 0046c7c2  75de                 jne 0x46c7a2
// 0046c7c4  5f                   pop edi
// 0046c7c5  8bc5                 mov eax, ebp
// 0046c7c7  5e                   pop esi
// 0046c7c8  2bc3                 sub eax, ebx
// 0046c7ca  5d                   pop ebp
// 0046c7cb  d1f8                 sar eax, 1
// 0046c7cd  5b                   pop ebx
// 0046c7ce  c20400               ret 4
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
