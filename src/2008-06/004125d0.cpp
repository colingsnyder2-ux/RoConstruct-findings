// from server: 66% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

extern void __cdecl register_value(void (__cdecl*)(), int*);
extern void __cdecl initialize_index();
extern void __cdecl initialize_type();
extern int index_registration;
extern int type_registration;
extern void* __cdecl func_00411490();
extern void* __cdecl func_00411420();

struct Control {
    void* value;
    Control& operator=(const Control&);
};

struct Value {
    void* pointer;
    Control control;
    ~Value();
};

struct EmptyValue {
    void* pointer;
    void* control;
};

struct Values {
    unsigned char padding[12];
    Value* first;
    Value* last;
    Value* limit;

    void resize(unsigned int, EmptyValue);
    unsigned int size() const;
    Value& at(unsigned int);
};

inline unsigned int Values::size() const {
    return static_cast<unsigned int>(last - first);
}

inline Value& Values::at(unsigned int index) {
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();
    return first[index];
}

struct CChatPrompt {
    unsigned char padding[0x190];
    Values values;

    Value acquire(void*);
    void* lookup();
};

void* CChatPrompt::lookup() {
    register_value(initialize_index, &index_registration);
    unsigned int index = reinterpret_cast<unsigned int>(func_00411490());

    if (index + 1 > values.size()) {
        EmptyValue empty = { 0, 0 };
        values.resize(index + 1, empty);
    } else {
        void* existing = values.at(index).pointer;
        if (existing)
            return existing;
    }

    register_value(initialize_type, &type_registration);
    Value result = acquire(func_00411420());
    if (!result.pointer)
        return 0;

    void* pointer = result.pointer;
    Value& destination = values.at(index);
    destination.pointer = result.pointer;
    destination.control = result.control;
    return pointer;
}
