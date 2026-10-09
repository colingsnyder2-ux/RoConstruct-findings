// from server: 69% by colin
// roc 2007-08 005dcef0  unit: RBX::VInstance::?$NonFactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcef0

extern "C" int __cdecl sub_630D36(int, void*, void*, int, int);
extern "C" void __cdecl sub_630B9E(void*, void*);
extern "C" void* __stdcall sub_77E710(void*);

struct RBX_DescribedBase {
    void* vftable;
};

struct RBX_Hole {
    void* vftable;
};

struct NonFactoryProduct {
    void* vftable;
    NonFactoryProduct(int arg0);
};

NonFactoryProduct::NonFactoryProduct(int arg0)
{
    int result = sub_630D36(arg0, (void*)0x88209c, (void*)0x8ad284, 0, 0);
    if (result == 0) {
        void* p = sub_77E710((void*)0x786e04);
        sub_630B9E(p, (void*)0x841e0c);
    }
}
