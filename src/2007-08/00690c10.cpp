// from server: 60% by colin
extern "C" int (__stdcall *SystemParametersInfoA)(unsigned int, unsigned int, void*, unsigned int);

struct CXTSplitterWnd
{
    char pad0[0x60];
    int field_60;
    int field_64;
    char pad1[0x8];
    int field_70;
    int field_74;
    char pad2[0x64];
    int field_dc;
    char pad3[0x14];
    int field_f4;
    int field_f8;
    int field_fc;
    int field_100;
    int field_104;
    int field_108;
    int field_10c;
    int field_110;
    int field_114;

    void method_738ae4();
    int method_690290();
    void method_692160(int);
    void method_690c10();
};

void CXTSplitterWnd::method_690c10()
{
    method_738ae4();
    method_692160(method_690290());
    field_f4 = -1;
    field_f8 = -1;
    field_10c = -1;
    field_60 = 6;
    field_64 = 6;
    field_70 = 6;
    field_74 = 6;
    field_110 = -1;
    field_108 = 2;
    field_104 = 1;
    SystemParametersInfoA(0x26, 0, &field_fc, 0);
    field_100 = 0;
    field_114 = 0;
}
