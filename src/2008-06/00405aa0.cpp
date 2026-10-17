// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Result {
    unsigned int first;
    unsigned int second;
};

struct Source {
    void copy(Result* output);
};

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct S {
    unsigned char padding[0x94];
    Source* source;
    Result* f(Result* output);
};

struct Holder {
    void* ptr;
    RefCounted* ref;
};

struct GlobalThing {
    void* first;
    RefCounted* second;
};

extern GlobalThing g_96c25c;
extern void* g_96c238;
extern void* g_96c254;
extern void* g_96c23c;
extern void* g_802890;

void __cdecl helper_403040(Holder* out);
void __cdecl helper_4025b0(GlobalThing* self, RefCounted** in);
void __cdecl helper_456e80(void* self);
void __cdecl helper_5e9340(void* self);

void release_ref(RefCounted* r)
{
    if (r) {
        if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)r->vptr)[1])(r);
            if (_InterlockedExchangeAdd(&r->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)r->vptr)[2])(r);
            }
        }
    }
}

void add_ref(RefCounted* r)
{
    if (r) {
        _InterlockedExchangeAdd(&r->refcount, 1);
    }
}

Result* S::f(Result* output)
{
    RefCounted* oldSecond = (RefCounted*)g_96c25c.second;
    RefCounted* oldFirst = (RefCounted*)g_96c25c.first;
    add_ref(oldFirst);

    if (*(unsigned char*)((char*)output + 0) != 0) {
        Holder h;
        helper_403040(&h);
        g_96c238 = *(void**)output;
        g_96c25c.second = (RefCounted*)h.ptr;
        helper_4025b0(&g_96c25c, (RefCounted**)&h.ptr);
        release_ref((RefCounted*)h.ptr);
    } else {
        if (*(void**)output == g_96c238) {
            g_96c238 = 0;
        }
        Holder h;
        helper_403040(&h);
        bool same = (*(void**)&h == g_96c25c.second);
        release_ref((RefCounted*)h.ptr);
        if (same) {
            helper_456e80(&g_96c25c);
        }
    }

    if (g_96c25c.second != oldSecond) {
        void* end = g_96c254;
        void* it = g_96c23c;
        void* cur = *(void**)end;
        while (true) {
            if (it != 0 && it != g_96c23c) {
                // no-op
            } else {
                ((void (__cdecl*)())g_802890)();
            }
            if (cur == end) {
                break;
            }
            if (it != 0) {
                it = *(void**)it;
            } else {
                ((void (__cdecl*)())g_802890)();
            }
            if (cur == *(void**)((char*)it + 0x18)) {
                ((void (__cdecl*)())g_802890)();
            }
            void* target = *(void**)((char*)cur + 0xc);
            Holder a;
            a.ptr = oldSecond;
            a.ref = oldFirst;
            add_ref(oldFirst);
            Holder b;
            b.ptr = g_96c25c.second;
            b.ref = (RefCounted*)g_96c25c.first;
            add_ref((RefCounted*)g_96c25c.first);
            ((void (__thiscall*)(void*, Holder*, Holder*))((void**)*(void**)target)[0])(target, &a, &b);
            helper_5e9340(&it);
            cur = *(void**)end;
        }
    }

    release_ref(oldFirst);
    return output;
}
