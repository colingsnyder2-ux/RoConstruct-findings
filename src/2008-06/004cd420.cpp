// from server: 41% by tester
// roc 2008-06 004cd420  unit: RBX::Network::RoundRobinPhysicsSender  size: 225 bytes

struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

struct PhysicsSender {
    char pad0[4];
    Instance* instance;
    char pad1[4];
    double lastTime;
    void send(double now, int arg);
};

struct Sender {
    char pad0[4];
    Instance* instance;
    char pad1[4];
    double lastTime;
    void send(double now, int arg);
};

extern "C" ServiceProvider* __cdecl func_00491e50(Instance* p);
extern "C" void __cdecl func_004cbd40(void* self, Instance* a, int b);
extern "C" void __cdecl func_004c9a70(void* self);
extern "C" void* __cdecl func_004ca040(void* self);
extern "C" void __cdecl func_004cac30(void* self, void* a);
extern "C" void __cdecl func_004cbad0(void* self, void* a, void* b, void* c);
extern "C" void* __cdecl func_005e93b0(void* self);
extern "C" double __cdecl func_00508410();

extern double g_826938;

void Sender::send(double now, int arg)
{
    char buf[0x13c];
    int flag = 0;
    func_004cbd40(buf, this->instance, *(int*)((char*)this->instance + 0x2d50));
    ServiceProvider* sp = func_00491e50(this->instance);
    if (sp) {
        void* p = func_005e93b0(*(void**)((char*)sp + 0x2e4));
        void* q = func_004ca040(this);
        if (q) {
            double t = func_00508410();
            if (!(t < this->lastTime + g_826938)) {
                func_004cac30(buf, q);
                this->lastTime = t;
            } else {
                q = 0;
            }
        }
        func_004cbad0(p, buf, (char*)this + 8, q);
    }
    func_004c9a70(buf);
}
