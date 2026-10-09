// roc 2008-06 004031e0  unit: ATL::CComClassFactory  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004031e0
//
// 004031e0  837c240800           cmp dword ptr [esp + 8], 0
// 004031e5  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 004031eb  8b01                 mov eax, dword ptr [ecx]
// 004031ed  740a                 je 0x4031f9
// 004031ef  8b5004               mov edx, dword ptr [eax + 4]
// 004031f2  ffd2                 call edx
// 004031f4  33c0                 xor eax, eax
// 004031f6  c20800               ret 8
// 004031f9  8b5008               mov edx, dword ptr [eax + 8]
// 004031fc  ffd2                 call edx
// 004031fe  33c0                 xor eax, eax
// 00403200  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX00001c@ns_ROCX00001c@@YGHHH@Z)

namespace ns_ROCX00001c {
struct CComClassFactory {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
};

extern CComClassFactory* g_factory;

int __stdcall fn_ROCX00001c(int, int arg2)
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
