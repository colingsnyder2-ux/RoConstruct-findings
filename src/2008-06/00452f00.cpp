// from server: 32% by colin
struct FactoryProduct {
    void* operator new(unsigned int);
    void construct();
};

void FactoryProduct::construct()
{
    FactoryProduct* p = (FactoryProduct*)operator new(0x98);
    if (p)
        p->FactoryProduct::FactoryProduct();
}
