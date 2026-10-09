// roc 2008-06 007995e0  unit: CXTPRibbonControlTab  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007995e0
//
// 007995e0  56                   push esi
// 007995e1  57                   push edi
// 007995e2  8bf9                 mov edi, ecx
// 007995e4  e887ffffff           call 0x799570
// 007995e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007995ed  8bf0                 mov esi, eax
// 007995ef  8b06                 mov eax, dword ptr [esi]
// 007995f1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007995f7  51                   push ecx
// 007995f8  57                   push edi
// 007995f9  8bce                 mov ecx, esi
// 007995fb  ffd2                 call edx
// 007995fd  5f                   pop edi
// 007995fe  8bc6                 mov eax, esi
// 00799600  5e                   pop esi
// 00799601  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00003c@@QAEPAXPAX@Z)

namespace ns_ROCX00003c {
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
