// from server: 93% by atomic.potato
struct PhysicsSender
{
    unsigned int __cdecl f(unsigned int *a, unsigned int *b);
};

unsigned int __cdecl PhysicsSender::f(unsigned int *a, unsigned int *b)
{
    unsigned int x = *a;
    unsigned int y = *b;
    if (x < y)
        return 0xffffffffu;
    return x != y;
}
