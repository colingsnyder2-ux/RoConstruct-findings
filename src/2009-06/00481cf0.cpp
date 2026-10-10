// from server: 93% by why2
struct S_func_00481cf0 {
    int f();
};

extern "C" void __stdcall sub_008a0bf8();

int S_func_00481cf0::f()
{
    *(int*)this = 0x8bedc4;
    *(int*)((char*)this + 0x240) = 0xfffffffe;
    return ((int (__stdcall*)())sub_008a0bf8)();
}
