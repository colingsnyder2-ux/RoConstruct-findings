// from server: 100% by tester
// roc 2008-06 004073d0  unit: VCApp::?$CComObject  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004073d0
//
// 004073d0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004073d3  85c0                 test eax, eax
// 004073d5  7408                 je 0x4073df
// 004073d7  8b08                 mov ecx, dword ptr [eax]
// 004073d9  8b5108               mov edx, dword ptr [ecx + 8]
// 004073dc  50                   push eax
// 004073dd  ffd2                 call edx
// 004073df  c3                   ret 

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
