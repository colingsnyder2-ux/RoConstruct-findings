// from server: 51% by colin
// roc 2007-08 0042ed70  unit: CWrapperView  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042ed70

struct CWrapperView {
    char pad[0x58];
    int field_58;
    char pad2[0x78 - 0x5c];
    int field_78;
    int method(int a, int b, int c, int d);
};

extern "C" int __stdcall sub_62FDDC(int, int, int, int);
extern "C" int __stdcall sub_630034(int, int, int, int, int, int);
extern "C" int __stdcall sub_63051A(int, int, int, int, int);
extern "C" int __stdcall sub_630214(int, int, int, int);

int CWrapperView::method(int a, int b, int c, int d) {
    int local[4];
    int result = sub_62FDDC(a, b, c, d);
    if (result != 0 && *reinterpret_cast<int*>(b) != 0) {
        return 1;
    }
    if (a != 1) {
        local[0] = 0;
        local[1] = 0;
        local[2] = 100;
        local[3] = 100;
        int r = sub_63051A(reinterpret_cast<int>(&local[0]), 0x56000000, 0, 0, 0);
        if (r == 0) {
            *reinterpret_cast<int*>(b) = -1;
            return 1;
        }
        sub_630214(reinterpret_cast<int>(&this->field_58), 0x200, 0x20, 0);
        return 1;
    }
    if (a == 5) {
        if (this->field_78 == 0) {
            return 1;
        }
        sub_630034(reinterpret_cast<int>(&this->field_58), 0, 0, (c & 0xFFFF), (c >> 16), 1);
        return 1;
    }
    return 1;
}
