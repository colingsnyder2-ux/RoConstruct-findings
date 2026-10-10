// from server: 61% by atomic.potato
extern "C" void __cdecl function_78c9d0();

void function_78cfc0(void* a, void* b, int c)
{
    if (c != 4)
    {
        function_78c9d0();
        return;
    }

    *(unsigned long*)b = 0x00b62a48;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
