// from server: 71% by atomic.potato
extern "C" int __cdecl sub_719EB6(int, int, int);

struct MeshTrussPartKey {
    int f(int, int);
};

int MeshTrussPartKey::f(int a, int b) {
    int v = 0x25;
    if ((unsigned)a > 0) {
        int t = a;
        int *p;
        if ((unsigned)a > 0x25)
            p = &v;
        else
            p = &t;
        int r = *p;
        sub_719EB6(t, v, r);
        return r;
    }
    return 0;
}
