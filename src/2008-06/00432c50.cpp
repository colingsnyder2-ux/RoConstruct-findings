// from server: 33% by tester
struct CMarshalWindow {
    void* vftable;          // 0x00
    int field_04;           // 0x04
    int field_08;           // 0x08
    int field_0c;           // 0x0c
    int field_10;           // 0x10
    int field_14;           // 0x14
    int field_18;           // 0x18
    int field_1c;           // 0x1c
    int field_20;           // 0x20
    int field_24;           // 0x24
    int field_28;           // 0x28
    char sub_2c[0x2c];      // 0x2c .. placeholder for subobject
    void* construct(int);
};

extern "C" void __stdcall sub_4328C0(void*);
extern "C" void __stdcall sub_432B50(CMarshalWindow*, int, int, int, int, int, int, int);

void* CMarshalWindow::construct(int arg)
{
    int* p;
    this->field_04 = 0;
    this->field_14 = 0;
    this->field_18 = 0;
    this->field_1c = 0;
    this->field_20 = *(int*)0x802dc4;
    this->field_24 = 0;
    this->vftable = (void*)0x811c50;
    sub_4328C0(&this->sub_2c);
    this->field_28 = arg;
    p = &arg;
    sub_432B50(this, arg, 0x80000000, 0, 0, 0, 0, 0);

    return this;
}
