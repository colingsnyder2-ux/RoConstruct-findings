// from server: 100% by colin
// roc 2007-08 0067ecd0  unit: CXTPControlWorkspaceActions  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067ecd0
//
// 0067ecd0  56                   push esi
// 0067ecd1  57                   push edi
// 0067ecd2  8bf9                 mov edi, ecx
// 0067ecd4  e887ffffff           call 0x67ec60
// 0067ecd9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067ecdd  8bf0                 mov esi, eax
// 0067ecdf  8b06                 mov eax, dword ptr [esi]
// 0067ece1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0067ece7  51                   push ecx
// 0067ece8  57                   push edi
// 0067ece9  8bce                 mov ecx, esi
// 0067eceb  ffd2                 call edx
// 0067eced  5f                   pop edi
// 0067ecee  8bc6                 mov eax, esi
// 0067ecf0  5e                   pop esi
// 0067ecf1  c20400               ret 4

struct CXTPControlWorkspaceActions {
    void* f_0067ec60();
    void* f_0067ecd0(void* arg);
};

void* CXTPControlWorkspaceActions::f_0067ecd0(void* arg)
{
    void* p = f_0067ec60();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, void*, void*) = (void (__thiscall *)(void*, void*, void*))vtbl[0xe0 / 4];
    fn(p, this, arg);
    return p;
}
