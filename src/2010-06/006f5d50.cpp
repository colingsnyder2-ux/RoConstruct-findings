// from server: 53% by atomic.potato
extern "C" void __cdecl continuation(int, int);

struct S
{
};

void __cdecl f(int, int value)
{
    if (value != 4)
    {
        continuation(0, value);
        return;
    }
}
