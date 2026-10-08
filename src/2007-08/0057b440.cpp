// from server: 55% by colin
// roc 2007-08 0057b440  unit: RBX::RootInstance  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b440
//
// 0057b440  8b442404             mov eax, dword ptr [esp + 4]
// 0057b444  56                   push esi
// 0057b445  8bb0bc000000         mov esi, dword ptr [eax + 0xbc]
// 0057b44b  57                   push edi
// 0057b44c  8bfe                 mov edi, esi
// 0057b44e  8b8fbc000000         mov ecx, dword ptr [edi + 0xbc]
// 0057b454  8b91bc000000         mov edx, dword ptr [ecx + 0xbc]
// 0057b45a  85d2                 test edx, edx
// 0057b45c  7410                 je 0x57b46e
// 0057b45e  8bff                 mov edi, edi
// 0057b460  8bf9                 mov edi, ecx
// 0057b462  8bca                 mov ecx, edx
// 0057b464  8b91bc000000         mov edx, dword ptr [ecx + 0xbc]
// 0057b46a  85d2                 test edx, edx
// 0057b46c  75f2                 jne 0x57b460
// 0057b46e  3bf7                 cmp esi, edi
// 0057b470  740c                 je 0x57b47e
// 0057b472  8bc6                 mov eax, esi
// 0057b474  8bb0bc000000         mov esi, dword ptr [eax + 0xbc]
// 0057b47a  3bf7                 cmp esi, edi
// 0057b47c  75f4                 jne 0x57b472
// 0057b47e  5f                   pop edi
// 0057b47f  5e                   pop esi
// 0057b480  c3                   ret 

struct RootInstance {
    RootInstance* getParentChainRoot();
};

RootInstance* RootInstance::getParentChainRoot()
{
    RootInstance* p = *(RootInstance**)((char*)this + 0xbc);
    RootInstance* q = p;
    RootInstance* r = *(RootInstance**)((char*)q + 0xbc);
    while (r != 0) {
        q = r;
        r = *(RootInstance**)((char*)q + 0xbc);
    }
    while (p != q) {
        p = *(RootInstance**)((char*)p + 0xbc);
    }
    return p;
}
