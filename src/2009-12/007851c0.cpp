// from server: 42% by atomic.potato
struct S
{
};

void __cdecl f(int, int, int value)
{
    if (value != 4)
        return f(0, 0, value);

    struct T
    {
        int value;
        unsigned char a;
        unsigned char b;
    };

    T* p = (T*)(*(int*)((char*)0 + 8));
    p->value = 0xb620f0;
    p->a = 0;
    p->b = 0;
}
