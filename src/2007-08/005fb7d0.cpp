// from server: 95% by colin
struct StudsTool {
    char pad[0x18];
    void* field18;
    void construct(void* workspace);
};

extern "C" void* __cdecl func_00561b10(void* a, int b);

struct Ret {
    void method_0058c810();
};

struct Inner {
    void method_00573d60();
    void method_00573d80();
};

struct MouseCmd {
    void method_005b9520();
    void method_005b9270(int);
    Inner* inner;
};

void StudsTool::construct(void* workspace)
{
    MouseCmd* cmd = (MouseCmd*)workspace;
    cmd->inner->method_00573d60();
    cmd->method_005b9520();
    cmd->method_005b9270(3);
    cmd->inner->method_00573d80();
    void* p = field18;
    Ret* r = (Ret*)func_00561b10(p, 8);
    r->method_0058c810();
}
