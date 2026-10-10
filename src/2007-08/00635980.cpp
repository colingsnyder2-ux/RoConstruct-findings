// from server: 76% by colin
struct CXTPCommandBarsOptions {
    char pad[0x54];
    int field_54;
    CXTPCommandBarsOptions* set(CXTPCommandBarsOptions* other);
};

extern "C" int __stdcall sub_77DD74(int, int);

CXTPCommandBarsOptions* CXTPCommandBarsOptions::set(CXTPCommandBarsOptions* other) {
    int local = 0;
    sub_77DD74((int)&field_54, (int)&local);
    return other;
}
