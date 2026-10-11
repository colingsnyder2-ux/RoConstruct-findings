// from server: 65% by atomic.potato
struct ConstraintSurfacePair
{
    int f(int a, int b, int c, int d);
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
};

int ConstraintSurfacePair::f(int a, int b, int c, int d)
{
    v1 = a;
    v2 = c;
    v0 = 0x00be0658;
    v3 = *reinterpret_cast<int *>(b);
    v4 = *reinterpret_cast<int *>(d);
    v0 = 0x00be0688;
    return 0;
}
