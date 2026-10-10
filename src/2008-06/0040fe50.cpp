// from server: 41% by tester




extern "C" void* __cdecl operator_new(unsigned int size);

struct CComEnumImpl {
    void* vtable;
    void* field_4;
    void* field_8;
    void* field_c;
    void* field_10;
    void* field_14;
    void* field_18;
};

struct CComObjectRoot {
    void* vtable;
    void* field_4;
    void* field_8;
    void* field_c;
    void* field_10;
    void* field_14;
    void* field_18;
};

struct CComEnum {
    long __stdcall Init(void** ppEnum);
};

long __stdcall CComEnum::Init(void** ppEnum) {
    if (ppEnum == 0) {
        return (long)0x80004003;
    }
    *ppEnum = 0;
    CComObjectRoot* obj = (CComObjectRoot*)operator_new(0x1c);
    if (obj != 0) {
        obj->field_4 = 0;
        obj->field_10 = 0;
        obj->field_c = 0;
        obj->field_8 = 0;
        obj->field_14 = 0;
        obj->field_18 = 0;
        obj->vtable = (void*)0x80d790;
        void** vtbl = *(void***)0x96c268;
        void (*fn)(void) = (void (*)(void))vtbl[1];
        fn();
        *ppEnum = (void*)obj;
        return 0;
    }
    return (long)0x8007000e;
}
