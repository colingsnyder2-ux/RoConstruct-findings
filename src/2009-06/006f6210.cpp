// from server: 78% by atomic.potato
struct S_func_006f6210 {
    int __cdecl f(int a1, int a2, int a3);
};

int S_func_006f6210::f(int a1, int a2, int a3)
{
    int *p = (int *)a1;
    int v = p[9];
    if (v == 0)
        return p[1];

    int *q = (int *)a2;
    int c = *q;
    if (c != 0)
    {
        int *vt = (int *)c;
        char (__thiscall *fn)(int *, int) = (char (__thiscall *)(int *, int))vt[1];
        if (!fn((int *)c, v))
            return p[1];
    }

    int *r = (int *)a3;
    *q = v;
    *r = a1;
    return p[1];
}
