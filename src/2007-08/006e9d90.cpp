// from server: 65% by colin
// roc 2007-08 006e9d90  unit: XTPDockingPanePaintThemes::CXTPDockingPaneVisualStudio2005SecondTheme  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e9d90

struct Inner {
    void setColor(int);
    void setColor2(int, int, float);
};

struct CXTPDockingPaneVisualStudio2005SecondTheme {
    char pad[0x1e4];
    Inner inner1;
    char pad2[0x1c];
    Inner inner2;
    char pad3[0x28];
    int field_22c;
    int field_23c;
    void RefreshMetrics();
};

extern "C" int __stdcall sub_6e54b0(int);
extern "C" void __stdcall sub_668ec0(int);
extern "C" void __stdcall sub_6684f0(int, int, float);
extern "C" int __stdcall sub_668f70();
extern "C" int __stdcall sub_668d70();
extern "C" void __stdcall sub_6e9ca0();

extern float g_797e9c;

void CXTPDockingPaneVisualStudio2005SecondTheme::RefreshMetrics()
{
    sub_6e9ca0();
    inner1.setColor(sub_6e54b0(3));
    inner2.setColor(sub_6e54b0(2));
    field_23c = sub_6e54b0(0x10);
    int v = sub_668d70();
    switch (v - 1) {
    case 0:
        inner1.setColor(0xbac7cc);
        inner2.setColor2(0xed803b, 0xc56a31, g_797e9c);
        field_22c = 0;
        break;
    case 1:
        inner1.setColor(0xbac7cc);
        inner2.setColor2(0x92c3b6, 0x75a091, g_797e9c);
        field_22c = 0;
        break;
    case 2:
        inner1.setColor(0xf5f0f0);
        inner2.setColor2(0xddd4d3, 0xbfa5a6, g_797e9c);
        field_22c = 0;
        field_23c = 0x9c9b91;
        break;
    }
}
