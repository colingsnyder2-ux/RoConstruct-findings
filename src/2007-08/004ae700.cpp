// from server: 21% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* data;
};

struct RefCountedBase {
    void* vptr;
    long refCount;
};

struct Creator {
    void* vptr;
};

struct CreatorsMap {
    void* tree;
};

extern CreatorsMap* __cdecl getCreators();

struct FactoryProductCreator {
    void* vptr;
    void* field4;
};

extern void __cdecl NameDeclare(RBXName* out, const char* name);

struct CreatorHolder {
    void* ptr;
    void* refcount;
};

extern void __cdecl assignCreator(CreatorHolder* out, const RBXName* name, Creator* creator);

struct S {
    CreatorHolder* __thiscall f(CreatorHolder* out);
};

CreatorHolder* __thiscall S::f(CreatorHolder* out) {
    RBXName name;
    name.data = 0;
    NameDeclare(&name, "PQSVW");
    out->ptr = name.data;
    out->refcount = 0;
    return out;
}
