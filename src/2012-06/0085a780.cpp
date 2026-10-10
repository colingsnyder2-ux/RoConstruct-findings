// from server: 73% by atomic.potato
extern "C" void __cdecl sub_859AB0(void *);
extern "C" void __cdecl sub_983144(void *, const void *);

struct S
{
    void f();
};

int g_00D21DE0;

void S::f()
{
    char buffer[40];
    sub_859AB0(buffer);
    sub_983144(buffer, &g_00D21DE0);
}
