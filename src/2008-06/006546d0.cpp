// from server: 35% by colin
// roc 2008-06 006546d0  unit: RBX::ScoreHud  size: 391 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006546d0

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __stdcall sub_802468(void*);
extern "C" void __stdcall sub_802890();

struct Inner {
    char pad[0xc];
    int field_c;
    int field_10;
};

struct Vec {
    char pad[0x18];
    Inner inner;
};

struct S {
    char pad0[0xc];
    int field_c;
    int field_10;
    char pad1[0x4];
    Vec vec18;
    char pad2[0x8];
    Vec vec38;
    void func(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_650eb0(int, int, int);
extern "C" int __cdecl sub_652c80(void*, void*);
extern "C" int __cdecl sub_654250(void*, void*, void*);
extern "C" int __cdecl sub_671910(void*, void*);
extern "C" int __cdecl sub_429aa0(void*, void*);

void S::func(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16)
{
    int local_54;
    int local_50;
    int local_34;
    int local_30;
    int local_28;
    int local_14;
    int local_10;
    int local_c;

    local_28 = 1;
    local_c = field_10;
    if (field_c > field_10)
        sub_802890();

    local_14 = *(int*)this;
    int ebp = field_10;
    if (field_c > ebp)
        sub_802890();

    int edi = field_c;
    if (edi > field_10)
        sub_802890();

    int ebx = *(int*)this;
    int r = sub_650eb0(edi, ebp, (int)&local_54);
    edi = r;
    if (ebx != 0 && ebx != local_14)
        sub_802890();

    if (edi == local_10) {
        sub_429aa0(this, &local_54);
    }

    int* p = (int*)sub_652c80(&vec18, &local_50);
    edi = *p;
    local_10 = p[4];
    if (p[3] > p[4])
        sub_802890();

    local_14 = *(int*)edi;
    p = (int*)sub_652c80(&vec18, &local_50);
    ebp = p[4];
    if (p[3] > p[4])
        sub_802890();

    p = (int*)sub_652c80(&vec18, &local_50);
    ebx = (int)p;
    edi = p[3];
    if (edi > p[4])
        sub_802890();

    ebx = *(int*)ebx;
    edi = sub_650eb0(edi, ebp, (int)&local_34);
    if (ebx != 0 && ebx != local_10)
        sub_802890();

    if (edi == local_c) {
        p = (int*)sub_652c80(&vec18, &local_50);
        sub_429aa0(p, &local_30);
    }

    p = (int*)sub_654250(&vec38, &local_34, &local_50);
    p = (int*)sub_671910(p, &local_30);
    *p = local_54;

    local_28 = 0;
    sub_802468(&local_30);
    local_28 = -1;
    sub_802468(&local_50);
}
