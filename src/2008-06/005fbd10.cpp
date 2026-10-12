// from server: 33% by colin
struct S_func_005fbd10 {
    char pad0[0x174];
    int f(int, int, int, int, int);
};

extern "C" int __stdcall sub_006a17c6(int, int, int, int, int);
extern "C" int __stdcall sub_005fbc80(int);
extern "C" int __stdcall sub_00422c60(int);

int S_func_005fbd10::f(int a1, int a2, int a3, int a4, int a5)
{
    int result = sub_006a17c6(a1, 0, 0x92907c, 0x951950, 0);
    if (result != 0) {
        sub_005fbc80(result);
    }
    sub_00422c60(0);
    return result;
}
