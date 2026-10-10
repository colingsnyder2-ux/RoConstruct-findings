// from server: 59% by atomic.potato
typedef int (__cdecl *Callback)(int);

extern "C" Callback g_callback;
extern "C" int sub_88f630(void *, int);

struct S
{
    int f(int, int);
};

int S::f(int a, int b)
{
    Callback p = g_callback;
    p(a);
    return sub_88f630(this, b);
}
