// from server: 66% by atomic.potato
struct S
{
    int f(int);
    char padding0[160];
    void* value;
    char padding1[8];
    unsigned char flags;
};

extern "C" void __cdecl call_one(void*, int);
extern "C" void __cdecl call_two(void*);

int S::f(int value)
{
    if ((flags & 1) == 0 && this->value != 0)
    {
        call_one(this->value, value);
        call_two(this);
    }
    return 0;
}
