// from server: 93% by atomic.potato
extern "C" void __stdcall FactoryProduct(void *, const char *);

struct FlagStand
{
    char padding[1020];
    int value;
    void f(int);
};

void FlagStand::f(int value)
{
    this->value = value;
    FactoryProduct(this, (const char *)0x97610c);
}
