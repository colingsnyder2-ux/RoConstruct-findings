// from server: 44% by colin
struct S_func_005d0330 {
    char pad0[0x12c];
    int f(int a, int b, int c, int d, int e);
};

extern "C" int __cdecl sub_00630d36(int, int, int, int, int);
extern "C" void __cdecl sub_0041da00(int*);
extern "C" void __cdecl sub_005d0130(int*, int);

int S_func_005d0330::f(int a, int b, int c, int d, int e)
{
    int local = 0;
    int result = sub_00630d36(e, 0, 0x881f4c, 0x8a65c4, 0);
    if (result != 0) {
        sub_005d0130((int*)((char*)this - 0x12c), result);
    }
    sub_0041da00(&local);
    return 0;
}
