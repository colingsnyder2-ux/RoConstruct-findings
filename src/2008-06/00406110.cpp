// from server: 59% by colin
struct VCApp_CComObject {
    int QueryInterface(const void* riid, void** ppv);
};

extern "C" void* __stdcall sub_6A0968();
extern "C" void* __stdcall sub_6A0962(void* p);
extern "C" void* __stdcall sub_6A0926();
extern "C" int __stdcall sub_449BF0(void* p, int a);
extern "C" void __stdcall sub_6A095C(void* p, int a);

int VCApp_CComObject::QueryInterface(const void* riid, void** ppv) {
    int result;
    void* p1;
    void* p2;
    void* p3;
    void* p4;

    p1 = sub_6A0968();
    p2 = sub_6A0962(p1);
    p3 = sub_6A0926();
    p4 = *(void**)((char*)p3 + 4);
    result = sub_449BF0(p4, 0);
    result = (result == 0) ? 0x80004005 : 0x7FFFBFFB;
    if (p2 != 0) {
        *(void**)((char*)p2 + 4) = p1;
    }
    if (ppv != 0) {
        sub_6A095C(0, (int)riid);
    }
    return result;
}
