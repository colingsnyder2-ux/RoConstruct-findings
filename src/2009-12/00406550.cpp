// from server: 76% by atomic.potato
struct S {
    int __stdcall Release(int);
};

int __stdcall S::Release(int)
{
    int *p;
    int n;

    p = *(int **)((char *)this + 4);
    --p[6];
    n = p[6];

    if (n == 0 && p != 0) {
        int **q = (int **)((char *)p + 12);
        ((void (__thiscall *)(int *, int))q[0][5])(q[0], 1);
    }

    return n;
}
