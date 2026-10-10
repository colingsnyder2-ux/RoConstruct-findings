// from server: 45% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    unsigned char* p;
    int value;

    p = *(unsigned char**)((char*)this + 8);
    value = *(int*)((char*)this + 12);

    if (value != 4)
    {
        *(int*)((char*)this + 12) = value;
        return;
    }

    *(int*)p = 0x00c375e0;
    p[4] = 0;
    p[5] = 0;
}
