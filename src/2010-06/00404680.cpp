// from server: 100% by tester
// roc 2010-06 00404680  unit: ATL::CComClassFactory  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00404680
//
// 00404680  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00404683  85c0                 test eax, eax
// 00404685  7408                 je 0x40468f
// 00404687  8b08                 mov ecx, dword ptr [eax]
// 00404689  8b5108               mov edx, dword ptr [ecx + 8]
// 0040468c  50                   push eax
// 0040468d  ffd2                 call edx
// 0040468f  c3                   ret 

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
