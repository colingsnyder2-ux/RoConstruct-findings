// from server: 83% by king_originala
struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual unsigned int get(void*);
};

struct EnumTable {
    unsigned char storage[220];
    int* volatile first;
    int* volatile last;
};

extern unsigned char registrationState;
extern void __cdecl initialize();
extern void __cdecl registerInitializer(void (__cdecl*)(), void*);
extern EnumTable* __cdecl getEnumTable();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Descriptor {
    unsigned char storage[28];
    Accessor* accessor;

    int get(void*);
};

int Descriptor::get(void* object)
{
    unsigned int index = accessor->get(object);
    registerInitializer(initialize, &registrationState);
    EnumTable* table = getEnumTable();

    int* end = table->last;
    unsigned int count = static_cast<unsigned int>(end - table->first);
    if (index < count) {
        end = table->last;
        count = static_cast<unsigned int>(end - table->first);
        if (index >= count)
            _invalid_parameter_noinfo();
        int* begin = table->first;
        return begin[index];
    }
    return -1;
}
