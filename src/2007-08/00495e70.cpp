// from server: 32% by colin
struct BoundFuncDesc {
    char pad[0x30];
    void* field_30;
    void* field_34;
    void construct(void* arg1, void* arg2);
};

extern "C" void* __stdcall sub_630d36(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_630b9e(void*, void*);
extern "C" void* __stdcall sub_77e710(void*);
extern "C" void __stdcall sub_495dc0(void*, void*, void*, void*);

void BoundFuncDesc::construct(void* arg1, void* arg2) {
    void* local0 = this->field_30;
    void* local1;
    if (this->field_34) {
        void** vtbl = *(void***)this->field_34;
        void* (*fn)(void*) = (void* (*)(void*))vtbl[2];
        local1 = fn(this->field_34);
    } else {
        local1 = 0;
    }
    void* obj = arg1;
    void** vtbl2 = *(void***)obj;
    void (*fn2)(void*, int, void*) = (void (*)(void*, int, void*))vtbl2[1];
    fn2(obj, 1, &local0);
    void* result = sub_630d36(local0, 0, (void*)0x88209c, (void*)0x88e9fc, 0);
    if (result == 0) {
        sub_77e710((void*)0x786e04);
        sub_630b9e((void*)0x841e0c, &local0);
    }
    void* p = (char*)arg1 + 4;
    sub_495dc0(this, result, p, &local0);
    if (local1) {
        void** vtbl3 = *(void***)local1;
        void (*fn3)(void*, int) = (void (*)(void*, int))vtbl3[0];
        fn3(local1, 1);
    }
}
