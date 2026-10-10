// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct Inner {
    int a;
    int b;
    int c;
};

struct Outer {
    Inner inner;
    void Init(RefCounted* p, int x, int y);
};

void RefCounted::AddRef() {
    _InterlockedExchangeAdd((volatile long*)((char*)this + 4), 1);
}

void RefCounted::Release() {
    if (_InterlockedExchangeAdd((volatile long*)((char*)this + 4), -1) == 1) {
        (*(void(__thiscall**)(RefCounted*))(*(int*)this + 4))(this);
        if (_InterlockedExchangeAdd((volatile long*)((char*)this + 8), -1) == 1) {
            (*(void(__thiscall**)(RefCounted*))(*(int*)this + 8))(this);
        }
    }
}

struct Helper {
    void __thiscall Call();
};

void Outer::Init(RefCounted* p, int x, int y) {
    inner.a = 0;
    inner.b = 0;
    inner.c = 0;
    Inner tmp;
    tmp.a = x;
    tmp.b = y;
    tmp.c = (int)p;
    if (p) {
        p->AddRef();
    }
    ((Helper*)this)->Call();
    if (p) {
        p->Release();
    }
}
