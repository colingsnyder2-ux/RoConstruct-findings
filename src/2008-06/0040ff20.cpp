// from server: 98% by king_originala
extern void* __cdecl operator new(unsigned int);
extern void* objectTable[];

struct Module;
struct ModuleTable {
    void (__thiscall* first)(Module*);
    void (__thiscall* lock)(Module*);
};
struct Module {
    ModuleTable* table;
};
extern Module* module;

struct Exception {
    long status;
};

struct Object {
    void** table;
    long references;
    void* begin;
    void* end;
    void* current;
    void* owner;
    unsigned int flags;

    Object() throw();
    static long __stdcall Create(Object** result);
};

__forceinline Object::Object() throw()
{
    references = 0;
    current = 0;
    end = 0;
    begin = 0;
    owner = 0;
    flags = 0;
    table = objectTable;
    module->table->lock(module);
}

long __stdcall Object::Create(Object** result)
{
    if (!result)
        return (long)0x80004003;

    *result = 0;
    long status = (long)0x8007000e;
    Object* object = 0;

    try {
        object = new Object;
    }
    catch (Exception& exception) {
        status = exception.status;
    }
    catch (...) {
    }

    if (object)
        status = 0;

    *result = object;
    return status;
}
