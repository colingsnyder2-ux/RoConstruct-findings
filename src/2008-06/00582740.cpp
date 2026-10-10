// from server: 47% by atomic.potato
extern "C" void __cdecl Function_0057d250();
extern "C" int Function_00581c00(void *, int);
extern "C" void __cdecl Function_00554da0(int, int);

struct RunCommand
{
    void RunCommandFunction(int);
};

void RunCommand::RunCommandFunction(int value)
{
    int saved;
    saved = *((int *)this + 3);
    Function_0057d250();
    Function_00554da0(Function_00581c00((char *)this + 16, 1), 1);
}
