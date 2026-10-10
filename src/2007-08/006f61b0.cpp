// from server: 32% by colin
// roc 2007-08 006f61b0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f61b0

struct CArray {
    void Add(int);
    void SetSize(int, int);
};

struct CXTPPropertyGridInplaceButton {
    void Add(int);
};

extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void* __cdecl sub_6f5e80(int);
extern "C" void* __cdecl sub_6f5ce0(void*, int);
extern "C" void __cdecl sub_6f60f0(void*, void*);

void CXTPPropertyGridInplaceButton::Add(int n) {
    void* p = sub_6f5e80(0x64);
    if (p == 0) {
        void* q = sub_62fef6(0x50);
        if (q != 0) {
            q = sub_6f5ce0(q, 0x64);
        }
        sub_6f60f0(this, q);
    }
}
