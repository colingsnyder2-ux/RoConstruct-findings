// from server: 92% by colin
struct S_func_00587010 {
    char pad[0x18];
    int field_18;
    int onMouseDown(int);
};

extern "C" int __stdcall sub_5e3dc0(int, int, int);
extern "C" void __stdcall sub_4316a0(int, int);
extern "C" int __stdcall sub_561b10(int, int);
extern "C" void __stdcall sub_58c810(int);

extern int dword_8a2838;
extern int dword_8a2820;

int S_func_00587010::onMouseDown(int arg)
{
    int p = sub_5e3dc0(arg, 0, 0x8c6ee4);
    if (p) {
        int v = *(int*)(p + 0x194);
        if (dword_8a2838 != v) {
            dword_8a2838 = v;
            sub_4316a0(0x8a2820, v);
        }
        int q = sub_561b10(field_18, 4);
        sub_58c810(q);
    }
    return 0;
}
