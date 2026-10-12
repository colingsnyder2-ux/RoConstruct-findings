// from server: 96% by king_originala
extern "C" void __cdecl register_once(void (__cdecl*)(), void*);
extern "C" void __cdecl initialize_index();
extern "C" void __cdecl initialize_type();
extern "C" void* __cdecl func_0044f420();
extern "C" void* __cdecl func_00437f20();

extern unsigned long index_guard;
extern unsigned long type_guard;
extern void (__cdecl* invalid_parameter)();

struct Reference
{
    void* control;
    Reference& operator=(const Reference&);
};

struct Entry
{
    void* pointer;
    Reference reference;

    Entry();
    Entry(const Entry&);
    ~Entry();
};

inline Entry::Entry()
{
    pointer = 0;
    reference.control = 0;
}

struct Entries
{
    unsigned char padding[12];
    Entry* first;
    Entry* last;
    Entry* limit;

    void resize(unsigned int count, Entry value);
};

struct S
{
    unsigned char padding[0x190];
    Entries entries;

    Entry create(void* type);
    void* f();
};

void* S::f()
{
    register_once(initialize_index, &index_guard);
    unsigned int index = reinterpret_cast<unsigned int>(func_0044f420());
    void (__cdecl* fail)() = invalid_parameter;
    Entries* values = &entries;

    if (index + 1 > static_cast<unsigned int>(entries.last - entries.first))
    {
        values->resize(index + 1, Entry());
    }
    else
    {
        if (index >= static_cast<unsigned int>(values->last - values->first))
            fail();

        void* result = values->first[index].pointer;
        if (result)
            return result;
    }

    register_once(initialize_type, &type_guard);
    Entry value = create(func_00437f20());

    if (!value.pointer)
        return 0;

    void* result = value.pointer;

    if (index >= static_cast<unsigned int>(values->last - values->first))
        fail();

    Entry* destination = values->first + index;
    destination->pointer = value.pointer;
    destination->reference = value.reference;
    return result;
}
