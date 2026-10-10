// from server: 64% by tester
struct S {
    char pad[0x14];
    int field14;
    char pad2[0x18];
    int field30;
    int field34;
    int field38;
    int field3c;
    int field40;
    void func(int, int, int);
};

extern "C" int __cdecl sub_56d350();
extern "C" int __cdecl sub_56d6f0(int*);
extern "C" int __cdecl sub_56da00(int*);
extern "C" int __cdecl sub_52c940(int, int, int);
extern "C" int __cdecl sub_56d400(int*, int);

void S::func(int a, int b, int c)
{
    int* p = &field14;
    *p = sub_56d350();
    int v1 = sub_56d6f0(&field30);
    int v2 = sub_52c940(a, -1, v1);
    sub_56d400(p, v2);
    int v3 = sub_56da00(&field38);
    int v4 = sub_52c940(b, -1, v3);
    sub_56d400(p, v4);
    int v5 = sub_56da00(&field40);
    int v6 = sub_52c940(c, -1, v5);
    sub_56d400(p, v6);
}
