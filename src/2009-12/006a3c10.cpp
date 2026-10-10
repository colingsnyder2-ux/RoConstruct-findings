// from server: 80% by atomic.potato
extern "C" void __cdecl target(int);

void function(int a, int b)
{
    if (a != 4)
    {
        target(a);
    }
    else
    {
        *(int*)b = 0xb39ba8;
        *((char*)b + 4) = 0;
        *((char*)b + 5) = 0;
    }
}
