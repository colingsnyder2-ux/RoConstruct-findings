// from server: 58% by atomic.potato
struct S
{
};

void __cdecl f(int, void* value, int kind)
{
    if (kind == 4)
    {
        *(unsigned long*)value = 0x00B50DC0;
        *((unsigned char*)value + 4) = 0;
        *((unsigned char*)value + 5) = 0;
    }
    else
    {
        f(0, value, kind);
    }
}
