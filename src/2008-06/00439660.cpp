// from server: 66% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct RefCount {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* value;
    RefCount* count;
};

struct Entry {
    void* key;
    void* value;
};

struct Proxy;
struct Node;

struct Iterator {
    Proxy* owner;
    Node* position;
};

struct EntryIterator {
    Proxy* owner;
    Entry* position;
};

struct Vector {
    Proxy* proxy;
    unsigned long unused[2];
    Entry* first;
    Entry* last;
    Entry* capacity;

    EntryIterator* erase(EntryIterator* result, EntryIterator position);
};

struct Node {
    unsigned long unused[4];
    Vector entries;
};

struct Argument {
    unsigned long unused[7];
    void* key;
};

struct S {
    Proxy* proxy;
    unsigned long unused[5];
    Node* end;

    Iterator* lookup(Iterator* result, void** key);
    void remove(Argument* argument);
};

struct Proxy {
    S* container;
};

extern Shared* __cdecl makeShared(Shared* result, Argument* argument);

void S::remove(Argument* argument)
{
    void* key = argument->key;
    Iterator found;
    lookup(&found, &key);

    Proxy* foundOwner = found.owner;
    Node* sentinel = end;
    Proxy* ownProxy = *reinterpret_cast<Proxy* volatile*>(&proxy);
    if (!foundOwner || foundOwner != ownProxy)
        _invalid_parameter_noinfo();

    Node* node = found.position;
    if (node == sentinel)
        return;

    Shared temporary;
    argument = reinterpret_cast<Argument*>(makeShared(&temporary, argument));
    void (__cdecl* invalid)() = _invalid_parameter_noinfo;

    if (!foundOwner)
        invalid();
    S* owner = foundOwner ? foundOwner->container : 0;
    if (node == owner->end)
        invalid();

    Entry* finish = node->entries.last;
    Vector* entries = &node->entries;
    if (entries->first > finish)
        invalid();

    Proxy* p = found.owner;
    if (!p)
        invalid();
    owner = p ? p->container : 0;
    if (node == owner->end)
        invalid();

    Entry* start = entries->first;
    if (start > entries->last)
        _invalid_parameter_noinfo();

    EntryIterator current;
    current.owner = entries->proxy;
    current.position = start;

    Entry* match = start;
    if (match != finish) {
        void* wanted = reinterpret_cast<Shared*>(argument)->value;
        do {
            if (match->key == wanted)
                break;
            ++match;
        } while (match != finish);
    }

    RefCount* count = temporary.count;
    if (count) {
        if (_InterlockedExchangeAdd(&count->strong, -1) == 1) {
            count->dispose();
            if (_InterlockedExchangeAdd(&count->weak, -1) == 1)
                count->destroy();
        }
    }

    Proxy* checkedOwner = found.owner;
    if (!checkedOwner)
        _invalid_parameter_noinfo();
    owner = checkedOwner ? checkedOwner->container : 0;
    if (found.position == owner->end)
        _invalid_parameter_noinfo();

    finish = entries->last;
    if (entries->first > finish)
        _invalid_parameter_noinfo();

    Proxy* currentOwner = current.owner;
    Proxy* vectorOwner =
        *reinterpret_cast<Proxy* volatile*>(&entries->proxy);
    if (!currentOwner || currentOwner != vectorOwner)
        _invalid_parameter_noinfo();

    if (match != finish) {
        if (!checkedOwner)
            _invalid_parameter_noinfo();
        owner = checkedOwner ? checkedOwner->container : 0;
        if (found.position == owner->end)
            _invalid_parameter_noinfo();

        current.position = match;
        entries->erase(reinterpret_cast<EntryIterator*>(&temporary), current);
    }
}
