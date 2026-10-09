// roc 2012-06 00405bc0  unit: ATL::CComClassFactory  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00405bc0
//
// 00405bc0  837c240800           cmp dword ptr [esp + 8], 0
// 00405bc5  8b0dc463e100         mov ecx, dword ptr [0xe163c4]
// 00405bcb  8b01                 mov eax, dword ptr [ecx]
// 00405bcd  740a                 je 0x405bd9
// 00405bcf  8b5004               mov edx, dword ptr [eax + 4]
// 00405bd2  ffd2                 call edx
// 00405bd4  33c0                 xor eax, eax
// 00405bd6  c20800               ret 8
// 00405bd9  8b5008               mov edx, dword ptr [eax + 8]
// 00405bdc  ffd2                 call edx
// 00405bde  33c0                 xor eax, eax
// 00405be0  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX000072@ns_ROCX000072@@YGHHH@Z)

namespace ns_ROCX000072 {
struct CComClassFactory {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
};

extern CComClassFactory* g_factory;

int __stdcall fn_ROCX000072(int, int arg2)
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
