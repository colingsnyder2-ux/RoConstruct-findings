// from server: 66% by king_originala
extern char registration_data;
void __cdecl registration_callback();
void __cdecl register_callback(void (__cdecl*)(), void*);
void* __cdecl func_00616240();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Owner {
    void release();
};

struct Value {
    void* pointer;
    Owner* owner;

    Value() : pointer(0), owner(0) {}
    ~Value() {
        if (owner)
            owner->release();
    }
};

struct Storage {
    char padding[12];
    Value* first;
    Value* last;
    Value* limit;

    void resize(unsigned count, Value value);
};

struct S {
    char padding[0x190];
    Storage values;

    void* f();
};

void* S::f() {
    register_callback(registration_callback, &registration_data);
    unsigned index = (unsigned)func_00616240();
    Storage& storage = values;

    if (index + 1 > (unsigned)(storage.last - storage.first)) {
        storage.resize(index + 1, Value());
        return 0;
    }

    if (index >= (unsigned)(storage.last - storage.first))
        _invalid_parameter_noinfo();

    void* result = storage.first[index].pointer;
    if (result)
        return result;
    return 0;
}
