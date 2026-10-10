// from server: 60% by atomic.potato
struct CNameItem
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
        return;

    *(int*)b = 0xb09e98;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
