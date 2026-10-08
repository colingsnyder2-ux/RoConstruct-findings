// from server: 80% by colin
// roc 2007-08 00448100  unit: CIDEDocManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00448100

struct CIDEDocManager {
    char pad[0x24];
    int field_0x24;
    void sub_448100(int a, int b, int c, int d, int e);
};

extern "C" void __stdcall sub_63070C(int arg);

void CIDEDocManager::sub_448100(int a, int b, int c, int d, int e) {
    if (e == 0)
        e = this->field_0x24;
    sub_63070C(e);
}
