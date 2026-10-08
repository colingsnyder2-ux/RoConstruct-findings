// from server: 100% by colin
// roc 2007-08 006e1690  unit: CXTPDockingPaneTabbedContainer  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e1690
//
// 006e1690  c781a401000000000000 mov dword ptr [ecx + 0x1a4], 0
// 006e169a  e89febf4ff           call 0x63023e
// 006e169f  c20400               ret 4

struct CXTPDockingPaneTabbedContainer
{
    char pad[0x1a4];
    int field_1a4;
    void func_006e1690(int);
};

extern void G1_func_0063023e();

void CXTPDockingPaneTabbedContainer::func_006e1690(int)
{
    field_1a4 = 0;
    G1_func_0063023e();
}
