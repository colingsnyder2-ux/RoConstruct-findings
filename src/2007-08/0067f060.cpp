// from server: 34% by colin
struct CXTPControlRadioButton {
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl CXTPControlRadioButton_ctor(void*, int);

void* __cdecl Create(int n) {
    void* p = operator_new(0x19c);
    if (p != 0) {
        CXTPControlRadioButton_ctor(p, n);
    }
    return p;
}
