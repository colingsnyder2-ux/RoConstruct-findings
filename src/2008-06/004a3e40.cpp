// from server: 88% by king_originala
extern "C" void __cdecl register_once(void (__cdecl *)(), void *);
extern "C" void __cdecl initialize_index();
extern "C" void __cdecl initialize_type();
extern "C" void *__cdecl func_004a1760();
extern "C" void *__cdecl get_type();
extern "C" void (__cdecl *volatile invalid_parameter_noinfo)();

extern unsigned char index_state;
extern unsigned char type_state;

struct Control
{
    void *value;
    Control &operator=(const Control &);
};

struct Entry
{
    void *object;
    Control control;

    Entry();
    Entry(const Entry &);
};

inline Entry::Entry() : object(0)
{
    control.value = 0;
}

struct Shared
{
    void *object;
    Control control;
    ~Shared();
};

struct Entries
{
    unsigned char prefix[12];
    Entry *first;
    Entry *last;
    Entry *limit;

    void resize(unsigned int, Entry);
    unsigned int size() const;
    Entry &at(unsigned int, void (__cdecl *)());
};

inline unsigned int Entries::size() const
{
    return (unsigned int)(last - first);
}

inline Entry &Entries::at(unsigned int index, void (__cdecl *invalid)())
{
    if (index >= size())
        invalid();
    return first[index];
}

struct S
{
    unsigned char prefix[0x190];
    Entries entries;

    Shared obtain(void *);
    void *f();
};

void *S::f()
{
    register_once(initialize_index, &index_state);
    unsigned int index = (unsigned int)func_004a1760();
    const volatile Entries &observed = entries;
    unsigned int count = (unsigned int)(observed.last - observed.first);
    void (__cdecl *invalid)() = invalid_parameter_noinfo;
    Entries &cache = entries;

    if (index + 1 > count)
    {
        cache.resize(index + 1, Entry());
    }
    else
    {
        void *existing = cache.at(index, invalid).object;
        if (existing)
            return existing;
    }

    register_once(initialize_type, &type_state);
    Shared result = obtain(get_type());

    if (!result.object)
        return 0;

    void *object = result.object;
    Entry &entry = cache.at(index, invalid);
    entry.object = result.object;
    entry.control = result.control;
    return object;
}
