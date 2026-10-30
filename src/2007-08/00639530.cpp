// from server: 90% by Intel
struct CPatchedControlComboBox
{
    int f(int a, int b, int c, int d);
    int sub_42F5B0();
};


extern "C" int __stdcall sub_6391B0();

int CPatchedControlComboBox::f(int a, int b, int c, int d)
{
    int v = (*(int (__thiscall **)(void))(*(int*)this + 0x74))();
    if (v == 0)
        return 0;
    if (sub_42F5B0() != 0)
        return 0;
    if (*(int*)((char*)this + 0x1c4) != 0)
        return 0;
    if (sub_6391B0() == 0)
        return 0;
    int* p = *(int**)((char*)this + 0x16c);
    int (__stdcall *fn)(void*, int, int) = *(int (__stdcall **)(void*, int, int))(*(int*)p + 0x210);
    short s = (short)c;
    int flag = (s <= 0) ? 1 : 0;
    fn(this, flag + flag + 0x26, 0);
    return 1;
}
