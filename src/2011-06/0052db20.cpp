// from server: 58% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this) = 0;
    *(int*)((char*)this + 4) = 0;
}
