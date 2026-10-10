// from server: 23% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Obj {
    void* vptr;
};

struct Inner {
    void* vptr;
    void* ptr;
};

struct A {
    char pad[0x78];
    void* field78;
};

struct B {
    void* vptr;
};

struct C {
    void* vptr;
};

extern "C" void __stdcall func_00403800(void*, void*);
extern "C" void __stdcall func_00403830(void*, void*);
extern "C" void __stdcall func_0040d550(void*);
extern "C" void __stdcall func_0040e750(void*);
extern "C" void __stdcall func_00491980(void*);
extern "C" void __stdcall func_005595a0(void*);

struct ReportAbuseVerb {
    void method(int);
};

void ReportAbuseVerb::method(int arg)
{
    A* self = (A*)this;
    Inner inner;
    func_00403800(self->field78, &inner);

    RefCounted* rc = (RefCounted*)inner.ptr;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refcount, 1);
    }

    func_0040d550(&inner);

    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__stdcall*)(void*))((void**)rc->vptr)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakcount, -1) == 1) {
                ((void (__stdcall*)(void*))((void**)rc->vptr)[2])(rc);
            }
        }
    }

    B b;
    func_00403830(self, &b);

    C* c = (C*)b.vptr;
    void* v = c->vptr;
    func_0040e750(v);
    func_00491980(v);

    bool result = (*(signed char*)&v != 0);
    ((void (__stdcall*)(void*, int))((void**)b.vptr)[0])(&b, result ? 1 : 0);

    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__stdcall*)(void*))((void**)rc->vptr)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakcount, -1) == 1) {
                ((void (__stdcall*)(void*))((void**)rc->vptr)[2])(rc);
            }
        }
    }

    func_005595a0(&inner);
}
