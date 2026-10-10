// from server: 42% by colin
extern "C" {
int __stdcall sub_5bf350(int, int, void*);
int __stdcall sub_5bf500(int, int, int);
int __stdcall sub_5bd950(int, int);
int __stdcall sub_5bdb90(int, int);
int __stdcall sub_5bdb50(int);
int __cdecl sub_5ca870(void*, int, void*);
int __cdecl sub_5ca5a0(void*, void*, void*);
int __cdecl sub_5ca9f0(void*, void*, void*);
void* __cdecl strpbrk(const char*, const char*);
}

struct S {
    int f(int, int, int, int, int, int, int, int, int);
};

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    char buf[0x120];
    int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12;
    int ebp, esi, edi;
    int* p;

    sub_5bf350(a1, 1, &v1);
    ebp = (int)&v1;
    sub_5bf350(a1, 2, &v2);
    edi = (int)&v2;
    v3 = sub_5bf500(a1, 3, 1);
    if (v3 < 0)
        v3 = v3 + v1 + 1;
    esi = v3 - 1;
    if (esi < 0)
        esi = 0;
    else if (esi > v1)
        esi = v1;

    if (a9 != 0) {
        if (sub_5bd950(a1, 4) == 0) {
            if (strpbrk((const char*)edi, (const char*)0x7b9f94) != 0)
                goto L_5cab11;
        }
        v4 = v1 - esi;
        v5 = sub_5ca870((void*)(esi + ebp), v4, (void*)edi);
        if (v5 != 0) {
            esi = v5 - ebp;
            sub_5bdb90(a1, esi + 1);
            esi = esi + v2;
            sub_5bdb90(a1, esi);
            return 2;
        }
        goto L_5cabcb;
    }

L_5cab11:
    v6 = v1;
L_5cab15:
    if (*(char*)edi == '^') {
        edi++;
        v7 = edi;
        v8 = 1;
    } else {
        v8 = 0;
    }
L_5cab33:
    v9 = esi + ebp;
    v10 = v6 + ebp;
    v11 = a1;
    v12 = ebp;
    p = (int*)v10;
    v3 = 0;
    while (1) {
        v3 = sub_5ca5a0(&v3, (void*)v9, (void*)edi);
        if (v3 != 0)
            break;
        v9++;
        if ((unsigned)v9 >= (unsigned)v10)
            goto L_5cabcb;
        if (v8 != 0)
            goto L_5cabcb;
        edi = v7;
    }
    if (a9 != 0) {
        sub_5bdb90(a1, v9 - ebp + 1);
        sub_5bdb90(a1, v3 - ebp);
        v3 = sub_5ca9f0(&v3, 0, 0);
        return v3 + 2;
    }
    v3 = sub_5ca9f0(&v3, (void*)esi, (void*)edi);
    return v3;

L_5cabcb:
    sub_5bdb50(a1);
    return 1;
}
