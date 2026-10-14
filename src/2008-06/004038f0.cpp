// from server: 73% by king_originala
void* __cdecl operator new(unsigned int);

long __stdcall f(void* value, void* arg2, void* arg3)
{
    if (!value)
        return (long)0x80070057UL;

    try
    {
        volatile void* allocation = operator new(12);
        if (!allocation)
            return (long)0x8007000EUL;
        return 0;
    }
    catch (...)
    {
        return (long)0x8007000EUL;
    }
}