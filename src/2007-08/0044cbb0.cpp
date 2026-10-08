// from server: 100% by colin
// roc 2007-08 0044cbb0  unit: CRobloxControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044cbb0
//
// 0044cbb0  56                   push esi
// 0044cbb1  57                   push edi
// 0044cbb2  8bf9                 mov edi, ecx
// 0044cbb4  e887ffffff           call 0x44cb40
// 0044cbb9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044cbbd  8bf0                 mov esi, eax
// 0044cbbf  8b06                 mov eax, dword ptr [esi]
// 0044cbc1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0044cbc7  51                   push ecx
// 0044cbc8  57                   push edi
// 0044cbc9  8bce                 mov ecx, esi
// 0044cbcb  ffd2                 call edx
// 0044cbcd  5f                   pop edi
// 0044cbce  8bc6                 mov eax, esi
// 0044cbd0  5e                   pop esi
// 0044cbd1  c20400               ret 4

struct CRobloxControlColorSelector {
    void* sub_44cb40();
    void* sub_44cbb0(void* arg);
};

void* CRobloxControlColorSelector::sub_44cbb0(void* arg)
{
    void* p = sub_44cb40();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, void*, void*) = (void (__thiscall *)(void*, void*, void*))vtbl[0x38];
    fn(p, this, arg);
    return p;
}
