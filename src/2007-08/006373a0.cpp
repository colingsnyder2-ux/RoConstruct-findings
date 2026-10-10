// from server: 99% by tester
struct CPatchedControlComboBox {
    char pad[0x168];
    int field_168;
    char pad2[0xc];
    int field_178;
    char pad3[0x8];
    int field_184;
    char pad4[0x2c];
    int field_1b4;
    char pad5[0xc];
    int field_1c4;
    int getValue();
    void setValue(int);
    void sub_63c4a0(int);
    void sub_670f70(int);
};

extern "C" void __fastcall sub_635ce0(int);
extern "C" void __fastcall sub_630004(int);

void CPatchedControlComboBox::setValue(int value)
{
    if (value != 0) {
        this->field_1b4 = 0;
        this->field_184 = this->getValue();
    } else {
        int r = ((int (__thiscall *)(CPatchedControlComboBox *))*(void **)(*(int *)this + 0x74))(this);
        if (r != 0) {
            goto after;
        }
        if (this->field_178 != 0) {
            goto after;
        }
        if (this->field_1b4 != 0) {
            goto done;
        }
        this->setValue(this->field_184);
    }
after:
    if (this->field_1b4 == 0) {
        this->sub_63c4a0(0xa);
    }
done:
    if (this->field_1c4 != 0 && value != 0) {
        sub_635ce0(this->field_1c4);
    }
    this->field_168 = value;
    if (value != 0) {
        if (this->field_178 != 0) {
            sub_630004(this->field_178);
        }
    }
    this->sub_670f70(value);
}
