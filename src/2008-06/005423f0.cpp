// from server: 32% by atomic.potato
struct S
{
    void member();
};

extern "C" void __cdecl Function0054c640(int);

void S::member()
{
    Function0054c640(*(int *)((char *)this + 0x18));
}
