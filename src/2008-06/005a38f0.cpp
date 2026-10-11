// from server: 76% by tester
extern "C" void __stdcall sub_802468(void*);

struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

struct String {
    char buf[0x1c];
    ~String();
};

struct Workspace {
    char pad0[0x3b0];
    void* field3b0;
    void func(void*);
};

ServiceProvider* func_005a3330(Instance* p);

void Workspace::func(void* arg)
{
    ServiceProvider* sp = func_005a3330((Instance*)this);
    Instance* inst = *(Instance**)((char*)sp + 0x130);
    if (inst) {
        void* p = field3b0;
        void* v = (*(void*(**)(void*, void**))p)(p, 0);
        String s;
        (*(void(**)(Instance*, void*, void*))inst)(inst, v, arg);
        s.~String();
    }
}
