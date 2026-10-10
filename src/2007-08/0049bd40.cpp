// from server: 32% by colin
struct Descriptor {
    void* vtable;
};

struct FunctionDescriptor {
    char pad_0[0x28];
    void* field_28;
    void* field_2c;
    void* field_30;
    void* field_34;
};

struct BoundFuncDesc : FunctionDescriptor {
    void construct();
};

extern "C" void* __stdcall sub_630d36(void*, int, void*, void*, int);
extern "C" void __stdcall sub_630b9e(void*, void*);
extern "C" void __stdcall sub_56efb0(void*);
extern "C" void __stdcall sub_77e710(void*);

void BoundFuncDesc::construct()
{
    void* local_0c;
    void* local_10;
    void* local_20;
    void* local_28;

    local_0c = this->field_30;
    if (this->field_34) {
        local_10 = (*(void*(**)(void*))((*(void***)this->field_34)[2]))(this->field_34);
    } else {
        local_10 = 0;
    }

    void* arg = *(void**)((char*)&local_0c + 0x28);
    void* vtbl = *(void**)arg;
    void (*fn)(void*, int, void*) = *(void(**)(void*, int, void*))((char*)vtbl + 4);
    local_28 = 0;
    fn(arg, 1, &local_0c);

    void* p = local_20;
    void* result = (void*)sub_630d36(p, 0, (void*)0x88209c, (void*)0x88f968, 0);
    if (result == 0) {
        sub_77e710((void*)0x786e04);
        sub_630b9e(&local_0c, (void*)0x841e0c);
    }

    sub_56efb0(&local_0c);
    void* edx = *(void**)result;
    void* ecx = this->field_2c;
    void* eax = this->field_28;
    ecx = (char*)ecx + (int)result;
    ((void(*)(void*, void*))eax)(ecx, edx);

    void* c = local_10;
    local_28 = (void*)-1;
    if (c) {
        void* v = *(void**)c;
        void (*dtor)(void*, int) = *(void(**)(void*, int))v;
        dtor(c, 1);
    }
}
