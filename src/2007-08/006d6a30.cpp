// from server: 34% by colin
struct CXTPReportHeaderDragWnd
{
    void OnPaint();
};

extern "C" void __stdcall sub_00630490(void*);
extern "C" void __stdcall sub_00680000(void*);
extern "C" void __stdcall sub_00680060(void*, void*, void*);
extern "C" void __stdcall sub_00680430(void*);
extern "C" void __stdcall sub_0063048a(void*);
extern "C" void __stdcall sub_00630a1e();

void CXTPReportHeaderDragWnd::OnPaint()
{
    char buf1[0x40];
    char buf2[0x40];
    char buf3[0x10];
    int v;

    sub_00630490(buf1);
    sub_00680000(buf2);
    sub_00680060(buf2, buf1, &v);
    sub_00680430(buf3);
    sub_0063048a(buf1);
    sub_00630a1e();
}
