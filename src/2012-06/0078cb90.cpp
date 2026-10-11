// from server: 35% by atomic.potato
extern "C" void* __stdcall sub_b22644();
extern "C" void* __stdcall sub_b2263c();

struct CSelectionTreeCtrl {
    void init_00430b90();
};

struct FactoryProduct {
    char pad[0x1c];
    int m_field1c;
    FactoryProduct(const FactoryProduct& other);
    void* init_0078cb90();
};

void* FactoryProduct::init_0078cb90()
{
    char buf[0x1c];
    sub_b22644();
    ((CSelectionTreeCtrl*)this)->init_00430b90();
    m_field1c = *(int*)buf;
    sub_b2263c();

    return this;
}
