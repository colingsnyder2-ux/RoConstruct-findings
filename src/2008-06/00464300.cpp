// from server: 40% by colin
struct S_func_004613d0 {
    char pad0[88];
    int m_x;
    int* f();
};

struct S_func_00464300 {
    int f(int);
};

extern "C" int __stdcall G1_func_00803f04(int);
extern "C" int __stdcall G1_func_008032c4(int, int, int);
extern "C" int __stdcall G1_func_00803ee0(int);
extern "C" int __stdcall G1_func_00803f14(int);

int S_func_00464300::f(int a1)
{
    S_func_004613d0* p = (S_func_004613d0*)0;
    int* pi = p->f();
    int v1 = ((int (__thiscall*)(void*, int))0x460120)(pi, 1);
    int v2 = ((int (__thiscall*)(void*, int, int))0x460c10)(pi, v1, 1);
    int v3 = ((int (__thiscall*)(void*, int, int))0x4610e0)(pi, v2, 1);
    int v4 = v3 & 0xfff;
    v4 -= 0x400;
    int buf[4];
    G1_func_00803f04((int)buf);
    buf[0] = 0;
    G1_func_008032c4((int)buf, 0xc9, v4);
    int* obj = (int*)buf[2];
    int* vtbl = (int*)*obj;
    G1_func_00803ee0((int)buf);
    ((void (__thiscall*)(void*, int))vtbl[3])(obj, (int)buf);
    G1_func_00803f14((int)buf);
    return a1;
}
