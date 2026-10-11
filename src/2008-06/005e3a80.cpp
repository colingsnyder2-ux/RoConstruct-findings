// from server: 68% by colin
// roc 2008-06 005e3a80  unit: RBX::JointInstance  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3a80

struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

struct JointInstance;

extern "C" void __stdcall func_0055acc0(JointInstance*);
extern "C" void* __stdcall func_0040ad80();
extern "C" char __stdcall func_0056fe10(void*, void*);
extern "C" ServiceProvider* __stdcall func_00491e50(Instance*);
extern "C" void* __stdcall func_005a3390(JointInstance*);
extern "C" void __stdcall func_005ea3a0(void*, void*);
extern "C" void __stdcall func_005ea320(void*, void*);

struct JointInstance {
    char pad0[0x104];
    Instance* field104;
    char pad1[0x150 - 0x108];
    void* field150;

    void func(JointInstance* other);
};

void JointInstance::func(JointInstance* other) {
    func_0055acc0(other);

    void* esi = field150;
    void* ebx;
    if (*(void**)((char*)esi + 4) == 0) {
        ebx = 0;
    } else {
        void* ecx = *(void**)((char*)esi + 4);
        void** edx = *(void***)ecx;
        void* eax = edx[1];
        int r = ((int (__thiscall*)(void*))eax)(ecx);
        if (r == 7) {
            void* ecx2 = *(void**)((char*)esi + 4);
            esi = *(void**)((char*)ecx2 + 4);
        } else {
            esi = *(void**)((char*)esi + 4);
        }
        ebx = *(void**)((char*)esi + 0xc);
    }

    void* esi2;
    if (field104 != 0) {
        void* s = *(void**)((char*)field104 + 0x1c);
        void* p = func_0040ad80();
        char c = func_0056fe10(s, p);
        if (c) {
            ServiceProvider* sp = func_00491e50((Instance*)this);
            if (sp) {
                esi2 = *(void**)((char*)sp + 0x2e4);
            } else {
                esi2 = 0;
            }
        } else {
            esi2 = func_005a3390(this);
        }
    } else {
        esi2 = func_005a3390(this);
    }

    if (ebx != esi2) {
        if (ebx != 0) {
            void* edx = field150;
            func_005ea3a0(ebx, edx);
        }
        if (esi2 != 0) {
            void* eax = field150;
            func_005ea320(esi2, eax);
        }
    }
}
