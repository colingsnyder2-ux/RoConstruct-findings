// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    void __stdcall LeaveCriticalSection(void*);
    void* __stdcall string_ctor(void*, const char*);
    void __stdcall string_dtor(void*);
    const char* __stdcall string_c_str(void*);
    void* __stdcall string_concat(void*, void*, const char*);
}

struct RefCounted {
    void* vptr;
    long refCount;
    long weakRefCount;
};

struct String {
    char buf[0x1c];
};

struct ScopedLock {
    void* cs;
    char locked;
};

extern "C" void __stdcall sub_41d870(void*);
extern "C" void* __stdcall sub_56c3b0(void*);
extern "C" void __stdcall sub_56c0a0(void*, int, void*);
extern "C" void __stdcall sub_630a1e(void);

extern "C" void* __stdcall sub_77e698(void*);
extern "C" void* __stdcall sub_77e6ac(void*);
extern "C" void* __stdcall sub_77e6a8(void*);
extern "C" void* __stdcall sub_77e644(void*, void*, void*);
extern "C" void* __stdcall sub_77d2f8(void*);

extern char str_795bac[];
extern char str_795ba4[];
extern char str_795b90[];

struct VRunServiceListener {
    bool method(void* a, void* b, void* c);
};

bool VRunServiceListener::method(void* a, void* b, void* c) {
    ScopedLock lock;
    String s1;
    String s2;
    String s3;
    int r;

    lock.cs = (char*)this + 0x34;
    lock.locked = 0;
    sub_41d870(&lock);

    void* vtable = *(void**)c;
    void* fn = *(void**)((char*)vtable + 0x28);
    r = ((int (__stdcall*)(void*, int, void*, void*, int))fn)(c, 0x14, a, b, 0);

    if (r != 0) {
        if (lock.locked) {
            sub_77d2f8(lock.cs);
        }
        return true;
    }

    r -= 1;
    if (r == 0) {
        const char* str;
        if (c != *(void**)((char*)this + 0x190)) {
            str = str_795ba4;
        } else {
            str = str_795bac;
        }
        sub_77e698(&s1);
        sub_77e6ac(&s1);
        if (lock.locked) {
            sub_77d2f8(lock.cs);
        }
        return true;
    }

    const char* str;
    if (c != *(void**)((char*)this + 0x190)) {
        str = str_795ba4;
    } else {
        str = str_795bac;
    }
    sub_77e698(&s1);
    sub_77e644(&s2, &s1, str_795b90);
    sub_56c3b0(&s2);
    void* p = *(void**)&s2;
    sub_77e6a8(&s3);
    sub_56c0a0(p, 3, &s3);

    void* obj = *(void**)&s1;
    if (obj != 0) {
        RefCounted* rc = (RefCounted*)obj;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void* vt = rc->vptr;
            void* fn2 = *(void**)((char*)vt + 4);
            ((void (__stdcall*)(void*))fn2)(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1) {
                void* vt2 = rc->vptr;
                void* fn3 = *(void**)((char*)vt2 + 8);
                ((void (__stdcall*)(void*))fn3)(rc);
            }
        }
    }

    sub_77e6ac(&s3);
    sub_77e6ac(&s2);
    if (lock.locked) {
        sub_77d2f8(lock.cs);
    }
    return true;
}
