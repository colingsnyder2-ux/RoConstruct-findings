// from server: 33% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    int value;
    if (value != 4)
        return;
    *(int*)value = 0xba9750;
    *((char*)value + 4) = 0;
    *((char*)value + 5) = 0;
}
