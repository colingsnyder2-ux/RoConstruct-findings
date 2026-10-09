// roc 2009-06 0079f470  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079f470
//
// 0079f470  56                   push esi
// 0079f471  57                   push edi
// 0079f472  8bf9                 mov edi, ecx
// 0079f474  e887ffffff           call 0x79f400
// 0079f479  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079f47d  8bf0                 mov esi, eax
// 0079f47f  8b06                 mov eax, dword ptr [esi]
// 0079f481  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0079f487  51                   push ecx
// 0079f488  57                   push edi
// 0079f489  8bce                 mov ecx, esi
// 0079f48b  ffd2                 call edx
// 0079f48d  5f                   pop edi
// 0079f48e  8bc6                 mov eax, esi
// 0079f490  5e                   pop esi
// 0079f491  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000023@@QAEPAXPAX@Z)

namespace ns_ROCX000023 {
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
}
