// from server: 59% by colin
// roc 2007-08 0042a970  unit: EventHandler  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a970
//
// 0042a970  53                   push ebx
// 0042a971  56                   push esi
// 0042a972  8b742414             mov esi, dword ptr [esp + 0x14]
// 0042a976  57                   push edi
// 0042a977  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0042a97b  683c4e7c00           push 0x7c4e3c
// 0042a980  33db                 xor ebx, ebx
// 0042a982  57                   push edi
// 0042a983  891e                 mov dword ptr [esi], ebx
// 0042a985  e846ffffff           call 0x42a8d0
// 0042a98a  83c408               add esp, 8
// 0042a98d  85c0                 test eax, eax
// 0042a98f  7416                 je 0x42a9a7
// 0042a991  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042a995  8906                 mov dword ptr [esi], eax
// 0042a997  8b08                 mov ecx, dword ptr [eax]
// 0042a999  8b5104               mov edx, dword ptr [ecx + 4]
// 0042a99c  50                   push eax
// 0042a99d  ffd2                 call edx
// 0042a99f  5f                   pop edi
// 0042a9a0  5e                   pop esi
// 0042a9a1  8bc3                 mov eax, ebx
// 0042a9a3  5b                   pop ebx
// 0042a9a4  c20c00               ret 0xc
// 0042a9a7  687c4e7c00           push 0x7c4e7c
// 0042a9ac  57                   push edi
// 0042a9ad  e81effffff           call 0x42a8d0
// 0042a9b2  83c408               add esp, 8
// 0042a9b5  85c0                 test eax, eax
// 0042a9b7  75d8                 jne 0x42a991
// 0042a9b9  5f                   pop edi
// 0042a9ba  5e                   pop esi
// 0042a9bb  b802400080           mov eax, 0x80004002
// 0042a9c0  5b                   pop ebx
// 0042a9c1  c20c00               ret 0xc

struct EventHandler {
    int QueryInterface(int* ppv, int riid);
};

extern "C" int __stdcall sub_42A8D0(int* ppv, const char* riid);

int EventHandler::QueryInterface(int* ppv, int riid)
{
    int result = 0;
    *ppv = 0;
    if (sub_42A8D0(ppv, (const char*)0x7c4e3c))
    {
        *ppv = riid;
        int* p = (int*)riid;
        int vtbl = *p;
        int (*fn)(int) = *(int (**)(int))(vtbl + 4);
        fn(riid);
        return result;
    }
    if (sub_42A8D0(ppv, (const char*)0x7c4e7c))
    {
        *ppv = riid;
        int* p = (int*)riid;
        int vtbl = *p;
        int (*fn)(int) = *(int (**)(int))(vtbl + 4);
        fn(riid);
        return result;
    }
    return (int)0x80004002;
}
