// from server: 87% by king_originala
struct Control {
    void* value;
    Control& operator=(const Control&);
};

struct Shared {
    void* pointer;
    Control control;

    Shared() : pointer(0) { control.value = 0; }
    Shared(const Shared&);
    ~Shared();
};

struct Storage {
    unsigned char prefix[12];
    Shared* first;
    Shared* last;
    Shared* limit;

    void resize(unsigned, Shared);
};

extern "C" void __cdecl register_initializer(void (__cdecl*)(), void*);
extern "C" void __cdecl initialize_index();
extern "C" void __cdecl initialize_type();
extern "C" void* __cdecl get_index();
extern "C" void* __cdecl get_type();
extern unsigned index_guard;
extern unsigned type_guard;
extern void (__cdecl* volatile invalid_parameter_handler)();

struct S {
    unsigned char prefix[0x190];
    Storage objects;

    Shared create(void*);
    void* get();
};

void* S::get()
{
    register_initializer(initialize_index, &index_guard);
    unsigned index = (unsigned)get_index();
    unsigned count = (unsigned)(
        ((volatile Storage*)&objects)->last -
        ((volatile Storage*)&objects)->first);
    void (__cdecl* invalid)() = invalid_parameter_handler;
    Storage* storage = &objects;

    if (index + 1 > count) {
        storage->resize(index + 1, Shared());
    } else {
        if (index >= (unsigned)(storage->last - storage->first))
            invalid();

        void* existing = storage->first[index].pointer;
        if (existing)
            return existing;
    }

    register_initializer(initialize_type, &type_guard);
    Shared value = create(get_type());
    if (!value.pointer)
        return 0;

    void* result = value.pointer;
    if (index >= (unsigned)(storage->last - storage->first))
        invalid();

    Shared* destination = storage->first + index;
    destination->pointer = value.pointer;
    destination->control = value.control;
    return result;
}
