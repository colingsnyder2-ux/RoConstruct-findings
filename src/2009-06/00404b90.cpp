// roc 2009-06 00404b90  unit: ATL::CComClassFactory  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00404b90
//
// 00404b90  837c240800           cmp dword ptr [esp + 8], 0
// 00404b95  8b0d1897a300         mov ecx, dword ptr [0xa39718]
// 00404b9b  8b01                 mov eax, dword ptr [ecx]
// 00404b9d  740a                 je 0x404ba9
// 00404b9f  8b5004               mov edx, dword ptr [eax + 4]
// 00404ba2  ffd2                 call edx
// 00404ba4  33c0                 xor eax, eax
// 00404ba6  c20800               ret 8
// 00404ba9  8b5008               mov edx, dword ptr [eax + 8]
// 00404bac  ffd2                 call edx
// 00404bae  33c0                 xor eax, eax
// 00404bb0  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX000071@ns_ROCX000071@@YGHHH@Z)

namespace ns_ROCX000071 {
struct CComClassFactory {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
};

extern CComClassFactory* g_factory;

int __stdcall fn_ROCX000071(int, int arg2)
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
