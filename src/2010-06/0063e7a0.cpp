// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int*)((char*)this + 0) = 0xa36d24;
    *(int*)((char*)this + 4) = 0xa36d1c;
    *(int*)((char*)this + 0x18) = 0xa36d10;
    *(int*)((char*)this + 0x1c) = 0xa36d04;
}
