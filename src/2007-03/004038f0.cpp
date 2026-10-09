// roc 2007-03 004038f0  unit: seg_00400000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004038f0
//
// 004038f0  837c240800           cmp dword ptr [esp + 8], 0
// 004038f5  8b0d5c538b00         mov ecx, dword ptr [0x8b535c]
// 004038fb  8b01                 mov eax, dword ptr [ecx]
// 004038fd  740a                 je 0x403909
// 004038ff  8b5004               mov edx, dword ptr [eax + 4]
// 00403902  ffd2                 call edx
// 00403904  33c0                 xor eax, eax
// 00403906  c20800               ret 8
// 00403909  8b5008               mov edx, dword ptr [eax + 8]
// 0040390c  ffd2                 call edx
// 0040390e  33c0                 xor eax, eax
// 00403910  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX00000c@ns_ROCX00000c@@YGHHH@Z)

namespace ns_ROCX00000c {
struct CComClassFactory {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
};

extern CComClassFactory* g_factory;

int __stdcall fn_ROCX00000c(int, int arg2)
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
