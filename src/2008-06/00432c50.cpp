// from server: 41% by colin
extern "C" void* __stdcall sub_4328C0();

struct CMarshalWindow {
    void* vtable;
    int field_4;
    char pad_8[12];
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    char pad_2c[4];

    CMarshalWindow(int arg);
    void sub_432B50(int a, int b, int c, int d, int e, int f);
};

CMarshalWindow::CMarshalWindow(int arg)
{
    vtable = (void*)0x811c50;
    field_4 = 0;
    field_14 = 0;
    field_18 = 0;
    field_1c = 0;
    field_20 = *(int*)0x802dc4;
    field_24 = 0;
    sub_4328C0();
    field_28 = arg;
    sub_432B50(arg, 0, 0x80000000, 0, 0, 0);
}
