// from server: 57% by atomic.potato
extern "C" void __cdecl sub_71A57A(int);

struct S
{
    void f(void *, void *);
};

void S::f(void *, void *p)
{
    int v = *(int *)((char *)p - 4) ^ (int)p;
    sub_71A57A(v);
}
