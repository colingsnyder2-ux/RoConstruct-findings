// from server: 51% by colin
struct S_func_005fb850
{
    int f(int a, int b);
};

extern "C" int __stdcall sub_00630d36(int, int, int, int, int);
extern "C" int __stdcall sub_005782c0(int, int);
extern "C" int __stdcall sub_005fb9b0(int, int);

int S_func_005fb850::f(int a, int b)
{
    char c = *(char*)b;
    int r = sub_00630d36(a, 0, 0x884a28, 0x881f4c, 0);
    if (r != 0) {
        return sub_005782c0(r, a);
    }
    return sub_005fb9b0(a, a);
}
