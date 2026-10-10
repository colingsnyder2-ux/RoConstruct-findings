// from server: 39% by colin
struct CArray {
    void f(int, int, int, int, int, int);
};

struct Inner {
    int a;
    int b;
    int c;
    int d;
};

struct Outer {
    char pad[0x50];
    int m50;
    int m54;
    int m58;
    int m5c;
    char pad2[0x24];
    int m84;
    char pad3[0x3c];
    int mc4;
    char pad4[0x18];
    int me0;
    int me4;
};

extern "C" {
    int __stdcall IntersectRect(void*, const void*, const void*);
    int __stdcall IsRectEmpty(const void*);
    void* __stdcall CreateRectRgnIndirect(const void*);
}

void CArray::f(int a, int b, int c, int d, int e, int f)
{
    Outer* self = (Outer*)this;
    int* p = (int*)a;
    int v1 = *(int*)(p[0] + 0x40);
    int v2 = ((int (__thiscall*)(int*))v1)(p);
    if (v2 != 0) {
        int* q = (int*)self->me4;
        int r1 = q[0x4c/4];
        if (r1 == -1) r1 = q[0x48/4];
        int r2 = q[0x4c/4];
        if (r2 == -1) r2 = q[0x48/4];
        int tmp1[4];
        ((void (__thiscall*)(int*, int*, int, int))0x6308aa)((int*)b, tmp1, r2, r1);
        int v3 = ((int (__thiscall*)(int*))p[0x48/4])(p);
        int tmp2[4];
        tmp2[0] = 1;
        tmp2[1] = 1;
        tmp2[2] = 1;
        tmp2[3] = 1;
        ((void (__cdecl*)(int*, int, int*))0x703b80)(tmp2, v3, tmp1);
        int* q2 = (int*)self->me4;
        int s1 = q2[0x58/4];
        if (s1 == -1) s1 = q2[0x54/4];
        int s2 = q2[0x58/4];
        if (s2 == -1) s2 = q2[0x54/4];
        int tmp3[4];
        ((void (__thiscall*)(int*, int*, int, int))0x6308aa)((int*)b, tmp3, s2, s1);
        int v4 = ((int (__thiscall*)(int*))p[0x48/4])(p);
        int tmp4[4];
        tmp4[0] = 1;
        tmp4[1] = 0;
        tmp4[2] = 1;
        tmp4[3] = 1;
        ((void (__cdecl*)(int*, int, int*))0x703b80)(tmp4, v4, tmp3);
    }
    if (self->m84 != 0) {
        int* q3 = (int*)self->me4;
        int t1 = q3[0x58/4];
        if (t1 == -1) t1 = q3[0x54/4];
        int tmp5[4];
        ((void (__thiscall*)(int*, int*, int))0x6308b0)((int*)b, tmp5, t1);
    }
    int v5 = ((int (__thiscall*)(int*))p[0x48/4])(p);
    int tmp6[4];
    tmp6[0] = self->m50;
    tmp6[1] = self->m54;
    tmp6[2] = self->m58;
    tmp6[3] = self->m5c;
    ((void (__cdecl*)(int*, int, int*))0x703b80)(tmp6, v5, tmp6);
    ((void (__thiscall*)(int*, int))0x7383e8)((int*)b, 1);
    if (self->m84 != 0) {
        int* q4 = (int*)self->me0;
        int v6 = *(int*)(q4[0] + 0x28);
        int tmp7[4];
        tmp7[0] = e;
        tmp7[1] = f;
        tmp7[2] = c;
        tmp7[3] = d;
        ((void (__thiscall*)(int*, int*, int*, int*))v6)(q4, (int*)b, (int*)a, tmp7);
    }
    int v7 = *(int*)(*(int*)b + 0x58);
    int tmp8[4];
    ((void (__thiscall*)(int*, int*))v7)((int*)b, tmp8);
    if (self->mc4 != 0) {
        ((void (__stdcall*)(int*, int*, int*))0x77ee5c)(tmp8, tmp8, (int*)(a + 0x24));
    }
    if (((int (__stdcall*)(int*))0x77eddc)(tmp8) == 0) {
        int tmp9 = 0;
        int tmp10 = 0x7c6704;
        if (self->mc4 != 0) {
            int v8 = ((int (__stdcall*)(int*))0x77d0d8)(tmp8);
            ((void (__thiscall*)(int*, int))0x630238)(&tmp10, v8);
            ((void (__thiscall*)(int*, int*))0x73850e)((int*)b, &tmp10);
            int* q5 = (int*)self->me4;
            int v9 = *(int*)(q5[0] + 0x1c);
            int tmp11[4];
            tmp11[0] = e;
            tmp11[1] = f;
            tmp11[2] = c;
            tmp11[3] = d;
            ((void (__thiscall*)(int*, int*, int*))v9)(q5, (int*)b, tmp11);
        }
        int* arr = (int*)(a + 0x84);
        int cnt = arr[1] - 1;
        while (cnt >= 0) {
            ((void (__thiscall*)(CArray*, int*, int*, int))0x700bc0)(this, (int*)a, tmp8, cnt);
            cnt--;
        }
        if (self->mc4 != 0) {
            ((void (__thiscall*)(int*, int))0x73850e)((int*)b, 0);
        }
        tmp10 = 0x7c6704;
        ((void (__thiscall*)(int*))0x41f680)(&tmp10);
    }
    int idx = *(int*)(a + 0x70) - 1;
    while (idx >= 0) {
        int* elem;
        if (idx >= 0 && idx < *(int*)(a + 0x70)) {
            elem = (int*)(*(int*)(a + 0x6c) + idx * 4);
        } else {
            elem = 0;
        }
        ((void (__thiscall*)(int*, int*))0x6fdb60)(elem, (int*)b);
        idx--;
    }
}
