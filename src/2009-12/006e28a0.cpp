// from server: 90% by atomic.potato
struct BoundFuncDesc
{
    void f();
};

int g_9da8d4;
int g_9da8c8;
int g_9da8bc;
int g_9da8b4;

void BoundFuncDesc::f()
{
    *(int *)this = (int)&g_9da8d4;
    *((int *)this + 1) = (int)&g_9da8c8;
    *((int *)this + 6) = (int)&g_9da8bc;
    *((int *)this + 7) = (int)&g_9da8b4;
}
