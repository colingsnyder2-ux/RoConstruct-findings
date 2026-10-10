// from server: 13% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct Container {
    char pad[0x104];
    RefCounted** begin;
    RefCounted** end;
};

struct Inner {
    char pad[0x188];
    int value;
};

struct Outer {
    char pad[0xc];
    Inner* inner;
};

struct S {
    int get();
};

int S::get() {
    Outer* outer = (Outer*)this;
    Inner* inner = outer->inner;
    if (inner) {
        inner = (Inner*)((char*)inner + 0);
    } else {
        inner = 0;
    }
    Container* c = (Container*)((char*)inner + 0x104);
    RefCounted** begin = c->begin;
    if (begin == 0) {
        return ((Inner*)outer->inner)->value;
    }
    RefCounted** end = c->end;
    int count = (int)((char*)end - (char*)begin) >> 3;
    if (count != 1) {
        if (count == 0) {
            return ((Inner*)outer->inner)->value;
        }
        return 0;
    }
    RefCounted* obj = 0;
    RefCounted* result = *(RefCounted**)&obj;
    (void)result;
    return 0;
}
