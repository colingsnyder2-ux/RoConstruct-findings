// from server: 49% by tester
struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

ServiceProvider* func_005807b0(Instance* p) {
    while (p) {
        ServiceProvider* q = dynamic_cast<ServiceProvider*>(p);
        if (q) return q->finish();
        p = p->next;
    }
    return 0;
}

struct Inner {
    char pad[0x2d4];
};

struct Outer {
    char pad[0xc];
    Inner* inner;
};

struct Command {
    void* vtable;
    void __cdecl execute(Outer* outer);
};

void func_005a5890(Inner* inner);
void* func_005bd820(void* p);

void Command::execute(Outer* outer) {
    Inner* in = outer->inner;
    func_005a5890(in);
    void* r = func_005807b0((Instance*)outer->inner);
    void* q = func_005bd820(r);
    Command* cmd = (Command*)outer;
    void** vt = (void**)cmd->vtable;
    void (*fn)() = (void (*)())vt[0];
    fn();
}
