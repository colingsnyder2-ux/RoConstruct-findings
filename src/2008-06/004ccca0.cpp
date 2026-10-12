// from server: 89% by king_originala
struct Control {
    void* value;
    Control() : value(0) {}
    Control& operator=(const Control&);
};

struct Value {
    void* object;
    Control control;
    Value() : object(0), control() {}
    Value(const Value&);
    ~Value();
};

extern "C" void (__cdecl* volatile invalid_parameter)();

struct Values {
    unsigned char reserved[12];
    Value* first;
    Value* last;
    Value* limit;

    unsigned int size() const;
    Value& at(unsigned int, void (__cdecl*)());
    void resize(unsigned int, Value);
};

inline unsigned int Values::size() const
{
    return (unsigned int)(last - first);
}

inline Value& Values::at(unsigned int index, void (__cdecl* invalid)())
{
    if (index >= size())
        invalid();
    return first[index];
}

extern void initialize(void (__cdecl*)(), int*);
extern void __cdecl initialize_index();
extern void __cdecl initialize_type();
extern int index_guard;
extern int type_guard;
extern void* func_004c9be0();
extern void* func_004c9b70();

struct S {
    unsigned char reserved[0x190];
    Values values;

    Value create(void*);
    void* f();
};

void* S::f()
{
    initialize(initialize_index, &index_guard);
    unsigned int index = (unsigned int)func_004c9be0();
    unsigned int count = values.size();
    void (__cdecl* invalid)() = invalid_parameter;
    Values& entries = values;

    if (index + 1 > count) {
        entries.resize(index + 1, Value());
    } else {
        void* existing = entries.at(index, invalid).object;
        if (existing)
            return existing;
    }

    initialize(initialize_type, &type_guard);
    Value result = create(func_004c9b70());
    if (!result.object)
        return 0;

    void* object = result.object;
    Value& destination = entries.at(index, invalid);
    destination.object = result.object;
    destination.control = result.control;
    return object;
}
