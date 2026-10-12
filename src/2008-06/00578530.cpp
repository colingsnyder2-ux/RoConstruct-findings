// from server: 94% by king_originala
extern "C" void __cdecl initialize_index();
extern "C" void __cdecl initialize_factory();
extern unsigned long index_once;
extern unsigned long factory_once;

extern "C" void __cdecl call_once(void (__cdecl *)(), unsigned long *);
extern "C" void * __stdcall make_value_00575630();
extern "C" void * __cdecl factory_value();
extern void (__cdecl *invalid_parameter_noinfo)();

struct Control {
    void *value;

    Control();
    void assign(const Control &other);
};

inline Control::Control() : value(0)
{
}

struct Shared {
    void *object;
    Control control;

    Shared();
    Shared(const Shared &other);
    ~Shared();
};

inline Shared::Shared() : object(0), control()
{
}

struct Cache {
    unsigned char reserved[12];
    Shared *first;
    Shared *volatile last;
    Shared *limit;

    void resize(unsigned count, Shared value);
};

struct Creator {
    unsigned char reserved[0x190];
    Cache cache;

    Shared create(void *value);
    void *get();
};

void *Creator::get()
{
    call_once(initialize_index, &index_once);
    unsigned index = (unsigned)make_value_00575630();
    void (__cdecl *invalid)() = invalid_parameter_noinfo;
    Cache *entries = &cache;

    if (index + 1 > (unsigned)(entries->last - entries->first)) {
        entries->resize(index + 1, Shared());
    } else {
        if (index >= (unsigned)(entries->last - entries->first))
            invalid();

        void *existing = entries->first[index].object;
        if (existing)
            return existing;
    }

    call_once(initialize_factory, &factory_once);
    Shared result = create(factory_value());

    if (!result.object)
        return 0;

    void *object = result.object;
    if (index >= (unsigned)(entries->last - entries->first))
        invalid();

    Shared *entry = &entries->first[index];
    entry->object = result.object;
    entry->control.assign(result.control);
    return object;
}
