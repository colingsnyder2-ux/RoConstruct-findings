// from server: 54% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Instance {
    void* vptr;
    long refCount;
    long weakRefCount;
};

struct ServiceProvider {
    char pad0[8];
    Instance** serviceArrayBegin;
    Instance** serviceArrayEnd;
    char pad10[4];
    void* currentGuard;
    void addService(Instance* inst, void* name);
};

void ServiceProvider::addService(Instance* inst, void* name) {
    unsigned int index = 0;
    int count;
    if (serviceArrayBegin == 0) {
        count = 0;
    } else {
        count = (int)((char*)serviceArrayEnd - (char*)serviceArrayBegin) >> 2;
    }
    void* savedGuard = currentGuard;
    void* localGuard[2];
    localGuard[0] = 0;
    localGuard[1] = (void*)count;
    currentGuard = localGuard;
    if (count > 0) {
        while (index < (unsigned)count) {
            if (serviceArrayBegin == 0 || index >= (unsigned)(((char*)serviceArrayEnd - (char*)serviceArrayBegin) >> 2)) {
                _invalid_parameter_noinfo();
            }
            Instance* item = serviceArrayBegin[index];
            void* local[2];
            local[0] = name;
            local[1] = inst;
            if (inst != 0) {
                _InterlockedExchangeAdd(&inst->refCount, 1);
            }
            addService(item, local);
            index++;
        }
    }
    currentGuard = savedGuard;
    if (inst != 0) {
        if (_InterlockedExchangeAdd(&inst->refCount, -1) == 1) {
            void** vt = (void**)inst->vptr;
            ((void(__thiscall*)(Instance*))vt[1])(inst);
            if (_InterlockedExchangeAdd(&inst->weakRefCount, -1) == 1) {
                void** vt2 = (void**)inst->vptr;
                ((void(__thiscall*)(Instance*))vt2[2])(inst);
            }
        }
    }
}
