// from server: 54% by atomic.potato
namespace RBX {
class Instance { public: virtual ~Instance(); char pad[0x44]; Instance* next; };
class ServiceProvider : public Instance { public: ServiceProvider* finish(); };
}

RBX::ServiceProvider* func_0060d830(RBX::Instance* p);

struct CameraZoomInCommand {
    char pad[0xc];
    RBX::Instance* instance;
    void execute(int);
};

bool func_0065a2f0(void*, float);
void func_00649fb0(void*);

void CameraZoomInCommand::execute(int a) {
    RBX::Instance* p = this->instance;
    void* q = (char*)p + 0x118;
    void* (*vfn)(void*) = *(void*(**)(void*))q;
    void* r = vfn(q);
    if (func_0065a2f0(r, 1.0f)) {
        RBX::Instance* p2 = this->instance;
        void* s = func_0060d830(p2);
        func_00649fb0(s);
        void* t = *(void**)&a;
        (void)t;
        *(int*)&a = 1;
        void** vt = *(void***)t;
        void (*fn)() = (void(*)())vt[0];
        fn();
    }
}
