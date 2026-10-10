// from server: 46% by colin
struct ExitCommand {
    void execute();
};

extern "C" void __cdecl func_0044d370();
extern "C" void __cdecl func_0045bc30();
extern "C" void __cdecl func_0062fe2a();
extern "C" void __cdecl func_00630a1e();

void ExitCommand::execute()
{
    char buf[0x134];
    int cookie;
    int saved;
    int state;

    cookie = *(int*)0x8b5188;
    cookie ^= (int)&buf;
    *(int*)(buf + 0x130) = cookie;

    state = 0;
    func_0044d370();
    func_0062fe2a();
    state = -1;
    func_0045bc30();
    func_00630a1e();
}
