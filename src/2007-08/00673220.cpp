// from server: 52% by colin
struct CXTPControlColorSelector {
    int f(int, int, int, int);
};

extern "C" int __stdcall sub_77dd74(void*, const void*);
extern "C" int __stdcall sub_77ddb8(void*, const char*);

extern int g_008c8d5c[];
extern int g_008c8d60[];

int CXTPControlColorSelector::f(int a, int b, int c, int d)
{
    if (a == 0 || c == 0 || d == 0)
    {
        sub_77ddb8((void*)b, "l$$S");
        return b;
    }

    int v[2];
    v[0] = *(int*)a;
    v[1] = *(int*)(a + 4);

    int idx = ((int (__thiscall*)(CXTPControlColorSelector*, int, int))0x672e50)(this, v[0], v[1]);
    if (idx == -1)
    {
        sub_77ddb8((void*)b, "l$$S");
        return b;
    }

    int t = idx + idx * 2;
    t += t;
    int val = g_008c8d5c[t + t];
    t += t;
    *(int*)d = val;

    int out[4];
    ((void (__thiscall*)(CXTPControlColorSelector*, int*, int))0x672e00)(this, out, idx);

    *(int*)c = out[0];
    *(int*)(c + 4) = out[1];
    *(int*)(c + 8) = out[2];
    *(int*)(c + 12) = out[3];

    sub_77dd74((void*)b, &g_008c8d60[t]);
    return b;
}
