// from server: 90% by king_originala
struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual unsigned int get(void*);
};

struct EnumTable {
    unsigned char storage[220];
    int* first;
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

    unsigned int count =
        static_cast<unsigned int>(table->last - table->first);
    if (index < count) {
        count = static_cast<unsigned int>(table->last - table->first);
        if (index >= count)
            _invalid_parameter_noinfo();
        return table->first[index];
    }
    return -1;
}
