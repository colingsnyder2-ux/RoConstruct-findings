// from server: 60% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Registry;

struct Proxy {
    Registry* owner;
};

struct Registry {
    Proxy* proxy;
    unsigned reserved[2];
    unsigned* first;
    unsigned* last;
};

extern unsigned registryGuard;
extern void __cdecl initializeRegistry();
extern void __cdecl ensureInitialized(void (__cdecl*)(), unsigned*);
extern Registry* __cdecl getRegistry();

struct Base {
    unsigned storage[7];

    Base(const char*, const char*);
    ~Base();
    unsigned* lookup(const unsigned*);
};

struct S : Base {
    unsigned count;
    unsigned bits;

    S();
};

S::S() : Base((const char*)&count, (const char*)&count)
{
    ensureInitialized(initializeRegistry, &registryGuard);
    Registry* registry = getRegistry();
    unsigned* current = registry->first;
    if (current > registry->last)
        _invalid_parameter_noinfo();
    Proxy* proxy = registry->proxy;

    ensureInitialized(initializeRegistry, &registryGuard);
    registry = getRegistry();
    unsigned* finish = registry->last;
    if (registry->first > finish)
        _invalid_parameter_noinfo();
    Proxy* finishProxy = registry->proxy;

    for (;;) {
        if (!proxy || proxy != finishProxy)
            _invalid_parameter_noinfo();
        if (current == finish)
            break;

        Registry* owner;
        if (!proxy) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = proxy->owner;
        }
        if (current >= owner->last)
            _invalid_parameter_noinfo();

        unsigned key = *current;
        unsigned value = count;
        *lookup(&key) = value;

        unsigned n = count;
        int bit = -1;
        while (n > 0) {
            n >>= 1;
            ++bit;
        }
        bits = bit + 1;

        if (!proxy) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = proxy->owner;
        }
        if (current >= owner->last)
            _invalid_parameter_noinfo();
        ++current;
    }
}
