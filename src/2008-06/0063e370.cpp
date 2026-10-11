// from server: 75% by colin
// roc 2008-06 0063e370  unit: RBX::LockTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063e370

namespace RBX {
class Instance { public: virtual ~Instance(); char pad[0x100]; Instance* next; };
class ServiceProvider : public Instance { public: ServiceProvider* finish(); };
}

RBX::ServiceProvider* func_005807b0(RBX::Instance* p);

extern "C" bool __stdcall func_0059a040(void* p);
extern "C" void __stdcall func_0059de20(void* p, int b);
extern "C" void* __stdcall func_005807b0_2(void* p, int n);
extern "C" void __stdcall func_005bd820(void* p);

struct LockTool {
    char pad0[0x18];
    void* field18;
    void* field1c;
    LockTool* f(void* arg);
};

LockTool* LockTool::f(void* arg) {
    if (field1c) {
        bool r = func_0059a040(field1c);
        func_0059de20(field1c, r ? 0 : 1);
        void* p = func_005807b0_2(field18, 8);
        func_005bd820(p);
    }
    return this;
}
