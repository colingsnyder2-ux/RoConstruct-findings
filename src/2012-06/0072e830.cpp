// from server: 90% by atomic.potato
typedef void (*FactoryProductNext)(void);

extern unsigned int g_00e18934;

struct FactoryProduct
{
    unsigned int vtable;
    unsigned int field04;
    unsigned int field08;
    unsigned int field0c;
    unsigned int field10;
    unsigned int field14;
    unsigned int field18;
    unsigned int field1c;

    void f();
};

void FactoryProduct::f()
{
    g_00e18934 = 0;
    vtable = 0x00ba6c74;
    field04 = 0x00ba6c6c;
    field18 = 0x00ba6c60;
    field1c = 0x00ba6c54;
    ((FactoryProductNext)0x00685090)();
}
