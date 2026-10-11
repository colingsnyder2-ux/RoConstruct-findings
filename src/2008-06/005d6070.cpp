// from server: 51% by tester
// roc 2008-06 005d6070  unit: RBX::VTeams::?$FactoryProduct  size: 123 bytes

namespace RBX {
class Instance { public: virtual ~Instance(); char pad[0x100]; Instance* next; };
class ServiceProvider : public Instance { public: ServiceProvider* finish(); };
}

RBX::ServiceProvider* func_00491d50(RBX::Instance* p);

struct GetSetImpl {
    int count();
};

int GetSetImpl::count() {
    char* p = *(char**)((char*)this + 0x108);
    if (!p) return 0;
    return (*(int*)(p + 0x10) - *(int*)(p + 0xc)) >> 3;
}

extern "C" void __stdcall _invalid_parameter_noinfo();

typedef void* (__cdecl *func_6a17c6_t)(void*, void*, void*, void*, void*);
extern func_6a17c6_t func_6a17c6;

extern void* g_802890;

struct VTeams {
    bool isTeamGame();
};

bool VTeams::isTeamGame() {
    RBX::Instance* inst = (RBX::Instance*)this;
    RBX::ServiceProvider* sp = func_00491d50(inst);
    void* ebx = sp;
    unsigned int esi = 0;
    GetSetImpl* gs = (GetSetImpl*)ebx;
    unsigned int n = (unsigned int)gs->count();
    if (n <= 0) {
        return false;
    }
    void* ebp = g_802890;
    char* edi = *(char**)((char*)ebx + 0x108);
    while (true) {
        int cnt = (*(int*)(edi + 0x10) - *(int*)(edi + 0xc)) >> 3;
        if (esi >= (unsigned int)cnt) {
            ((void(*)())ebp)();
        }
        void* eax = *(void**)(*(char**)(edi + 0xc) + esi * 8);
        void* r = func_6a17c6(eax, 0, (void*)0x92907c, (void*)0x937460, 0);
        if (r != 0) {
            if (*(char*)((char*)r + 0x17c) == 0) {
                return true;
            }
        }
        esi++;
        n = (unsigned int)gs->count();
        if (esi >= n) {
            return false;
        }
    }
}
