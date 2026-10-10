// from server: 95% by atomic.potato
struct S
{
    int f();
};

int g_5980d0;

int S::f()
{
    *(int*)this = 0xA8FC14;
    *((int*)this + 1) = 0xA8FC08;
    *((int*)this + 6) = 0xA8FBFC;
    *((int*)this + 7) = 0xA8FBF0;
    return g_5980d0;
}
