// from server: 96% by atomic.potato
struct VDebrisService_FactoryProduct {
    void* ctor(int arg);
    int field_0;
    int field_4;
    int field_18;
    int field_1C;
};

extern "C" void __cdecl sub_5980D0();
extern "C" void __cdecl sub_80A058(void*);

void* VDebrisService_FactoryProduct::ctor(int arg) {
    this->field_0 = 0xAA9684;
    this->field_4 = 0xAA967C;
    this->field_18 = 0xAA9670;
    this->field_1C = 0xAA9664;
    
    sub_5980D0();
    
    if (arg & 1) {
        sub_80A058(this);
    }
    
    return this;
}
