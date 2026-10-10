// from server: 52% by atomic.potato
extern "C" void __cdecl sub_546d80(int, int);

struct S
{
    void __cdecl f(int);
};

void __cdecl S::f(int value)
{
    unsigned char flag;
    sub_546d80(value, flag);
}
