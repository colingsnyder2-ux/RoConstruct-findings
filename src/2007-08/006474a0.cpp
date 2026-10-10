// from server: 88% by colin
struct CXTPCommandBar {
    void sub_647200();
    void sub_646CA0();
    void sub_738412();
    void func();
    char pad[0x20];
    int field20;
    char pad2[0xC0];
    unsigned int fieldE4;
};

void CXTPCommandBar::func() {
    if (this == 0) return;
    if (this->field20 == 0) return;
    sub_738412();
    if ((*(unsigned int*)&this->field20 & 0x10000000) == 0) return;
    this->sub_647200();
    this->sub_646CA0();
    if ((this->fieldE4 & 2) != 0) {
        (*(void (__thiscall**)(CXTPCommandBar*, int, int))(*(int*)this + 0x19c))(this, 0, 1);
    }
    if ((this->fieldE4 & 1) != 0) {
        (*(void (__thiscall**)(CXTPCommandBar*))(*(int*)this + 0x17c))(this);
        this->fieldE4 &= ~1u;
    }
}
