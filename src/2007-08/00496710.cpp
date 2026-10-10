// from server: 23% by colin
struct DescribedBase {
    void* vtable;
};

struct Descriptor {
    void* vtable;
};

struct FunctionDescriptor {
    char pad[0x30];
    void* field_30;
    void* field_34;
};

struct BoundFuncDesc {
    char pad[0x30];
    void* field_30;
    void* field_34;
    void invoke(void* args, int count);
};

extern "C" void* __stdcall sub_630D36(void*, int, void*, void*, int);
extern "C" void __stdcall sub_630B9E(void*, void*);
extern "C" void __stdcall sub_496640(void*, void*, void*, void*);

void BoundFuncDesc::invoke(void* args, int count) {
    void* local_30 = this->field_30;
    void* local_34 = this->field_34;
    void* local_10 = 0;
    if (local_34) {
        void** vtbl = *(void***)local_34;
        void* fn = vtbl[2];
        typedef void* (__thiscall *Fn)(void*);
        local_10 = ((Fn)fn)(local_34);
    } else {
        local_10 = 0;
    }
    void* p = args;
    void** vtbl2 = *(void***)p;
    void* fn2 = vtbl2[1];
    typedef void (__thiscall *Fn2)(void*, int, void*);
    ((Fn2)fn2)(p, 1, &local_30);
    void* r = sub_630D36(local_10, 0, (void*)0x88209c, (void*)0x88e9fc, 0);
    if (r == 0) {
        sub_630B9E((void*)0x841e0c, (void*)0x786e04);
    }
    sub_496640(this, (char*)args + 4, &local_30, r);
    if (local_10) {
        void** vtbl3 = *(void***)local_10;
        void* fn3 = vtbl3[0];
        typedef void (__thiscall *Fn3)(void*, int);
        ((Fn3)fn3)(local_10, 1);
    }
}
