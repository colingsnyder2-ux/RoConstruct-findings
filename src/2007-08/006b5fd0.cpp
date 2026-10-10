// from server: 60% by colin
struct CXTPControlComboBoxGalleryPopupBar {
    char pad[0x1000];
    void Construct();
};

extern "C" {
    void __stdcall SetRectEmpty(void*);
    void __stdcall sub_670500();
    void __stdcall sub_71d3c0();
    void __stdcall sub_6b5df0();
    void __stdcall sub_63a120(int);
}

void CXTPControlComboBoxGalleryPopupBar::Construct()
{
    char* base = (char*)this;
    sub_670500();
    sub_71d3c0();
    *(int*)(base + 0x0) = 0x7d63d4;
    *(int*)(base + 0x20) = 0x7d6374;
    *(int*)(base + 0x178) = 0x7d634c;
    sub_6b5df0();
    *(int*)(base + 0x1e0) = -1;
    *(int*)(base + 0x1e4) = -1;
    *(int*)(base + 0x1ec) = 0;
    *(int*)(base + 0x1f4) = 0;
    *(int*)(base + 0x1e8) = 0;
    *(int*)(base + 0x1f0) = 0;
    *(int*)(base + 0x1f8) = 0;
    *(int*)(base + 0x1fc) = 1;
    *(int*)(base + 0x15c) = 0x78;
    *(int*)(base + 0x160) = 0x3c;
    SetRectEmpty((void*)(base + 0x208));
    *(int*)(base + 0x200) = 1;
    *(int*)(base + 0x204) = 0;
    *(int*)(base + 0x174) = 0;
    *(int*)(base + 0x218) = 0;
    *(int*)(base + 0xf8) = 0xa;
    sub_63a120(0x40);
}
