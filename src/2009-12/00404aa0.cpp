// roc 2009-12 00404aa0  unit: ATL::CComClassFactory  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00404aa0
//
// 00404aa0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00404aa3  85c0                 test eax, eax
// 00404aa5  7408                 je 0x404aaf
// 00404aa7  8b08                 mov ecx, dword ptr [eax]
// 00404aa9  8b5108               mov edx, dword ptr [ecx + 8]
// 00404aac  50                   push eax
// 00404aad  ffd2                 call edx
// 00404aaf  c3                   ret 
// copied from an identical function in another client (function ?Release@CComClassFactory@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
// from server: 100% by why2
struct CComClassFactory {
    int field0;
    int field4;
    int field8;
    int fieldC;
    void* field10;
    void Release();
};

void CComClassFactory::Release()
{
    void* p = field10;
    if (p != 0)
    {
        void** vtbl = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[2];
        fn(p);
    }
}
}
