// from server: 59% by tester
struct LuaArguments {
    int f(int a, int b);
};

extern "C" int __cdecl sub_6115B0(int a, int b, int c);
extern "C" void __cdecl sub_5A9040(int a, float x, float y, float z);

extern int dword_95B1C0;

int LuaArguments::f(int a, int b)
{
    int* p1 = (int*)sub_6115B0(dword_95B1C0, 1, a);
    int* p2 = (int*)sub_6115B0(dword_95B1C0, 2, a);
    float x = *(float*)((char*)p1 + 4) - *(float*)((char*)p2 + 4);
    float y = *(float*)((char*)p1 + 8) - *(float*)((char*)p2 + 8);
    float z = *(float*)p1 - *(float*)p2;
    sub_5A9040(a, z, x, y);
    return 1;
}
