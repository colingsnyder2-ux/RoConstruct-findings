// from server: 72% by atomic.potato
extern "C" int __cdecl sub_719EB6(int, int, int);

struct MeshPartKey {
    unsigned int f(unsigned int, unsigned int);
};

unsigned int MeshPartKey::f(unsigned int a, unsigned int b) {
    unsigned int v = 0x21;
    unsigned int r = 0;
    if (a > 0) {
        unsigned int t = a;
        unsigned int *p;
        if (a > 0x21)
            p = &v;
        else
            p = &t;
        r = *p;
        sub_719EB6(a, v, r);
    }
    return r;
}
