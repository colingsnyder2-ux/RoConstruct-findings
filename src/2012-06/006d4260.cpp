// from server: 88% by atomic.potato
extern "C" void __cdecl Function97BD60(void *);
extern "C" void __cdecl Function982114(void *);

void Function006D4260(void *value)
{
    if (value != 0)
    {
        Function97BD60((char *)value + 4);
        Function97BD60(value);
        Function982114(value);
    }
}
