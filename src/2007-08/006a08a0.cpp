// from server: 54% by colin
struct CXTPNewToolbarDlg {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    char pad18[8];
    int field20;
    char pad24[0x10];
    int field34;
    int field38;
    int field3C;
    int field40;
    int Init(int);
};

extern "C" int __stdcall sub_6b3010();
extern "C" void __stdcall sub_632d80();

int CXTPNewToolbarDlg::Init(int arg) {
    sub_632d80();
    int* obj = (int*)sub_6b3010();
    int v = (*(int (__thiscall**)(int*, int))(*(int*)obj + 0x14))(obj, 0x2393);
    field38 = v;
    obj = (int*)sub_6b3010();
    v = (*(int (__thiscall**)(int*, int))(*(int*)obj + 0x14))(obj, 0x2392);
    field3C = v;
    obj = (int*)sub_6b3010();
    v = (*(int (__thiscall**)(int*, int))(*(int*)obj + 0x14))(obj, 0x2391);
    field40 = v;
    field14 = 0;
    field34 = arg;
    field0 = 0;
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    return (int)this;
}
