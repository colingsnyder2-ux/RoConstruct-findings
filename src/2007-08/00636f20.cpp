// from server: 51% by colin
struct CPatchedControlComboBox {
    char pad[0x1d0];
    int field_1d0;
    void sub_636c40(void*);
    void sub_63a690(int);
    void sub_63c4a0(int);
    void sub_636f20();
};

extern "C" void __stdcall sub_77ddbc(void*);

void CPatchedControlComboBox::sub_636f20() {
    void* local;
    local = 0;
    this->field_1d0 = 1;
    (*(void (__thiscall**)(void*, void**))(*(int*)this + 0x148))(this, &local);
    this->sub_636c40(local);
    sub_77ddbc(&local);
    this->field_1d0 = 0;
    this->sub_63a690(1);
    this->sub_63c4a0(1);
}
