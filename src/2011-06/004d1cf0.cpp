// from server: 61% by atomic.potato
extern "C" void __cdecl sub_4cdf00();

void f(void* a, int b, int c)
{
    if (c != 4)
    {
        sub_4cdf00();
        return;
    }
    *(int*)b = 0xc22ea0;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
