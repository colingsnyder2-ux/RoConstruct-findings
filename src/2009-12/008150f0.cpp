// from server: 89% by atomic.potato
struct S
{
    int f(S* p);
    char pad[0x2c];
    void* field;
};

extern "C" void __stdcall sub_86ac70(void*, void*, void*);

int S::f(S* p)
{
    sub_86ac70((char*)this + 0x24, field, p);
    *(int*)((char*)p + 0x214) = 1;
    return (int)p;
}
