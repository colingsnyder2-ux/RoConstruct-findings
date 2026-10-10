// from server: 85% by colin
struct CollisionStage {
    char pad[0x10];
    int field_0x10;
    void func_00627720(int);
    void func_00627790(int);
    void func_00627860(int);
};

extern "C" void __stdcall func_00609130(int);

void CollisionStage::func_00627860(int arg)
{
    func_00609130(arg);
    int r = (*(int (__thiscall **)(int))(*(int *)arg + 0xc))(arg);
    if (r != 1) {
        field_0x10 += r;
        func_00627720(arg);
    } else {
        func_00627790(arg);
    }
}
