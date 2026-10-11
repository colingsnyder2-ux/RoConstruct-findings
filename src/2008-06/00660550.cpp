// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct RefCounted {
    void* vptr;
    long refcount;
    long weakref;
};

struct Vec {
    void* begin;
    void* end;
    void* cap;
};

struct Obj {
    void* vptr;
};

struct Base {
    void* vptr;
    virtual void f1();
    virtual void f2();
    virtual void f3();
};

struct Helper {
    void* vptr;
    virtual void g1();
    virtual void g2();
};

extern "C" void __cdecl sub_60e920(void*, Vec*);
extern "C" void* __cdecl sub_665f20(void*, void*, void*, void*);
extern "C" void* __cdecl sub_66a630(void*, void*, void*, void*);
extern "C" void __cdecl sub_590550(void*);

struct FilterStairs {
    void* __cdecl method(void* a, void* b, void* c, void* d);
};

void* FilterStairs::method(void* a, void* b, void* c, void* d) {
    Vec v;
    v.begin = 0;
    v.end = 0;
    v.cap = 0;

    void* p = operator_new(4);
    if (p) {
        *(void**)p = &v;
    } else {
        p = 0;
    }
    v.begin = p;
    v.end = 0;
    v.cap = 0;

    sub_60e920(a, &v);

    unsigned int sz = ((unsigned int)v.end - (unsigned int)v.begin) & 0xfffffff8;

    void* result;
    if (sz == 8) {
        void* mem = operator_new(0x44);
        if (mem) {
            void* r = sub_665f20(mem, c, d, b);
            result = r;
        } else {
            result = 0;
        }
    } else {
        void* mem = operator_new(0x38);
        if (mem) {
            void* r = sub_66a630(mem, b, &v, c);
            result = r;
        } else {
            result = 0;
        }
    }

    void* vt = *(void**)result;
    void (*fn)(void*) = *(void (**)(void*))((char*)vt + 4);
    fn(result);

    void* saved = result;

    sub_590550(&v);

    if (d) {
        RefCounted* rc = (RefCounted*)d;
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            void* vt2 = *(void**)rc;
            void (*fn2)(void*) = *(void (**)(void*))((char*)vt2 + 4);
            fn2(rc);
            if (_InterlockedExchangeAdd(&rc->weakref, -1) == 1) {
                void* vt3 = *(void**)rc;
                void (*fn3)(void*) = *(void (**)(void*))((char*)vt3 + 8);
                fn3(rc);
            }
        }
    }

    return saved;
}
