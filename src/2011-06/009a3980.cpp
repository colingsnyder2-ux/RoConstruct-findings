// from server: 79% by atomic.potato
extern "C" void* __cdecl operator_new(unsigned int);

struct S
{
    S();
};

S::S()
{
    int* p = (int*)operator_new(0x5c);
    if (p)
        *p = (int)p;
    int* q = p + 1;
    if (q)
        *q = (int)p;
}
