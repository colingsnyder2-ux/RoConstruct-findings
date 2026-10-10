// from server: 57% by atomic.potato
extern "C" void __cdecl Function57D250(void *);
extern "C" int __cdecl Function581C00(void *, int);
extern "C" void __cdecl Function554DA0(int, int);

struct ResetCommand
{
    void f(int);
};

void ResetCommand::f(int value)
{
    int saved = *(int *)((char *)this + 12);
    Function57D250((void *)saved);
    int result = Function581C00((char *)this + 16, 1);
    Function554DA0(result, 0);
}
