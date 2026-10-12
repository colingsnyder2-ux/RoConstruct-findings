// from server: 87% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void* __cdecl _RTDynamicCast(void*, long, void*, void*, int);

struct Container {
    unsigned char padding[16];
    void** end;
};

struct Proxy {
    Container* container;
};

struct Iterator {
    Proxy* proxy;
    void** position;
};

struct S {
    unsigned char padding[0x1ec];
    Proxy* proxy;
    unsigned char gap[8];
    void** begin;
    void** end;
    void* f();
};

void* S::f()
{
    void (__cdecl *invalid)() =
        *reinterpret_cast<void (__cdecl **)()>(0x802890);

    Iterator last;
    last.position = end;
    if (begin > last.position)
        invalid();
    last.proxy = proxy;

    Iterator current;
    current.position = begin;
    if (current.position > end)
        invalid();
    current.proxy = proxy;

    for (;;) {
        if (!current.proxy || current.proxy != last.proxy)
            invalid();

        if (current.position == last.position)
            return 0;

        Container* container;
        if (!current.proxy) {
            invalid();
            container = 0;
        } else {
            container = current.proxy->container;
        }

        if (current.position >= container->end)
            invalid();

        void* result = _RTDynamicCast(
            *current.position, 0,
            reinterpret_cast<void*>(0x936908),
            reinterpret_cast<void*>(0x952f24), 0);
        if (result)
            return result;

        if (!current.proxy) {
            invalid();
            container = 0;
        } else {
            container = current.proxy->container;
        }

        if (current.position >= container->end)
            invalid();

        ++current.position;
    }
}
