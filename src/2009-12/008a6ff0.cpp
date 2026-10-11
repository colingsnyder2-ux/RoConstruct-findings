// from server: 20% by atomic.potato
struct CXTPReportHeaderDragWnd
{
    void OnPaint();
};

extern "C" void __stdcall sub_7f41f0();
extern "C" void __stdcall sub_84b2d0();
extern "C" void __stdcall sub_84b330();
extern "C" void __stdcall sub_84b540();
extern "C" void __stdcall sub_7f41ea();
extern "C" void __stdcall sub_7f539a();

void CXTPReportHeaderDragWnd::OnPaint()
{
    char buf[0x98];
    sub_7f41f0();
    sub_84b2d0();
    sub_84b330();
    sub_84b540();
    sub_7f41ea();
    sub_7f539a();
}
