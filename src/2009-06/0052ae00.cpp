// from server: 70% by atomic.potato
extern "C" int __cdecl sub_719EB6(int, int, int);

struct RBX_MeshPartSkinedKey
{
    int f(int, int);
};

int RBX_MeshPartSkinedKey::f(int a, int b)
{
    int v = 0x31;
    if ((unsigned)a > 0)
    {
        int t = a;
        int *p = ((unsigned)a > 0x31) ? &v : &t;
        int s = *p;
        sub_719EB6(a, v, s);
        return s;
    }
    return v;
}
