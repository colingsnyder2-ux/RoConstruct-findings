// from server: 71% by atomic.potato
extern "C" int __cdecl sub_719EB6(int, int, int);

struct RBX_MeshFaceCustomizableKey {
    int f(unsigned int, int);
};

int RBX_MeshFaceCustomizableKey::f(unsigned int a, int b) {
    int v = 0x6c;
    if (a > 0) {
        unsigned int t = a;
        unsigned int *p;
        if (a > 0x6c)
            p = (unsigned int *)&v;
        else
            p = &t;
        int r = *p;
        sub_719EB6(t, v, r);
        return r;
    }
    return 0;
}
