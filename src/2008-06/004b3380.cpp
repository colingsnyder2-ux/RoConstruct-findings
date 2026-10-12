// from server: 89% by king_originala
struct Control {
    void* pointer;
    Control();
    void assign(const Control&);
};

struct Value {
    void* pointer;
    Control control;
    Value();
    Value(const Value&);
    ~Value();
};

__forceinline Control::Control() : pointer(0) {}
__forceinline Value::Value() : pointer(0), control() {}

typedef void (__cdecl* ErrorHandler)();
extern ErrorHandler invalid_parameter;

struct Table {
    char padding[12];
    Value* first;
    Value* last;
    Value* limit;

    void resize(unsigned int, Value);
    unsigned int size() const;
    Value& at(unsigned int, ErrorHandler);
};

__forceinline unsigned int Table::size() const
{
    return (unsigned int)(last - first);
}

__forceinline Value& Table::at(unsigned int index, ErrorHandler error)
{
    if (index >= size())
        error();
    return first[index];
}

extern void register_value(void (__cdecl*)(), void*);
extern void __cdecl initialize_index();
extern void __cdecl initialize_type();
extern char index_state;
extern char type_state;
extern void* func_004ab470();
extern void* func_004ab0f0();

struct S {
    char padding[0x190];
    Table table;
    Value lookup(void*);
    void* f();
};

void* S::f()
{
    register_value(initialize_index, &index_state);
    unsigned int index = (unsigned int)func_004ab470();
    unsigned int count = table.size();
    ErrorHandler error = invalid_parameter;
    Table& values = table;

    if (index + 1 > count) {
        values.resize(index + 1, Value());
    } else {
        void* existing = values.at(index, error).pointer;
        if (existing)
            return existing;
    }

    register_value(initialize_type, &type_state);
    Value value = lookup(func_004ab0f0());

    if (!value.pointer)
        return 0;

    void* result = value.pointer;
    Value& destination = values.at(index, error);
    destination.pointer = value.pointer;
    destination.control.assign(value.control);
    return result;
}
