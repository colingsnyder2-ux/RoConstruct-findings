// from server: 38% by colin
struct S_func_0063a120 {
    char pad0[212];
    int m_x;
    void f(int a1);
};

struct CXTPRibbonScrollableBar_CControlGroupsScroll {
    void construct(int a1);
};

extern "C" void __stdcall sub_006ca460();

void CXTPRibbonScrollableBar_CControlGroupsScroll::construct(int a1)
{
    sub_006ca460();
    *(int*)((char*)this + 0x168) = a1;
    *(int*)((char*)this) = 0x7d4a0c;
    *(int*)((char*)this + 0x20) = 0x7d49ac;
    ((S_func_0063a120*)((char*)this + 0))->f(0x1a);
}
