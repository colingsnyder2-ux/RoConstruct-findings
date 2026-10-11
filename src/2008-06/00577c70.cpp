// from server: 55% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct type_info;

extern "C" bool __stdcall type_info_equals(const type_info* self, const type_info* other);

struct VInstance {
    void* vfptr;
    void* refcount1;
    void* refcount2;
};

struct Holder {
    void* vfptr;
    long refcount;
};

struct Slot {
    void* ptr;
    Holder* holder;
};

struct Adapter {
    void* vfptr;
    long refcount;
};

struct SignalDesc {
    void* vfptr;
    long refcount;
};

struct GenericSlotAdapter {
    void* vfptr;
    long refcount;
    void* field8;
};

struct S {
    void assign(Slot* dst, Slot* src, int mode);
};

void S::assign(Slot* dst, Slot* src, int mode) {
    if (mode == 0) {
        if (dst == 0) return;
        dst->ptr = src->ptr;
        dst->holder = src->holder;
        if (dst->holder == 0) return;
        _InterlockedExchangeAdd((volatile long*)((char*)dst->holder + 4), 1);
        return;
    }
    if (mode == 1) {
        Holder* h = src->holder;
        if (h == 0) return;
        if (_InterlockedExchangeAdd((volatile long*)((char*)h + 4), -1) == 1) {
            void** vt = *(void***)h;
            void (*fn)(Holder*) = (void (*)(Holder*))vt[1];
            fn(h);
            if (_InterlockedExchangeAdd((volatile long*)((char*)h + 8), -1) == 1) {
                void** vt2 = *(void***)h;
                void (*fn2)(Holder*) = (void (*)(Holder*))vt2[2];
                fn2(h);
            }
        }
        return;
    }
    const type_info* ti = *(const type_info**)src;
    bool eq = type_info_equals(ti, (const type_info*)0x946d80);
    dst->ptr = eq ? src->ptr : 0;
}
