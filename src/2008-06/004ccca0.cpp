// from server: 88% by king_originala
struct Control {
    void* value;
    Control& operator=(const Control&);
};

struct Value {
    void* object;
    Control control;
    Value() : object(0) { control.value = 0; }
    Value(const Value&);
    ~Value();
};

extern "C" void (__cdecl* volatile invalid_parameter)();

struct Values {
    unsigned char reserved[12];
    Value* first;
    Value* last;
    Value* limit;

    void resize(unsigned int, Value);
};

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
    unsigned int count = (unsigned int)(
        *(Value* volatile*)&values.last - values.first);
    void (__cdecl* invalid)() = invalid_parameter;
    Values& entries = values;

    if (index + 1 > count) {
        entries.resize(index + 1, Value());
    } else {
        if (index >= (unsigned int)(entries.last - entries.first))
            invalid();
        void* existing = entries.first[index].object;
        if (existing)
            return existing;
    }

    initialize(initialize_type, &type_guard);
    Value result = create(func_004c9b70());
    if (!result.object)
        return 0;

    void* object = result.object;
    if (index >= (unsigned int)(entries.last - entries.first))
        invalid();

    Value& destination = entries.first[index];
    destination.object = result.object;
    destination.control = result.control;
    return object;
}
