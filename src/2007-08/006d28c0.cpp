// from server: 85% by colin
struct S_func_006d28c0 {
    int f(int index);
};

extern "C" void __stdcall sub_0062fc68(unsigned int code);

int S_func_006d28c0::f(int index)
{
    if (index >= 0) {
        int count = ((int (__thiscall *)(S_func_006d28c0 *))*(void **)(*(int *)this + 0x58))(this);
        if (index < count) {
            ((void (__thiscall *)(S_func_006d28c0 *, int, int))*(void **)(*(int *)this + 0x90))(this, index, 1);
            return 0;
        }
    }
    sub_0062fc68(0x8002000b);
    return 0;
}
