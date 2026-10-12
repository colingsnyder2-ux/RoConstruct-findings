// from server: 71% by king_originala
extern "C" void (__cdecl* invalid_parameter_noinfo)();

extern void __cdecl register_type(void (__cdecl*)(), const void*);
extern void __cdecl register_first();
extern void __cdecl register_second();
extern const char first_descriptor;
extern const char second_descriptor;

extern void* __cdecl func_004962f0();
extern void* __cdecl func_0048a1e0();

struct Count {
    void* control;
    Count& operator=(const Count&);
};

struct Pair {
    void* object;
    Count count;
    ~Pair();
};

struct EmptyPair {
    void* object;
    void* control;
    EmptyPair();
};

__forceinline EmptyPair::EmptyPair()
{
    object = 0;
    control = 0;
}

struct Vector {
    char reserved[12];
    Pair* first;
    Pair* volatile last;
    Pair* limit;

    void resize(unsigned int, EmptyPair);
};

struct S {
    char reserved[0x190];
    Vector values;

    Pair create(void*);
    void* f();
};

void* S::f()
{
    register_type(register_first, &first_descriptor);
    unsigned int index = reinterpret_cast<unsigned int>(func_004962f0());
    void (__cdecl* invalid)() = invalid_parameter_noinfo;
    Vector& v = values;

    if (index + 1 > static_cast<unsigned int>(v.last - v.first)) {
        v.resize(index + 1, EmptyPair());
    } else {
        if (index >= static_cast<unsigned int>(v.last - v.first))
            invalid();
        void* cached = v.first[index].object;
        if (cached)
            return cached;
    }

    register_type(register_second, &second_descriptor);
    Pair result = create(func_0048a1e0());
    if (!result.object)
        return 0;

    void* object = result.object;
    if (index >= static_cast<unsigned int>(v.last - v.first))
        invalid();

    Pair& destination = v.first[index];
    destination.object = result.object;
    destination.count = result.count;
    return object;
}
