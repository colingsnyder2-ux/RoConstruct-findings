// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void Release();
};

struct Inner {
    char pad[0x154];
    void* field154;
};

struct Obj {
    char pad0[0xc];
    Inner* inner;
};

extern "C" void* sub_4153B0(void*);
extern "C" void sub_413C20(void*, void*);
extern "C" void sub_57E660(void*, void*);
extern "C" char sub_609A60(void*, void*);

struct JoinCommand {
    char pad0[0xc];
    void* field_c;
    char f();
};

char JoinCommand::f()
{
    Inner* inner;
    if (field_c != 0) {
        inner = (Inner*)sub_4153B0(field_c);
    } else {
        inner = 0;
    }

    void* p = inner->field154;

    char* base = (char*)p;
    unsigned int size = (unsigned int)(*(char**)(base + 0x10) - *(char**)(base + 0xc));
    size &= 0xfffffff8;
    if (size != 0x10) {
        return 0;
    }

    void* a = 0;
    void* b = 0;
    sub_413C20(inner, &b);
    sub_57E660(inner, &a);

    char result = sub_609A60(a, b);

    RefCounted* r = (RefCounted*)a;
    if (r != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1) {
            r->Release();
        }
    }

    r = (RefCounted*)b;
    if (r != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1) {
            r->Release();
        }
    }

    if (result) {
        return 1;
    }
    return 0;
}
