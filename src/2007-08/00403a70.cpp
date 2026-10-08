// from server: 100% by colin
// roc 2007-08 00403a70  unit: ATL::CComClassFactory  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00403a70
//
// 00403a70  837c240800           cmp dword ptr [esp + 8], 0
// 00403a75  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 00403a7b  8b01                 mov eax, dword ptr [ecx]
// 00403a7d  740a                 je 0x403a89
// 00403a7f  8b5004               mov edx, dword ptr [eax + 4]
// 00403a82  ffd2                 call edx
// 00403a84  33c0                 xor eax, eax
// 00403a86  c20800               ret 8
// 00403a89  8b5008               mov edx, dword ptr [eax + 8]
// 00403a8c  ffd2                 call edx
// 00403a8e  33c0                 xor eax, eax
// 00403a90  c20800               ret 8

struct CComClassFactory {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
};

extern CComClassFactory* g_factory;

int __stdcall func_00403a70(int, int arg2)
{
    CComClassFactory* p = g_factory;
    if (arg2) {
        p->AddRef();
    } else {
        p->Release();
    }
    return 0;
}
