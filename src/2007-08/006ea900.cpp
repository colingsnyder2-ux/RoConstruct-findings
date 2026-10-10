// from server: 2% by colin
struct XTPDockingPaneOfficeTheme {
    void DrawPane(int, int, int, int, int, int, int, int, int);
    char pad[0x230];
    int field_230;
    int field_234;
    int field_238;
    int field_224;
    int field_228;
    int field_22c;
};

extern "C" int __stdcall sub_6e54b0(int);
extern "C" int __stdcall sub_6ea1d0(int);
extern "C" int __stdcall sub_6ea200(int);
extern "C" int __stdcall sub_6e8600(int);

void XTPDockingPaneOfficeTheme::DrawPane(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    int v1 = *(int*)((char*)this + 0x230);
    int v2 = *(int*)((char*)this + 0x234);
    int v3 = *(int*)((char*)this + 0x238);
    int v4 = *(int*)((char*)this + 0x224);
    int v5 = *(int*)((char*)this + 0x228);
    int v6 = *(int*)((char*)this + 0x22c);
    (void)v1; (void)v2; (void)v3; (void)v4; (void)v5; (void)v6;
}
