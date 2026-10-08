// from server: 57% by colin
// roc 2007-08 0040a660  unit: VCApp::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a660

extern "C" void __cdecl sub_40a2b0(void*);
extern "C" void __cdecl sub_40a560(void*);

struct VCApp_CComObject {
    void method(void* p);
};

void VCApp_CComObject::method(void* p) {
    if (p == 0) {
        sub_40a2b0(p);
    } else {
        sub_40a560(p);
    }
}
