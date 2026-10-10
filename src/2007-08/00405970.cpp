// from server: 50% by colin
struct VCWorkspace_CComObject {
    int __stdcall sub_405970(int a1, int a2, int a3, int a4);
};

int __stdcall VCWorkspace_CComObject::sub_405970(int a1, int a2, int a3, int a4)
{
    int* p;
    int* q;
    int v;
    int r;

    if (a1 != 0)
        p = (int*)(a1 - 0x18);
    else
        p = 0;

    q = (int*)*p;
    v = ((int (__stdcall*)(int*, int*, int*))q[0])(p, &a2, (int*)a3);
    if (v < 0)
        return (int)0x80004002;

    q = (int*)*p;
    ((void (__stdcall*)(int*, int*))q[2])(p, (int*)a2);

    if ((a4 & 0xfffffffe) != 0)
        return (int)0x80004005;

    r = ((int (__stdcall*)(int*))0x4046c0)(p);
    if (r == 0)
    {
        int t = a4;
        a4 &= a3;
        t = ~t;
        t &= p[1];
        t |= a4;
        p[1] = t;
        return 0;
    }
    return r;
}
