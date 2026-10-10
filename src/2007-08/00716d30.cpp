// from server: 61% by colin
struct Ctx {
    char pad0[0x20];
    int field20;
    int field24;
    char pad28[0x34];
    int field5c;
    char pad60[0x20];
    int field80;

    int method(int a, int b, int c, int d, int e);
};

struct Inner {
    char pad0[0x10];
    int f10;
    int f14;
    int f18;
    int f1c;
    char pad20[0x8];
    int f28;
};

extern "C" int __stdcall sub_6a79e0(int);
extern "C" void __stdcall sub_716c80(Ctx*, int, int, int);
extern "C" void __stdcall OffsetRect(int*, int, int);

int Ctx::method(int a, int b, int c, int d, int e)
{
    int v24;
    int v2c;
    int v28;
    int v14;
    int v20;
    int v1c;
    int v10;
    int v18;
    int count;
    int i;
    Inner* esi;
    int ebx;
    int ebp;
    int* self;

    v24 = *(int*)(sub_6a79e0(field5c) + 0x640);
    ebx = ((int (__stdcall*)(void))((*(int**)field5c)[0x210/4]))() - 7;

    v20 = field20;
    v2c = 1;
    v28 = 0;
    v14 = 0;
    if (field24 != 0)
        v20 = 0;

    if (field80 != 0)
        v1c = *(int*)(field80 + 4);
    else
        v1c = 0;

    count = v1c;
    ebp = d;
    v10 = 0;
    if (count > 0) {
        v18 = 0;
        do {
            esi = (Inner*)(*(int*)field80 + v18);
            if (esi->f28 == 0) {
                OffsetRect((int*)(esi + 0x10), a + 2, ebp + 2);
                v28 = *(int*)((char*)&v28);
                v14 = v28;
                esi->f10 = v28;
                esi->f14 = ebp;
                esi->f18 = v20 + v28;
                esi->f1c = ebp - v24 + ebx;
                if (v20 != 0 && v2c == 0) {
                    if (v14 != esi->f10) {
                        sub_716c80(this, v28, v10 - 1, ebx - v24 - 3);
                        v14 = esi->f10;
                        v28 = v10;
                    }
                } else {
                    v2c = 0;
                    v14 = esi->f10;
                }
            }
            v10++;
            v18 += 0x44;
        } while (v10 < count);
    }

    if (v20 != 0 && count > 0) {
        sub_716c80(this, v28, *(int*)(field80 + 4) - 1, ebx - v24 - 3);
    }

    {
        int* p = (int*)((char*)&v28 - 0x10);
        p[0] = a;
        p[1] = ebp;
        p[2] = a + b + 5;
        p[3] = ebx + ebp;
        ((void (__stdcall*)(int*))((*(int**)this)[0x58/4]))(p);
    }
    return 0;
}
