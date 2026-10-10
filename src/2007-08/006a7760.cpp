// from server: 36% by colin
struct CXTPRibbonBar_CControlQuickAccessCommand
{
    void construct(int);
};

extern "C" void __stdcall sub_6CA460();
extern "C" void __stdcall sub_63A120(int);

void CXTPRibbonBar_CControlQuickAccessCommand::construct(int arg)
{
    sub_6CA460();
    *(int*)((char*)this + 0x00) = 0x7d4864;
    *(int*)((char*)this + 0x20) = 0x7d4804;
    sub_63A120(0x12);
    *(int*)((char*)this + 0x168) = arg;
}
