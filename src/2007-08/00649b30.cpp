// from server: 92% by colin
struct CXTPCommandBar {
    void construct_helper();
    void init_sub(int);
    void* vtable;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    char sub_30[0x10];
    char sub_40[0x10];
    char sub_50[0x10];
    char sub_60[0x10];
    char sub_70[0x10];
    char sub_80[0x10];
    char sub_90[0x10];
    char sub_a0[0x10];
    int field_b0;
    int field_b4;
    int field_b8;
    void __thiscall init(int a, int b, int c, int d);
};

extern "C" void __cdecl sub_73833a();
extern "C" void __fastcall sub_648580(void*);

void CXTPCommandBar::init(int a, int b, int c, int d) {
    sub_73833a();
    this->field_28 = c;
    this->vtable = (void*)0x7c6bfc;
    this->field_24 = a;
    this->field_2c = d;
    sub_648580(&this->sub_30);
    sub_648580(&this->sub_40);
    sub_648580(&this->sub_50);
    sub_648580(&this->sub_60);
    sub_648580(&this->sub_70);
    sub_648580(&this->sub_80);
    sub_648580(&this->sub_90);
    sub_648580(&this->sub_a0);
    this->field_b4 = b;
    this->field_b8 = 0;
    this->field_b0 = 0;
    this->field_20 = 0;
}
