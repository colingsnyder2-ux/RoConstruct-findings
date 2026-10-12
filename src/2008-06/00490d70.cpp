// from server: 66% by king_originala
extern "C" void __cdecl register_value(void (__cdecl *)(), void *);
extern "C" void __cdecl initialize_index();
extern "C" void __cdecl initialize_key();
extern "C" void * __cdecl get_index();
extern "C" void * __cdecl get_key();

extern unsigned char index_storage;
extern unsigned char key_storage;
extern void (__cdecl *invalid_parameter)();

struct Control {
    void *value;
    Control &operator=(const Control &);
};

struct Slot {
    void *object;
    Control control;
};

struct Owned {
    void *object;
    Control control;
    ~Owned();
};

struct Vector {
    unsigned char padding[12];
    Slot *begin;
    Slot *end;
    Slot *capacity;
    void resize(unsigned int, Slot);
};

struct S {
    unsigned char padding[0x190];
    Vector values;
    Owned create(void *);
    void *f();
};

void *S::f()
{
    register_value(initialize_index, &index_storage);
    unsigned int index = (unsigned int)get_index();
    void (__cdecl *failure)() = invalid_parameter;
    Vector *v = &values;

    if (index + 1 > (unsigned int)(v->end - v->begin)) {
        Slot empty = { 0, { 0 } };
        v->resize(index + 1, empty);
    } else {
        if (index >= (unsigned int)(v->end - v->begin))
            failure();

        void *result = v->begin[index].object;
        if (result)
            return result;
    }

    register_value(initialize_key, &key_storage);
    Owned result = create(get_key());

    if (!result.object)
        return 0;

    void *object = result.object;
    if (index >= (unsigned int)(v->end - v->begin))
        failure();

    Slot *destination = v->begin + index;
    destination->object = result.object;
    destination->control = result.control;
    return object;
}
