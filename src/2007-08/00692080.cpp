// from server: 73% by colin
struct CXTThemeManager {
    char pad[8];
    int field_8;
    char pad2[4];
    int field_10;
    void Method(int);
};

extern "C" void __stdcall sub_738b32(int);
extern "C" void __stdcall sub_738b2c(int);
extern "C" int __stdcall sub_691fa0(int);
extern "C" int __stdcall sub_691d10(int);

void CXTThemeManager::Method(int arg) {
    int v = field_10;
    if (v != 0) {
        sub_738b32(v + 8);
    }
    field_8 = arg;
    int r = sub_691fa0(arg);
    int r2 = sub_691d10(r);
    field_10 = r2;
    sub_738b2c(r2 + 8);
}
