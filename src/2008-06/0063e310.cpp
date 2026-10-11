// from server: 68% by tester
// roc 2008-06 0063e310  unit: RBX::AnchorTool  size: 87 bytes




namespace RBX {
class Instance { public: virtual ~Instance(); char pad[0x100]; Instance* next; };
class ServiceProvider : public Instance { public: ServiceProvider* finish(); };
}

extern "C" bool __cdecl func_0059a040(void* p);
extern "C" void* __cdecl func_0063dfe0(void* p);
extern "C" void __cdecl func_0063dd50(void* a, bool* b, void* c);
extern "C" void* __cdecl func_005807b0(RBX::Instance* p);
extern "C" void __cdecl func_005bd820(void* p);

struct AnchorTool {
    char pad0[0x18];
    RBX::Instance* inst;
    void* field1c;
    AnchorTool* method(void* arg);
};

AnchorTool* AnchorTool::method(void* arg) {
    if (field1c) {
        if (!func_0059a040(field1c)) {
            void* r = func_0063dfe0(field1c);
            bool b = (r != 0);
            func_0063dd50(field1c, &b, field1c);
            void* q = func_005807b0(inst);
            func_005bd820(q);
        }
    }
    return this;
}
