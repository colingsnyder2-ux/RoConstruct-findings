// from server: 61% by atomic.potato
extern "C" void __cdecl function_512fe0();

void function_515640(int a, int b, int c)
{
    if (c != 4)
    {
        function_512fe0();
        return;
    }

    *(int*)b = 0x00b18590;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
