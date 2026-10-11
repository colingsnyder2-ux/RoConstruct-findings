// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refcount;
    long weakcount;
};

struct String {
    char buf[16];
};

extern "C" void __stdcall sub_802458(String* dst, const char* src);
extern "C" void __stdcall sub_802468(String* s);

struct Obj {
    void** vptr;
};

struct Target {
    void method(int a, int b);
};

void __fastcall helper_5bc9d0(void* out, const char* s);
void __fastcall helper_55a8f0(Obj* o, void* p);

void Target::method(int a, int b)
{
    char buf[28];
    helper_5bc9d0(buf, (const char*)a);

    RefCounted* p = *(RefCounted**)buf;
    RefCounted* q = *(RefCounted**)(buf + 4);

    if (q) {
        _InterlockedExchangeAdd(&q->refcount, 1);
    }

    RefCounted* r = *(RefCounted**)(buf + 8);
    if (r) {
        if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
            typedef void (__thiscall *Fn)(RefCounted*);
            Fn f = (Fn)r->vptr[1];
            f(r);
            if (_InterlockedExchangeAdd(&r->weakcount, -1) == 1) {
                Fn g = (Fn)r->vptr[2];
                g(r);
            }
        }
    }

    String s;
    sub_802458(&s, (const char*)b);

    typedef void (__thiscall *Fn2)(Obj*, String*);
    Fn2 f2 = (Fn2)p->vptr[1];
    f2((Obj*)p, &s);

    sub_802468(&s);

    helper_55a8f0((Obj*)p, (void*)a);

    if (q) {
        if (_InterlockedExchangeAdd(&q->refcount, -1) == 1) {
            typedef void (__thiscall *Fn)(RefCounted*);
            Fn f = (Fn)q->vptr[1];
            f(q);
            if (_InterlockedExchangeAdd(&q->weakcount, -1) == 1) {
                Fn g = (Fn)q->vptr[2];
                g(q);
            }
        }
    }
}
