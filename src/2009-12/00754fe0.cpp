// from server: 91% by atomic.potato
extern "C" void __cdecl FactoryProductDispatch(void *, unsigned int);

struct FactoryProduct
{
};

void __cdecl f(void *result, unsigned int kind)
{
    if (kind != 4)
    {
        FactoryProductDispatch(result, kind);
        return;
    }

    *(unsigned int *)result = 0x00b59d98;
    *((unsigned char *)result + 4) = 0;
    *((unsigned char *)result + 5) = 0;
}
