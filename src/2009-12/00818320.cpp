// from server: 67% by atomic.potato
// roc 2009-12 00818320  unit: CRobloxReportView  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818320

struct CRobloxReportView {
    char pad[0x368];
    int field_368;
    bool __cdecl sub_818320(int* arg);
};

bool CRobloxReportView::sub_818320(int* arg) {
    int result = 0;
    if (field_368 != 0) {
        int* p = (int*)(*(int (__thiscall**)(CRobloxReportView*))(*(int*)this + 0x194))(this);
        int v = (*(int (__thiscall**)(int*))(*(int*)p + 0x178))(p);
        if (v != 0)
            result = 1;
    }
    *arg = result;
    return (*(bool (__thiscall**)(int*))(*(int*)arg))(arg);
}
