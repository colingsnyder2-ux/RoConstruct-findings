// from server: 73% by colin
struct Humanoid {
    char pad[0x14];
    int field14;
    char pad2[0x34 - 0x18];
    int field34;
    char pad3[0x3c - 0x38];
    int field3c;
    void func(int, int);
};

extern "C" int __cdecl sub_56D350();
extern "C" int __cdecl sub_56DA70(int*);
extern "C" int __cdecl sub_52C940(int, int, int);
extern "C" int __cdecl sub_56D400(int*, int);
extern "C" int __cdecl sub_56D6F0(int*);

void Humanoid::func(int a, int b)
{
    int* p = &field14;
    *p = sub_56D350();
    int r = sub_56DA70(&field34);
    int t = sub_52C940(a, -1, r);
    sub_56D400(p, t);
    int r2 = sub_56D6F0(&field3c);
    int t2 = sub_52C940(b, -1, r2);
    sub_56D400(p, t2);
}
