// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;
struct CreatorsMap;

struct ICreator {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct Creator : ICreator {
    void construct(Name* name, void* out);
};

struct RefCounted {
    long refs;
    virtual void destroy();
    virtual void destroy2();
};

struct Holder {
    void* ptr;
    RefCounted* rc;
};

struct MapNode {
    void* key;
    Holder value;
};

struct MapIter {
    MapNode* node;
};

struct CreatorsMap {
    MapIter find(Name* name);
    MapIter end();
};

struct FactoryProduct {
    static CreatorsMap* getCreators();
    static Name* getClassNameUnconstructed();
    static void registerCreator(Creator* c);
};

extern "C" void __cdecl helper_5907c0(void* out, void* arg);

void Creator::construct(Name* name, void* out) {
    Holder* dst = (Holder*)out;
    Holder tmp;
    helper_5907c0(&tmp, name);
    dst->ptr = tmp.ptr;
    dst->rc = tmp.rc;
    if (dst->rc) {
        _InterlockedExchangeAdd((volatile long*)((char*)dst->rc + 4), 1);
    }
    if (tmp.rc) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.rc + 4), -1) == 1) {
            tmp.rc->destroy();
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.rc + 8), -1) == 1) {
                tmp.rc->destroy2();
            }
        }
    }
}
