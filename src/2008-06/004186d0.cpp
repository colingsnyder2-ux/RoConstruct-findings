// from server: 98% by colin
// from server: 0% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_comcreatormfcnullplain_c8b0602c922d1768.cpp

// Candidate translation unit (score above; library headers required).
#define _CPPUNWIND 1
#include <afxwin.h>


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

    try {Object*storage=(Object*)operator new(60);if(storage){storage->initialize();storage->table=&objectTable;storage->secondary=secondaryTable;module->table->addRef(module);}else{storage=0;}object=storage;}catch(CException*exception){exception->Delete();}

    if (object) {
        ++object->references;
        const void *requested = iid;
        --object->references;
        ObjectTable *t = object->table;
        status = t->query(object, requested, result);
        if (status != 0)
            object->table->destroy(object, 1);
    }

    return status;
}