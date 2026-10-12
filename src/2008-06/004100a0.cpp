// from server: 73% by king_originala
typedef unsigned long ULONG;
typedef long HRESULT;

extern "C" void* __cdecl allocate(unsigned int);
extern "C" bool __cdecl checkStack(unsigned int);
extern "C" void* __cdecl _alloca(unsigned int);
#pragma intrinsic(_alloca)

struct Module;
struct ModuleTable {
    void (__thiscall* first)(Module*);
    void (__thiscall* lock)(Module*);
};

struct Module {
    ModuleTable* table;
};

struct Object {
    void* table;
    ULONG references;
    void* field8;
    void* field12;
    void* field16;
    void* field20;
    void* field24;
};

struct AllocationState {
    unsigned int size;
    int limit;
};

extern Module* module;
extern void* objectTable[];
extern unsigned int allocationFlags;
extern AllocationState allocationState;

HRESULT __stdcall createObject(void* context, Object** result)
{
    if (!result)
        return (HRESULT)0x80004003L;

    *result = 0;
    Object* object = 0;

    try {
        Object* storage = (Object*)allocate(28);
        if (storage) {
            storage->references = 0;
            storage->field16 = 0;
            storage->field12 = 0;
            storage->field8 = 0;
            storage->field20 = 0;
            storage->field24 = 0;
            storage->table = objectTable;
            module->table->lock(module);
            object = storage;
        }
    }
    catch (...) {
        return (HRESULT)0x8007000EL;
    }

    if (!object)
        return (HRESULT)0x8007000EL;

    if (!(allocationFlags & 1)) {
        allocationFlags |= 1;
        allocationState.size = 4;
        allocationState.limit = -1;
    }

    void* buffer = 0;
    try {
        if (checkStack(4))
            buffer = _alloca(4);
        else
            buffer = allocate(4);

        if (!buffer)
            return (HRESULT)0x8007000EL;

        *(void**)buffer = context;
        *result = object;
        return 0;
    }
    catch (...) {
        return (HRESULT)0x8007000EL;
    }
}
