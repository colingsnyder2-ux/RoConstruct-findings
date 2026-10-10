// from server: 80% by atomic.potato
extern "C" void * __cdecl function_501AE0(void *);
extern "C" void __cdecl function_5631C0(void *);

int function_563230(void *p)
{
    char buffer[132];
    int value = *((int *)((char *)function_501AE0(buffer) + 4));
    function_5631C0(buffer);
    return value;
}
