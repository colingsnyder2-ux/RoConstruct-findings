// from server: 95% by colin
struct CXTPDockingPaneAutoHidePanel {
    void SetActivePane(int);
};

extern "C" void* __stdcall sub_6e0540(void*, int);
extern "C" void __fastcall sub_66ed20(void*);

void CXTPDockingPaneAutoHidePanel::SetActivePane(int arg)
{
    *(int*)((char*)this + 0x194) = arg;
    *(int*)((char*)this + 0x19c) = 1;
    void* p = sub_6e0540((char*)this + 0x54, 1);
    sub_66ed20(p);
}
