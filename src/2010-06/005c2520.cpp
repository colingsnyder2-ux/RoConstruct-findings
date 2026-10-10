// from server: 90% by atomic.potato
struct VVector3FactoryProduct
{
    void f();
};

void VVector3FactoryProduct::f()
{
    *(int *)this = 0x00a2bfc4;
    *((int *)this + 1) = 0x00a2bfb8;
    *((int *)this + 6) = 0x00a2bfac;
    *((int *)this + 7) = 0x00a2bfa0;
}
