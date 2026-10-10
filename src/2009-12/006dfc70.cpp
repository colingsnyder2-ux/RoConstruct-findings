// from server: 90% by atomic.potato
struct S
{
    void f();
};

int g_009da474;
int g_009da468;
int g_009da45c;
int g_009da454;

void S::f()
{
    *(int *)this = (int)&g_009da474;
    *((int *)this + 1) = (int)&g_009da468;
    *((int *)this + 6) = (int)&g_009da45c;
    *((int *)this + 7) = (int)&g_009da454;
}
