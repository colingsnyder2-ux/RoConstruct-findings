// from server: 80% by tester





namespace RBX {
class Instance { public: virtual ~Instance(); char pad[0x100]; Instance* next; };
class ServiceProvider : public Instance { public: ServiceProvider* finish(); };
}

RBX::ServiceProvider* func_005807b0(RBX::Instance* p);

void func_0058c5c0(void* a, void* b);
void func_005bd820(void* a);

struct FlatTool {
    char pad0[0x18];
    void* field18;
    char pad1[0x8];
    void* field24;
    char pad2[0x8];
    char field30[0x14];
    unsigned int field44;
    int method(int arg);
};

int FlatTool::method(int arg) {
    (*(void (__thiscall**)(FlatTool*, int))(*(int*)this + 0xc))(this, arg);
    if (field24) {
        (*(void (__thiscall**)(FlatTool*, void*))(*(int*)this + 0x40))(this, field24);
        void* r = (void*)func_005807b0((RBX::Instance*)field18);
        func_005bd820(r);
        char* p;
        if (field44 < 0x10)
            p = field30;
        else
            p = *(char**)field30;
        func_0058c5c0(p, field18);
        void* v = *(void**)((char*)field18 + 0x3a8);
        (*(void (__thiscall**)(void*, int))(*(int*)v))(v, 1);
    }
    return 0;
}
