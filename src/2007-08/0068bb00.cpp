// from server: 86% by colin
// roc 2007-08 0068bb00  unit: CXTPControlTabWorkspace  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068bb00
//
// 0068bb00  56                   push esi
// 0068bb01  57                   push edi
// 0068bb02  8bf9                 mov edi, ecx
// 0068bb04  e887ffffff           call 0x68ba90
// 0068bb09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068bb0d  8bf0                 mov esi, eax
// 0068bb0f  8b06                 mov eax, dword ptr [esi]
// 0068bb11  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0068bb17  51                   push ecx
// 0068bb18  57                   push edi
// 0068bb19  8bce                 mov ecx, esi
// 0068bb1b  ffd2                 call edx
// 0068bb1d  5f                   pop edi
// 0068bb1e  8bc6                 mov eax, esi
// 0068bb20  5e                   pop esi
// 0068bb21  c20400               ret 4

struct CXTPControlTabWorkspace {
    void* method68ba90();
    void* method68bb00(void* arg);
};

void* CXTPControlTabWorkspace::method68bb00(void* arg)
{
    void* p = method68ba90();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtbl[0xe0 / 4];
    fn(p, arg);
    return p;
}
