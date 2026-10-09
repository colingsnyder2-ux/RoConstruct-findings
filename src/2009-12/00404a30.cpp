// roc 2009-12 00404a30  unit: ATL::CComClassFactory  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00404a30
//
// 00404a30  837c240800           cmp dword ptr [esp + 8], 0
// 00404a35  8b0d0095b700         mov ecx, dword ptr [0xb79500]
// 00404a3b  8b01                 mov eax, dword ptr [ecx]
// 00404a3d  740a                 je 0x404a49
// 00404a3f  8b5004               mov edx, dword ptr [eax + 4]
// 00404a42  ffd2                 call edx
// 00404a44  33c0                 xor eax, eax
// 00404a46  c20800               ret 8
// 00404a49  8b5008               mov edx, dword ptr [eax + 8]
// 00404a4c  ffd2                 call edx
// 00404a4e  33c0                 xor eax, eax
// 00404a50  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX000002@ns_ROCX000002@@YGHHH@Z)

namespace ns_ROCX000002 {
struct CComClassFactory {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
};

extern CComClassFactory* g_factory;

int __stdcall fn_ROCX000002(int, int arg2)
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
