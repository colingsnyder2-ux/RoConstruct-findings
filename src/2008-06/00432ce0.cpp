// from server: 86% by colin
// from server: 78% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
#include <intrin.h>
extern "C" {
extern void (__stdcall * const EnterCriticalSection)(void*);
extern void (__stdcall * const LeaveCriticalSection)(void*);
extern unsigned long (__stdcall * const GetCurrentThreadId)();
extern void (__cdecl * const _invalid_parameter_noinfo)();
}

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    char reserved[36];
    unsigned int references;
    char remaining[28];
    Object(unsigned long);
};

struct Map;

struct Proxy {
    Map* container;
};

struct Node {
    char reserved[16];
    Object* value;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
};

struct Map {
    Proxy* proxy;
    char reserved[20];
    Node* head;
    Iterator* find(Iterator*, const unsigned long*);
    Object** slot(const unsigned long*);
};

extern Map objects;
extern unsigned char criticalSection[24];

struct Lock {
    void* section;
    bool locked;
    Lock(void*);
    void release();
    ~Lock();
};

__forceinline Lock::Lock(void* p) : section(p)
{
    EnterCriticalSection(section);
    locked = true;
}

__forceinline void Lock::release()
{
    LeaveCriticalSection(section);
    locked = false;
}

__forceinline Lock::~Lock()
{
    if (locked)
        LeaveCriticalSection(section);
}

Object* getObject()
{
    Lock lock(criticalSection);
    unsigned long thread = GetCurrentThreadId();
    unsigned long id = thread;

    {
        Iterator it;
        objects.find(&it, &id);
        Proxy* proxy = it.proxy;
        Node* end = objects.head;
        _ReadWriteBarrier();

        if (!proxy || proxy != objects.proxy)
            _invalid_parameter_noinfo();

        Node* node = it.node;
        if (node != end) {
            void (__cdecl *invalid)() = _invalid_parameter_noinfo;
            _ReadWriteBarrier();
            Map* container;
            if (proxy)
                container = proxy->container;
            else {
                invalid();
                container = 0;
            }

            if (node == container->head)
                invalid();

            ++node->value->references;

            if (proxy)
                proxy = reinterpret_cast<Proxy*>(proxy->container);
            else
                invalid();

            if (node == reinterpret_cast<Map*>(proxy)->head)
                invalid();

            Object* result = node->value;
            lock.release();
            return result;
        }
    }

    Object* object = new Object(thread);
    *objects.slot(&id) = object;
    ++object->references;
    lock.release();
    return object;
}
