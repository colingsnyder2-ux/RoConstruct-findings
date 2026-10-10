// from server: 25% by colin
struct FactoryProduct {
    void* operator new(unsigned int);
    void FactoryProduct_ctor();
    static void* CreateInstance();
};

void* FactoryProduct::CreateInstance()
{
    FactoryProduct* p = (FactoryProduct*)operator new(0x7c);
    if (p != 0) {
        p->FactoryProduct_ctor();
    }
    return p;
}
