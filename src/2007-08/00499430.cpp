// from server: 66% by colin
struct S {
    char pad[0x14];
    int field14;
    char pad2[0x18];
    int field30;
    char pad3[0x4];
    int field38;
    char pad4[0x4];
    int field40;
    char pad5[0x4];
    int field48;
    void f(int, int, int, int);
};

extern "C" int __cdecl sub_56D350();
extern "C" int __cdecl sub_56DA00(int);
extern "C" int __cdecl sub_52C940(int, int, int);
extern "C" int __cdecl sub_56D400(int, int);
extern "C" int __cdecl sub_56D7D0(int);

void S::f(int a1, int a2, int a3, int a4)
{
    int* p = &field14;
    *p = sub_56D350();
    int v = sub_56DA00((int)(this->pad + 0x30));
    v = sub_52C940(a1, -1, v);
    sub_56D400((int)p, v);
    v = sub_56D7D0((int)(this->pad + 0x38));
    v = sub_52C940(a2, -1, v);
    sub_56D400((int)p, v);
    v = sub_56D7D0((int)(this->pad + 0x40));
    v = sub_52C940(a3, -1, v);
    sub_56D400((int)p, v);
    v = sub_56D7D0((int)(this->pad + 0x48));
    v = sub_52C940(a4, -1, v);
    sub_56D400((int)p, v);
}
