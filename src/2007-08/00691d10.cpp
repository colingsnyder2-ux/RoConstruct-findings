// from server: 70% by colin
// roc 2007-08 00691d10  unit: seg_00690000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691d10

struct CXTThemeManagerStyle {
    int field0;
    int field4;
    int sub_738b44(int* out, int key);
    int sub_7389b8(int key);
    int sub_63052c();
    int func(int key);
};

int CXTThemeManagerStyle::func(int key) {
    int result = 0;
    if (sub_738b44(&result, key) == 0) {
        int v = sub_63052c();
        result = v;
        int* p = (int*)sub_7389b8(key);
        *p = v;
    }
    return result;
}
