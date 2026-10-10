// from server: 43% by colin
// roc 2007-08 006708f0  unit: CXTPToolBar::CControlButtonExpand  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006708f0

struct CXTPToolBar {
    int OnCommand(int, int);
};

struct CControlButtonExpand {
    char pad[0xf8];
    int m_nState;
    int m_nID;
    char pad2[0x68];
    int m_bExpanded;
    int m_pControl;
    char pad3[0x1a4 - 0x170];
    int m_bSomething;

    int OnCommand(int a, int b);
};

extern "C" int __stdcall sub_677380(int);
extern "C" int __stdcall sub_630202(int);
extern "C" int __stdcall sub_646a90(int, int, int);
extern "C" int __stdcall sub_677790(int, int, int);
extern "C" int __stdcall sub_644720(int, int);
extern "C" int __stdcall sub_679900(int);
extern "C" int __stdcall sub_63a190(int, int, int);

int CControlButtonExpand::OnCommand(int a, int b) {
    int v = sub_630202(sub_677380(*(int*)((char*)this + 0x16c)));
    if (v == 0) {
        sub_63a190(a, b, (int)this);
        return 0;
    }
    int st = *(int*)((char*)this + 0xf8);
    if (st != 2 && st != 3) {
        sub_63a190(a, b, (int)this);
        return 0;
    }
    if (*(int*)((char*)this + 0x168) == 0) {
        sub_646a90(0, a, b);
    }
    if (*(int*)((char*)this + 0x16c) != v) {
        return 0;
    }
    if (*(int*)((char*)this + 0x168) == 0) {
        return 0;
    }
    int r = sub_677790(v, 0, 1);
    if (r == -1) {
        if (*(int*)((char*)this + 0x168) == 0) {
            return 0;
        }
        if (*(int*)((char*)v + 0x1a4) == 0) {
            return 0;
        }
        sub_679900(v);
        return 1;
    }
    int r2 = sub_677790(v, 0, 1);
    int obj = sub_644720(v, r2);
    (*(void(__thiscall**)(int))(*(int*)obj + 0x98))(obj);
    return 1;
}
