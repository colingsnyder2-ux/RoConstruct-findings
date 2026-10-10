// from server: 56% by atomic.potato
extern "C" void __cdecl Function_006b3cc0();

struct S
{
    void f();
};

void S::f()
{
    unsigned char* p;
    int value;

    value = *(int*)((char*)0 + 12);
    if (value != 4)
    {
        *(int*)((char*)0 + 12) = value;
        Function_006b3cc0();
        return;
    }

    p = *(unsigned char**)((char*)0 + 8);
    *(int*)p = 0xB3AC08;
    p[4] = 0;
    p[5] = 0;
}
