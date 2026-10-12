// from server: 65% by king_originala
extern void callback();
extern unsigned registrationData;
extern void registerCallback(void (*)(), unsigned*);
extern void* func_0057d860();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Value {
    void* pointer;
    void* control;
    Value() : pointer(0), control(0) {}
    ~Value();
};

struct Storage {
    unsigned reserved[3];
    Value* volatile begin;
    Value* volatile end;
    Value* capacity;
    void resize(unsigned count, Value value);
};

struct Selection {
    unsigned char reserved[0x190];
    Storage values;
    void* get();
};

void* Selection::get()
{
    registerCallback(callback, &registrationData);
    unsigned index = reinterpret_cast<unsigned>(func_0057d860());
    Storage& storage = values;

    if (index + 1 > static_cast<unsigned>(storage.end - storage.begin)) {
        storage.resize(index + 1, Value());
        return 0;
    }

    if (index >= static_cast<unsigned>(storage.end - storage.begin))
        _invalid_parameter_noinfo();

    void* result = storage.begin[index].pointer;
    if (!result)
        __assume(0);
    return result;
}
