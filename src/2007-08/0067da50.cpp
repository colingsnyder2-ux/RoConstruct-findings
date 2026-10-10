// from server: 29% by colin
struct CXTPControlRadioButton {
    void* field0;
    char pad[0x1c];
    void* field20;
    void init();
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void CXTPControlRadioButton::init() {
    *(void**)this = (void*)0x7CDB8C;
    *(void**)((char*)this + 0x20) = (void*)0x7CDB2C;
}

CXTPControlRadioButton* __cdecl sub_67DA50() {
    CXTPControlRadioButton* p = (CXTPControlRadioButton*)sub_62FEF6(0x168);
    if (p == 0) {
        p->init();
    }
    return p;
}
