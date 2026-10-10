// from server: 44% by colin
struct CXTPDialogBar_CControlCaptionPopup
{
    char pad[0x1e4];
    void *field_1e4;
    char pad2[0x4];
    void *field_1e8;
    void *field_1ec;
    void *field_1cc;
    void *field_134;
    void *field_1a8;
    void *field_1ac;
    void *field_1b0;
    void *field_1b4;
    void *field_1b8;
    void *field_1bc;
    void *field_1c0;
    void *field_1c4;
    void *field_1c8;
    void *field_1d0;
    void *field_1d4;
    void *field_1d8;
    void *field_1dc;
    void *field_1e0;

    CXTPDialogBar_CControlCaptionPopup();
};

extern "C" void __stdcall sub_0064ed00();
extern "C" void __stdcall sub_0077ddac();
extern "C" void *__stdcall sub_0062fef6(int);
extern "C" void __stdcall sub_0067a190();
extern "C" void __stdcall sub_00738334();

CXTPDialogBar_CControlCaptionPopup::CXTPDialogBar_CControlCaptionPopup()
{
    sub_0064ed00();
    *(int *)this = 0x7e13c4;
    *(int *)((char *)this + 0x54) = 0x7e13b4;
    *(int *)((char *)this + 0x5c) = 0x7e1354;
    sub_0077ddac();
    *(int *)((char *)this + 0x1a8) = 3;
    *(int *)((char *)this + 0x1ac) = 3;
    *(int *)((char *)this + 0x1b0) = 3;
    *(int *)((char *)this + 0x1b4) = 3;
    *(int *)((char *)this + 0x1b8) = 1;
    *(int *)((char *)this + 0x1bc) = 0x32;
    *(int *)((char *)this + 0x1c0) = 0x32;
    *(int *)((char *)this + 0x1c4) = 1;
    *(int *)((char *)this + 0x1c8) = 1;
    *(int *)((char *)this + 0x1d0) = 0xc8;
    *(int *)((char *)this + 0x1d4) = 0xc8;
    *(int *)((char *)this + 0x1d8) = 0xc8;
    *(int *)((char *)this + 0x1dc) = 0xc8;
    *(int *)((char *)this + 0x1e0) = 0;
    void *p = sub_0062fef6(0x248);
    if (p != 0)
    {
        sub_0067a190();
        *(int *)p = 0x7e1154;
        *(int *)((char *)p + 0x54) = 0x7e1144;
        *(int *)((char *)p + 0x5c) = 0x7e10e4;
        *(int *)((char *)p + 0x19c) = 2;
    }
    else
    {
        p = 0;
    }
    *(void **)((char *)this + 0x1e8) = p;
    *(int *)((char *)this + 0x1cc) = 0;
    *(int *)((char *)this + 0x134) = 0;
    *(int *)((char *)this + 0x1ec) = 0;
    sub_00738334();
}
