// from server: 29% by colin
struct CXTPControlSelector {
    void* unknown0;
    char pad[0x1c];
    void* unknown20;
    void init();
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void CXTPControlSelector::init() {
    *(void**)this = (void*)0x7CE3F4;
    *(void**)((char*)this + 0x20) = (void*)0x7CE394;
}

CXTPControlSelector* __cdecl sub_67EC60() {
    CXTPControlSelector* p = (CXTPControlSelector*)sub_62FEF6(0x168);
    if (p == 0) {
        p->init();
    }
    return p;
}
