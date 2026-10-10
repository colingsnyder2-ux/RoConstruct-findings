// from server: 11% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct CreatorBase {
    virtual void slot4();
    virtual void slot8();
};

struct RefCounted {
    long refs;
    long weakRefs;
    virtual void destroy();
    virtual void destroyWeak();
};

struct Creator : CreatorBase {
    void* field4;
    RefCounted* field8;
    Creator(const Name* name);
};

struct CreatorsMap {
    void* head;
};

extern CreatorsMap* __cdecl getCreators();

struct Name {
    void* ptr;
};

extern Name* __cdecl declareName(const char*);

struct FactoryProduct {
    Creator* creator;
    Creator* makeCreator(const Name* name);
};

Creator* FactoryProduct::makeCreator(const Name* name)
{
    Creator* result = 0;
    Name* n = declareName(0);
    result = (Creator*)n;
    return result;
}
