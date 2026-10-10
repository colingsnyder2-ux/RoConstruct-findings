// from server: 42% by colin
struct CXTPRibbonControlTab {
    void OnUnderlineActivate();
};

extern "C" void __stdcall sub_670500();
extern "C" void __stdcall sub_6fe2e0();
extern "C" void __stdcall sub_63a120(int);

void CXTPRibbonControlTab::OnUnderlineActivate()
{
    sub_670500();
    *(int*)((char*)this + 0x178) = 0;
    sub_6fe2e0();
    *(int*)this = 0x7df4b4;
    *(int*)((char*)this + 0x20) = 0x7df454;
    *(int*)((char*)this + 0x178) = 0x7df3cc;
    *(int*)((char*)this + 0x190) = 0;
    *(int*)((char*)this + 0x204) = 0;
    sub_63a120(0x10);
}
