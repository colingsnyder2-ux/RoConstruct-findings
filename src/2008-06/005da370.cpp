// from server: 64% by king_originala
extern "C" void __cdecl callback();
extern "C" void __cdecl register_callback(void (__cdecl*)(), void*);
extern char callback_state;
extern void* func_005d78f0();
extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Control {
    void release();
};

struct Entry {
    void* value;
    Control* control;

    Entry() : value(0), control(0) {}
    ~Entry() {
        if (control)
            control->release();
    }
};

struct Entries {
    char pad[12];
    Entry* begin;
    Entry* end;
    Entry* capacity;

    void resize(unsigned count, Entry value);
};

struct S {
    char pad[0x190];
    Entries entries;

    void* f();
};

void* S::f()
{
    register_callback(callback, &callback_state);
    unsigned index = reinterpret_cast<unsigned>(func_005d78f0());

    if (index + 1 > static_cast<unsigned>(entries.end - entries.begin)) {
        entries.resize(index + 1, Entry());
        return 0;
    }

    if (index >= static_cast<unsigned>(entries.end - entries.begin))
        invalid_parameter_noinfo();

    return entries.begin[index].value;
}
