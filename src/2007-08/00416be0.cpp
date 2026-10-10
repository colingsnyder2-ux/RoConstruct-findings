// from server: 84% by colin
struct VCLuaFunction {
    int f(int, int);
};

extern "C" int __stdcall G1_func_00416870(int, int, int);
extern "C" int __stdcall G1_func_0077e708(int, int);

int VCLuaFunction::f(int a, int b)
{
    if (b == 2) {
        int r = G1_func_0077e708(0x8833e8, a);
        return (r == 0) ? 0 : a;
    }
    char tmp = 0;
    return G1_func_00416870(a, b, *(int*)&tmp);
}
