// from server: 62% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

extern void __cdecl creator_callback();
extern unsigned registration_state;
extern void __cdecl register_creator(void (__cdecl *)(), unsigned *);
extern void * __cdecl func_004ab4d0();

struct Entry {
    void *value;
    void *control;
    ~Entry();
};

struct Entries {
    unsigned bookkeeping[3];
    Entry *first;
    Entry *last;
    Entry *limit;

    void resize(unsigned count, Entry value);
};

struct Creator {
    unsigned char padding[0x190];
    Entries entries;

    void *get();
};

void *Creator::get()
{
    register_creator(creator_callback, &registration_state);
    unsigned index = reinterpret_cast<unsigned>(func_004ab4d0());

    if (index + 1 > static_cast<unsigned>(entries.last - entries.first)) {
        entries.resize(index + 1, Entry());
        return 0;
    }

    if (index >= static_cast<unsigned>(entries.last - entries.first))
        _invalid_parameter_noinfo();

    return entries.first[index].value;
}
