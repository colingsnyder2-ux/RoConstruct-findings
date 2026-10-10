// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Creator {
    void* vptr;
    void* field4;
};

struct CreatorResult {
    void* ptr;
    void* ref;
};

extern "C" void __cdecl sub_58FED0(CreatorResult* out, void* name);

struct FactoryProductCreator {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
    void* field28;
    void* field2C;

    void* construct(Creator* out);
};

void* FactoryProductCreator::construct(Creator* out) {
    CreatorResult local;
    local.ptr = 0;
    local.ref = 0;
    sub_58FED0(&local, this);
    out->vptr = local.ptr;
    void* ref = local.ref;
    out->field4 = ref;
    if (ref) {
        _InterlockedExchangeAdd((volatile long*)((char*)ref + 4), 1);
    }
    void* esi = this->field0;
    if (esi) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 4), -1) == 1) {
            void** vt = *(void***)esi;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(esi);
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 8), -1) == 1) {
                void** vt2 = *(void***)esi;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(esi);
            }
        }
    }
    return out;
}
