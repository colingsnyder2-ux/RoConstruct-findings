// from server: 91% by atomic.potato
extern "C" int __cdecl sub_0080B2EA(void *, const void *, const void *, int, int);

int __stdcall FactoryProduct(void *arg)
{
    int result = sub_0080B2EA(arg, (const void *)0x00C071F8,
                               (const void *)0x00C5AF50, 0, 0);
    return result != 0;
}
