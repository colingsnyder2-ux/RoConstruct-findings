// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int*)this = 0x9cde4c;
    *((int*)this + 1) = 0x9cde44;
    *((int*)this + 6) = 0x9cde38;
    *((int*)this + 7) = 0x9cde30;
}
