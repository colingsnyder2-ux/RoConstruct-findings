// roc 2011-06 00405420  unit: ATL::CComClassFactory  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00405420
//
// 00405420  837c240800           cmp dword ptr [esp + 8], 0
// 00405425  8b0db415cb00         mov ecx, dword ptr [0xcb15b4]
// 0040542b  8b01                 mov eax, dword ptr [ecx]
// 0040542d  740a                 je 0x405439
// 0040542f  8b5004               mov edx, dword ptr [eax + 4]
// 00405432  ffd2                 call edx
// 00405434  33c0                 xor eax, eax
// 00405436  c20800               ret 8
// 00405439  8b5008               mov edx, dword ptr [eax + 8]
// 0040543c  ffd2                 call edx
// 0040543e  33c0                 xor eax, eax
// 00405440  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX00000f@ns_ROCX00000f@@YGHHH@Z)

namespace ns_ROCX00000f {
struct CComClassFactory {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
};

extern CComClassFactory* g_factory;

int __stdcall fn_ROCX00000f(int, int arg2)
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
