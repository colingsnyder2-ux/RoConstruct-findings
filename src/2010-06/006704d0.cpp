// from server: 91% by atomic.potato
extern "C" void __cdecl function_00670320(void*, unsigned int);

struct S
{
};

void __cdecl f(void* a, unsigned int status)
{
    if (status != 4)
        function_00670320(a, status);
    else
    {
        *(unsigned long*)a = 0x00bbfce8;
        *((unsigned char*)a + 4) = 0;
        *((unsigned char*)a + 5) = 0;
    }
}
