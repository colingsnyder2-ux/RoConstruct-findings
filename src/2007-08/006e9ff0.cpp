// from server: 55% by colin
struct CXTPDockingPaneVisualStudio2005SecondTheme
{
    char pad_0000[0x20];
    int field_20;
    char pad_0024[0x4c];
    int field_70;
    char pad_0074[0x8];
    int field_7c;
    char pad_0080[0x128];
    char field_1a8[0x38];
    char field_1e0[0x4];

    CXTPDockingPaneVisualStudio2005SecondTheme();
};

extern "C" void __stdcall SetRect(void*, int, int, int, int);

void sub_6e7790();
void sub_69e7a0();

CXTPDockingPaneVisualStudio2005SecondTheme::CXTPDockingPaneVisualStudio2005SecondTheme()
{
    sub_6e7790();
    field_20 = 0;
    *(void**)this = (void*)0x7da6ec;
    sub_69e7a0();
    SetRect(field_1a8, 0, 0, 0, 0);
    field_7c = 9;
    field_70 = 5;
}
