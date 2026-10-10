// from server: 46% by colin
struct CXTPControlTabWorkspace {
    char pad[0x168];
    int field_0x168;
    char pad2[0x1f4 - 0x16c];
    int field_0x1f4;
    int method(int, int, int, int);
};

extern "C" int __stdcall sub_42f350(int, int, int, int);
extern "C" int __stdcall sub_6fe860(int, int);
extern "C" int (__stdcall *off_77dcd0)(int);
extern "C" int (__stdcall *off_77dd74)(int, int*);
extern "C" int (__stdcall *off_77ddb8)(int, int);
extern "C" int (__stdcall *off_77ddbc)(int);

int CXTPControlTabWorkspace::method(int a1, int a2, int a3, int a4)
{
    int result;
    int local;

    if (field_0x1f4 == 0) {
        return sub_42f350(a1, a2, a3, a4);
    }

    result = sub_6fe860(*(int*)a1, *(int*)(a1 + 4));
    if (result == 0)
        goto fail;

    {
        int* vt = *(int**)&field_0x168;
        int (*fn)(void*) = (int (*)(void*))vt[0x2c / 4];
        int r = fn(&field_0x168);
        if (*(int*)(r + 0xdc) == 0)
            goto fail;

        vt = *(int**)&field_0x168;
        fn = (int (*)(void*))vt[0x2c / 4];
        r = fn(&field_0x168);
        if (*(int*)(r + 0xdc) == 2) {
            if (*(int*)(result + 0x20) >= *(int*)(result + 0x24))
                goto fail;
        }

        vt = *(int**)&field_0x168;
        int (*fn2)(void*, int*, int) = (int (*)(void*, int*, int))vt[0x18 / 4];
        fn2(&field_0x168, &local, result);

        local = 0;
        if (off_77dcd0(0)) {
            off_77ddb8(a1, 0x785954);
            off_77ddbc(0);
            return a1;
        }

        *(int*)a3 = *(int*)(result + 0x2c) + 1;
        *(int*)a4 = *(int*)(result + 0x44);
        *(int*)(a4 + 4) = *(int*)(result + 0x48);
        *(int*)(a4 + 8) = *(int*)(result + 0x4c);
        *(int*)(a4 + 12) = *(int*)(result + 0x50);

        off_77dd74(a1, &local);
        off_77ddbc(0);
        return a1;
    }

fail:
    off_77ddb8(a1, 0x785954);
    return a1;
}
