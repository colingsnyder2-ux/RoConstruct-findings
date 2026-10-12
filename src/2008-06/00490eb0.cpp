// from server: 39% by colin
struct RBXName {
    void* data;
};

struct FactoryProduct {
    char pad[0x20];
    int field20;
    FactoryProduct(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
};

extern "C" void __stdcall sub_48D440(void* out, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
extern "C" void __stdcall sub_48D7A0(void* self);

FactoryProduct::FactoryProduct(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int local = 0;
    sub_48D440(&local, a0, a1, a2, a3, a4, a5, a6, a7);
    this->field20 = a8;
    sub_48D7A0(&local);
}
