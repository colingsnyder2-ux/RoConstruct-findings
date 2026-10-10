// from server: 96% by atomic.potato
struct FactoryProduct {
    int field_0;
    int field_4;
    int field_18;
    int field_1C;
    
    FactoryProduct* __thiscall ctor(int arg);
};

extern "C" void __cdecl sub_599C50();
extern "C" void __cdecl sub_7A799A(void*);

FactoryProduct* __thiscall FactoryProduct::ctor(int arg) {
    field_0 = 0xA2BCCC;
    field_4 = 0xA2BCC0;
    field_18 = 0xA2BCB4;
    field_1C = 0xA2BCA8;
    
    sub_599C50();
    
    if (arg & 1) {
        sub_7A799A(this);
    }
    
    return this;
}
