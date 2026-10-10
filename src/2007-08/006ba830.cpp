// from server: 57% by colin
// roc 2007-08 006ba830  unit: CXTPControlGalleryOffice2007Theme  size: 320 bytes

extern "C" __declspec(dllimport) int __stdcall GetSystemMetrics(int);

struct CString {
    void* data;
    CString(const char* s);
    ~CString();
};

struct CXTPControlGalleryOffice2007Theme {
    void sub_6b3b60();
    void* sub_6ba7a0();
    void* sub_710820();
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    int field2C;
    int field30;
    int field34;
    void Init();
};

void CXTPControlGalleryOffice2007Theme::Init()
{
    sub_6b3b60();
    field4 = GetSystemMetrics(0x15);
    field8 = GetSystemMetrics(3);
    field10 = GetSystemMetrics(2);
    fieldC = GetSystemMetrics(0x14);
    field14 = 0x15;
    field18 = 0x13;

    CString s1("ControlGalleryBorder");
    CString s2("Toolbar");
    field2C = (int)sub_710820();

    CString s3("ControlGalleryNormal");
    CString s4("Toolbar");
    field30 = (int)sub_710820();

    CString s5("ControlGallerySelected");
    CString s6("Toolbar");
    field34 = (int)sub_710820();
}
