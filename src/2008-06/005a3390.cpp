// from server: 55% by atomic.potato
namespace RBX {
class Instance { public: virtual ~Instance(); char pad[0x100]; Instance* next; };
class ServiceProvider : public Instance { public: ServiceProvider* finish(); };
}

RBX::ServiceProvider* func_00491e50(RBX::Instance* p);

struct S {
    char pad[0x2e4];
    int field_2e4;
    int __cdecl f(RBX::Instance* p);
};

int S::f(RBX::Instance* p) {
    RBX::ServiceProvider* s = func_00491e50(p);
    if (s) {
        if (p == (RBX::Instance*)s || ((char*)p)[0] == 0) {
            return ((S*)s)->field_2e4;
        }
    }
    return 0;
}
