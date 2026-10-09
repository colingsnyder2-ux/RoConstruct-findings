// roc 2010-06 00404650  unit: ATL::CComClassFactory  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00404650
//
// 00404650  837c240800           cmp dword ptr [esp + 8], 0
// 00404655  8b0db0fabf00         mov ecx, dword ptr [0xbffab0]
// 0040465b  8b01                 mov eax, dword ptr [ecx]
// 0040465d  740a                 je 0x404669
// 0040465f  8b5004               mov edx, dword ptr [eax + 4]
// 00404662  ffd2                 call edx
// 00404664  33c0                 xor eax, eax
// 00404666  c20800               ret 8
// 00404669  8b5008               mov edx, dword ptr [eax + 8]
// 0040466c  ffd2                 call edx
// 0040466e  33c0                 xor eax, eax
// 00404670  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX00007b@ns_ROCX00007b@@YGHHH@Z)

namespace ns_ROCX00007b {
struct CComClassFactory {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
};

extern CComClassFactory* g_factory;

int __stdcall fn_ROCX00007b(int, int arg2)
{
    CComClassFactory* p = g_factory;
    if (arg2) {
        p->AddRef();
    } else {
        p->Release();
    }
    return 0;
}
}
