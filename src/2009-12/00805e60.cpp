// from server: 66% by atomic.potato
struct S
{
    int f(int*);
};

int S::f(int* p)
{
    if (!p)
        return 0x80070057;

    int* q = (int*)((char*)this + 0xa0);
    *p = *(q + 0xb);
    return 0;
}
