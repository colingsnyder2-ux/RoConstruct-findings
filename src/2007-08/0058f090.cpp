// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* rep;
};

struct CreatorBase {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

struct Creator : CreatorBase {
    void* field4;
};

struct FactoryProduct {
    Creator* creator;
};

struct NameRef {
    void* rep;
};

struct SharedPtr {
    void* px;
    long* pn;
};

extern "C" void __cdecl sub_58F010(NameRef* out, const char* name);

struct VBodyGyroCreator {
    void construct(SharedPtr* out);
};

void VBodyGyroCreator::construct(SharedPtr* out) {
    NameRef name;
    name.rep = 0;
    sub_58F010(&name, "hPju");

    out->px = name.rep;
    void* p = *(void**)((char*)&name + 4);
    out->pn = (long*)p;
    if (p) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }

    void* old = *(void**)((char*)&name + 4);
    if (old) {
        long* rc = (long*)((char*)old + 4);
        if (_InterlockedExchangeAdd((volatile long*)rc, -1) == 1) {
            void** vt = *(void***)old;
            ((void (__thiscall*)(void*))vt[1])(old);
            long* rc2 = (long*)((char*)old + 8);
            if (_InterlockedExchangeAdd((volatile long*)rc2, -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__thiscall*)(void*))vt2[2])(old);
            }
        }
    }
}
