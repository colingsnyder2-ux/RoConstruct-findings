// from server: 52% by colin
extern "C" int __cdecl sub_0054EA30(int, int, int, int);
extern "C" int __cdecl sub_0054E090(int, int);
extern "C" void __cdecl sub_00630B9E(int, int);

struct S_00552120 {
    void __cdecl f(int a1);
};

void S_00552120::f(int a1)
{
    char buf[0x30];
    int result;
    unsigned char c;

    result = sub_0054EA30(a1 + 8, a1 + 0x10, (int)&buf[0x38 - 0x30], 1);
    if (result == 1) {
        c = *(unsigned char *)((char *)&buf[0x34 - 0x30]);
        if (c != 0xFF && c != 0xFE) {
            return;
        }
    }
    sub_0054E090((int)&buf[0], *(int *)((char *)&buf[0x38 - 0x30]));
    sub_00630B9E((int)&buf[0], 0x85A414);
}
