// from server: 71% by atomic.potato
extern "C" int __cdecl sub_719EB6(int, int, int);

struct RBX_MeshTrussFaceKey
{
    unsigned int f(unsigned int, unsigned int);
};

unsigned int RBX_MeshTrussFaceKey::f(unsigned int a, unsigned int b)
{
    unsigned int v = 0x28;
    if (a > 0)
    {
        unsigned int t = a;
        unsigned int *p = (a > 0x28) ? &v : &t;
        unsigned int r = *p;
        sub_719EB6(t, v, r);
        return r;
    }
    return 0;
}
