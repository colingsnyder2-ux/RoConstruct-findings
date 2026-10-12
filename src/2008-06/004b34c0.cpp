// from server: 63% by king_originala
struct Value {
    void* pointer;
    void* control;

    Value() : pointer(0), control(0) {}
    ~Value();
};

struct Storage {
    unsigned char padding[12];
    Value* first;
    Value* last;
    Value* limit;

    void resize(unsigned int count, Value value);
};

extern int initializationFlag;
extern void __cdecl initialize();
extern void __cdecl initializeOnce(void (__cdecl* function)(), int* flag);
extern void* __cdecl func_004ab4d0();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Creator {
    unsigned char padding[0x190];
    Storage values;

    void* get();
};

void* Creator::get()
{
    initializeOnce(initialize, &initializationFlag);
    unsigned int index = (unsigned int)func_004ab4d0();

    if (index + 1 > (unsigned int)(values.last - values.first)) {
        values.resize(index + 1, Value());
        return 0;
    }

    if (index >= (unsigned int)(values.last - values.first))
        _invalid_parameter_noinfo();

    return values.first[index].pointer;
}
