// from server: 93% by atomic.potato
struct FactoryProduct
{
    int field0;
    int field4;
    int field8;
    int fieldc;
    void initialize();
};

extern "C" void __cdecl sub_5980d0();

void FactoryProduct::initialize()
{
    field0 = 0xA5C6E4;
    field4 = 0xA5C6D8;
    field8 = 0xA5C6CC;
    fieldc = 0xA5C6C0;
    sub_5980d0();
}
