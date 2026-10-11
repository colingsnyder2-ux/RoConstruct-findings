// from server: 28% by atomic.potato
extern "C" void __stdcall func_007f385a(void*);
extern "C" void __stdcall func_0055f770();

struct NetworkOwnerJob {
    char pad0[4];
    void* field4;
    char pad8[0x14];
    void* field1c;
    void* field20;
    void destroy();
};

void NetworkOwnerJob::destroy()
{
    func_0055f770();
    if (field1c != 0) {
        func_007f385a(field20);
    }
    func_007f385a(field4);
}
