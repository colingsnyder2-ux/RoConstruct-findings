// from server: 42% by colin
extern "C" unsigned long __stdcall GetCurrentThreadId();

struct COutputView {
    void* vtable;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    unsigned long field_14;
    int field_18;
    COutputView();
};

extern int g_78cdfc;
extern int g_8b5188;

int sub_433a50();

COutputView::COutputView()
{
    vtable = &g_78cdfc;
    field_8 = 0;
    field_c = 0;
    field_10 = 0;
    field_14 = GetCurrentThreadId();
    field_18 = sub_433a50();
}
