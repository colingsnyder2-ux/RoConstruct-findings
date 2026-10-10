// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    long refCount;
    long weakCount;
    virtual void dummy1();
    virtual void dummy2();
};

struct Holder {
    RefCounted* ptr;
};

struct Vec {
    int* begin;
    int* end;
};

struct Obj {
    char pad[0x134];
    Vec vec;
    int method1();
};

extern "C" int __cdecl sub_42E410(void* self);
extern "C" int __cdecl sub_407DA0(Holder* out);
extern "C" void __cdecl sub_725520(void* a, void* b, void* c);
extern "C" int __cdecl sub_42D780();
extern "C" void __cdecl sub_402A60(void* a, void* b);
extern "C" void __cdecl sub_541630(void* a, void* b);

int Obj::method1()
{
    if (sub_42E410(this) != 0)
        return 0;

    Holder h;
    sub_407DA0(&h);

    void* ebx = h.ptr;

    sub_725520((void*)0x8BB908, (void*)0x42D830, 0);
    int idx = sub_42D780();

    int* begin = vec.begin;
    if (begin == 0 || (unsigned)idx >= (unsigned)((vec.end - begin) >> 3))
        _invalid_parameter_noinfo();

    int* slot = vec.begin + idx * 2;
    *slot = (int)h.ptr;
    sub_402A60(slot + 1, &h);

    sub_541630(ebx, this);

    RefCounted* p = h.ptr;
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            p->dummy1();
            if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1)
                p->dummy2();
        }
    }

    return (int)ebx;
}
