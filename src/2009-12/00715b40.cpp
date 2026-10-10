// from server: 92% by atomic.potato
struct FactoryProduct
{
    void f();
};

void FactoryProduct::f()
{
    *(int *)this = 0x9ded64;
    *(int *)((char *)this + 4) = 0x9ded58;
    *(int *)((char *)this + 0x18) = 0x9ded4c;
    *(int *)((char *)this + 0x1c) = 0x9ded44;
    *(int *)((char *)this + 0x94) = 0x9ded2c;
}
