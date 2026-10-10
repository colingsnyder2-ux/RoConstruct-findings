// from server: 75% by colin
struct S_func_0044c410 {
    int f(int a1, int a2);
};

extern "C" int __stdcall sub_0044c0f0(int a1, int a2);
extern "C" void __stdcall sub_0071ffb0(int a1);

int S_func_0044c410::f(int a1, int a2)
{
    int r = sub_0044c0f0(a1, a2);
    if (r != -1) {
        *(int *)((char *)this + 0x174) = r;
        sub_0071ffb0(1);
    }
    return r;
}
