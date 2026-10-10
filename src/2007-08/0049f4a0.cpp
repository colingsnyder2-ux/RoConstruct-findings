// from server: 34% by colin
struct Descriptor {
    void* vtable;
};

struct FunctionDescriptor {
    char pad[0x28];
    void* field28;
    void* field2c;
    void* field30;
    void* field34;
};

struct BoundFuncDesc : FunctionDescriptor {
    void declareSignature();
    void callImpl(int, void*);
};

extern "C" void* __cdecl sub_630D36(void*, void*, void*, int, void*);
extern "C" void __cdecl sub_630B9E(void*, void*);
extern "C" void* __cdecl sub_56EFB0(void*);
extern "C" void __stdcall sub_77E710(void*);

void BoundFuncDesc::declareSignature()
{
    void* local0 = field30;
    void* local4;
    if (field34) {
        void** vt = *(void***)field34;
        void* (__stdcall *fn)(void*) = (void* (__stdcall *)(void*))vt[2];
        local4 = fn(field34);
    } else {
        local4 = 0;
    }

    void* arg = *(void**)((char*)this + 0x34);
    (void)arg;

    void* p = *(void**)((char*)this + 0x34);
    (void)p;

    void* self = *(void**)((char*)this + 0x34);
    (void)self;

    void* obj = *(void**)((char*)this + 0x34);
    (void)obj;

    void* v = *(void**)((char*)this + 0x34);
    (void)v;

    void* vtbl = *(void**)this;
    void (__stdcall *fn2)(void*, int, void*) = (void (__stdcall *)(void*, int, void*))((void**)vtbl)[1];
    fn2(this, 1, &local0);

    void* result = sub_630D36(local0, (void*)0x88209C, (void*)0x8904BC, 0, (void*)0);
    if (!result) {
        sub_77E710((void*)0x786E04);
        sub_630B9E((void*)0x841E0C, &local0);
    }

    void* r = sub_56EFB0(&local0);
    int val = *(int*)r;
    void (__stdcall *fn3)(void*, int) = (void (__stdcall *)(void*, int))field28;
    fn3(field2c, val + (int)result);

    if (local4) {
        void** vt2 = *(void***)local4;
        void (__stdcall *fn4)(void*, int) = (void (__stdcall *)(void*, int))vt2[0];
        fn4(local4, 1);
    }
}
