// from server: 36% by colin
extern "C" {
    void __stdcall func_0054fa30();
    void __stdcall func_0054f590();
    void __stdcall func_0077e634();
}

struct S {
    char pad[0x24];
    int field_24;
    char pad2[0x1c];
    int field_40;
    int field_44;
    void func_005507a0(int a, int b);
};

void S::func_005507a0(int a, int b)
{
    if (b & 2) {
        func_0054fa30();
        if (field_44 & 1) {
            int v0 = *(int*)(*(int*)this + 8);
            func_0054f590();
            func_0054f590();
            func_0054f590();
            func_0054f590();
            int v1 = *(int*)(*(int*)this + 0xc);
            func_0054f590();
            func_0054f590();
            func_0054f590();
            func_0054f590();
        }
    }
    func_0077e634();
    field_40 = 0;
    field_44 = 0;
}
