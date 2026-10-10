// from server: 90% by atomic.potato
struct FactoryProduct
{
    void f();
};

void FactoryProduct::f()
{
    *(int*)this = 0xA5C824;
    *((int*)this + 1) = 0xA5C818;
    *((int*)this + 6) = 0xA5C80C;
    *((int*)this + 7) = 0xA5C800;
}
