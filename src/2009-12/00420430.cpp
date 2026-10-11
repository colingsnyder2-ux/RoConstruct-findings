// from server: 60% by atomic.potato
struct S
{
    int f(int, int, int);
};

extern "C" S *G1_func_004202f0(int);
extern "C" int G1_func_00420030(S *, int, int, int);

int S::f(int a, int b, int c)
{
    S *p = G1_func_004202f0(0);
    G1_func_00420030(p, a, b, c);
    return a;
}
