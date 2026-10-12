// from server: 92% by king_originala
struct Object;

struct ObjectTable {
    long (__stdcall *query)(Object *, const void *, void **);
    void *slot1;
    void *slot2;
    void *slot3;
    void *(__thiscall *destroy)(Object *, unsigned int);
};

struct Object {
    ObjectTable *table;
    void *secondary;
    volatile long references;
    unsigned char storage[48];

    void initialize();
};

struct Module;

struct ModuleTable {
    void *slot0;
    unsigned long (__thiscall *addRef)(Module *);
};

struct Module {
    ModuleTable *table;
};

struct Exception {
    long status;
};

extern ObjectTable objectTable;
extern unsigned char secondaryTable[];
extern Module *module;

void *__cdecl operator new(unsigned int);

long __stdcall CreateInstance(void *context, const void *iid, void **result)
{
    if (!result)
        return (long)0x80004003;

    *result = 0;
    long status = (long)0x8007000E;
    Object *object = 0;

    try {
        object = (Object *)operator new(60);
        if (object) {
            object->initialize();
            object->table = &objectTable;
            object->secondary = secondaryTable;
            module->table->addRef(module);
        } else {
            object = 0;
        }
    } catch (Exception &exception) {
        status = exception.status;
        object = 0;
    } catch (...) {
        object = 0;
    }

    if (object) {
        ++object->references;
        const void *requested = iid;
        --object->references;
        status = object->table->query(object, requested, result);
        if (status != 0)
            object->table->destroy(object, 1);
    }

    return status;
}
