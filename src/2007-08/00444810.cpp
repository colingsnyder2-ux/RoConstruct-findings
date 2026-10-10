// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct DescribedBase {
    char pad[0xe8];
    unsigned char flag;
};

struct RefCounted {
    long refs;
    long weakrefs;
    virtual void destroy();
    virtual void weakDestroy();
};

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase*) const;
    virtual void setValue(DescribedBase*, const void*) const;
};

struct Holder {
    char pad0[4];
    GetSet* getset;
};

struct S {
    void func(void* arg);
};

extern "C" void* __cdecl sub_53E7A0(void*);
extern "C" void __cdecl sub_427350(void**);
extern "C" void __cdecl sub_541630(void*, void*);

void S::func(void* arg)
{
    void* p = sub_53E7A0((char*)arg + 8);
    if (p) {
        ((DescribedBase*)p)->flag = 0;
        return;
    }
    void* local = 0;
    sub_427350(&local);
    void* obj = local;
    void* v = *(void**)((char*)arg + 4);
    void** vt = *(void***)obj;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vt[2];
    fn(obj, (char*)v + 4);
    ((DescribedBase*)local)->flag = 0;
    sub_541630(local, arg);
    RefCounted* rc = (RefCounted*)local;
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refs, -1) == 1) {
            void** rvt = *(void***)rc;
            ((void (*)(RefCounted*))rvt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefs, -1) == 1) {
                void** rvt2 = *(void***)rc;
                ((void (*)(RefCounted*))rvt2[2])(rc);
            }
        }
    }
}
