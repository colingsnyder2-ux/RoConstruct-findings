// from server: 64% by king_originala
extern void __cdecl callback();
extern unsigned char registration;
extern void __cdecl register_selection(void (__cdecl *)(), void*);
extern void* __cdecl func_0057d800();
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Value {
    void* object;
    void* control;

    Value();
    ~Value();
};

inline Value::Value() : object(0), control(0) {}

struct Storage {
    unsigned char reserved[12];
    Value* first;
    Value* last;
    Value* limit;

    void resize(unsigned int count, Value value);
};

struct S {
    unsigned char reserved[0x190];
    Storage values;

    void* get();
};

void* S::get()
{
    register_selection(callback, &registration);
    unsigned int index =
        reinterpret_cast<unsigned int>(func_0057d800());

    if (index + 1 > static_cast<unsigned int>(values.last - values.first)) {
        values.resize(index + 1, Value());
        return 0;
    }

    if (index >= static_cast<unsigned int>(values.last - values.first))
        _invalid_parameter_noinfo();

    void* result = values.first[index].object;
    if (result)
        return result;
    return 0;
}
