// from server: 30% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD

struct CRobloxReportPaneView
{
    void sub_455AB0();
    ~CRobloxReportPaneView();
};

extern "C" void __cdecl sub_4073F0(void*);

CRobloxReportPaneView::~CRobloxReportPaneView()
{
    sub_4073F0((char*)this + 0x318);
    sub_455AB0();
}
