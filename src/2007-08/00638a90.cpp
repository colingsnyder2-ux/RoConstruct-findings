// from server: 34% by colin
// roc 2007-08 00638a90  unit: CPatchedControlComboBox  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00638a90

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl CPatchedControlComboBox_ctor(void* self);

struct CPatchedControlComboBox {
    void* vftable;
    void* create();
};

void* CPatchedControlComboBox::create() {
    void* p = operator_new(0x60);
    if (p != 0) {
        CPatchedControlComboBox_ctor(p);
        *(void**)p = (void*)0x7c5ea4;
    }
    return p;
}
