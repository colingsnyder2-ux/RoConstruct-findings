// from server: 90% by atomic.potato
struct FactoryProduct
{
    int value0;
    int value1;
    char pad0[0x10];
    int value6;
    int value7;

    void *initialize();
};

extern "C" void FactoryProductTarget();
extern "C" void FactoryProductDestroy(void *);

void *FactoryProduct::initialize()
{
    value0 = 0x9d7ffc;
    value1 = 0x9d7ff0;
    value6 = 0x9d7fe4;
    value7 = 0x9d7fdc;
    FactoryProductTarget();
    if (*(unsigned char *)((char *)this - 4) & 1)
        FactoryProductDestroy(this);
    return this;
}
