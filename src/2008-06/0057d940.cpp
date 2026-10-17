// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance;

struct ChildEntry
{
    Instance* object;
    void* control;
};

struct Children
{
    char padding[12];
    ChildEntry* first;
    ChildEntry* last;
};

unsigned int __cdecl childCount(Children* children, int a);

struct RefCounted
{
    virtual void destroy();
    virtual void destroy2();
    volatile long refcount;
    volatile long refcount2;
};

struct AllCanSelectCommand
{
    void* field0;
    RefCounted* ref;
    void execute(Children* children);
};

void AllCanSelectCommand::execute(Children* children)
{
    childCount(children, 1);
    RefCounted* r = this->ref;
    if (r)
    {
        if (_InterlockedExchangeAdd(&r->refcount, -1) == 1)
        {
            r->destroy();
            if (_InterlockedExchangeAdd(&r->refcount2, -1) == 1)
            {
                r->destroy2();
            }
        }
    }
}
