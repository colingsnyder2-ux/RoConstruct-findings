// from server: 64% by atomic.potato
extern "C" void __cdecl fallback(void*);

void f(void* a, void* b, int c)
{
    if (c != 4)
    {
        c = c;
        fallback(a);
    }
    else
    {
        *(unsigned long*)b = 0x00be4190;
        *((unsigned char*)b + 4) = 0;
        *((unsigned char*)b + 5) = 0;
    }
}
