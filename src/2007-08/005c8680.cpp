// from server: 75% by colin
extern "C" int __cdecl sub_6130C0(int, int);
extern "C" int __cdecl sub_60FA40(int);
extern "C" int __cdecl sub_6139F0(int, int, int, int);

struct S {
    char pad[0x0C];
    int field_0C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
    int method();
};

int S::method() {
    int* p10;
    int* p;
    int v;

    p = (int*)this;
    v = *(int*)((char*)this + 0x20);
    p10 = *(int**)((char*)this + 0x10);

    sub_6130C0((int)this, v);
    sub_60FA40((int)this);

    p = *(int**)((char*)this + 0x10);
    v = p[2];
    v += v;
    v += v;
    sub_6139F0((int)this, p[0], v, 0);

    v = *(int*)((char*)p10 + 0x3C);
    int v2 = *(int*)((char*)p10 + 0x34);
    v = sub_6139F0((int)this, v2, v, 0);
    *(int*)((char*)p10 + 0x34) = v;
    *(int*)((char*)p10 + 0x3C) = 0;

    v = *(int*)((char*)this + 0x30);
    v = v + v * 2;
    v += v;
    v += v;
    v += v;
    sub_6139F0((int)this, *(int*)((char*)this + 0x28), v, 0);

    v = *(int*)((char*)this + 0x2C);
    v = v << 4;
    sub_6139F0((int)this, *(int*)((char*)this + 0x20), v, 0);

    int v3 = *(int*)((char*)p10 + 0x10);
    int v4 = *(int*)((char*)p10 + 0x0C);
    ((void (__cdecl*)(int, int, int, int))v4)(v3, (int)((char*)this - 0x0C), 0x184, 0);

    return (int)this;
}
