// from server: 32% by colin
struct ExitCommand {
    void execute();
};

struct Helper {
    void init(int, int);
    void cleanup();
};

extern "C" void __stdcall func_0044d210();
extern "C" void __stdcall func_0045bc30();
extern "C" void __stdcall func_0062fe2a();
extern "C" void __stdcall func_00630a1e();

void ExitCommand::execute()
{
    char buf[0x134];
    Helper h;
    h.init(*(int*)((char*)this + 0x78), 0);
    func_0062fe2a();
    h.cleanup();
    func_0045bc30();
    func_00630a1e();
}
