// from server: 87% by colin
// roc 2007-08 006daaf0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006daaf0
//
// 006daaf0  e8dbeeffff           call 0x6d99d0
// 006daaf5  8bc8                 mov ecx, eax
// 006daaf7  83c154               add ecx, 0x54
// 006daafa  e8515a0000           call 0x6e0550
// 006daaff  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 006dab05  c3                   ret 

struct Inner;

struct Outer {
    int getValue();
};

struct Mid {
    char pad[0x54];
    Outer* getOuter();
};

extern Mid* __cdecl getMid();

int Outer::getValue()
{
    return *(int*)((char*)this + 0xa0);
}

int func_006daaf0()
{
    Mid* m = getMid();
    Outer* o = m->getOuter();
    return o->getValue();
}
