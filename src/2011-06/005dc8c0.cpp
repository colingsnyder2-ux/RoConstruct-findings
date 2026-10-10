// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int*)((char*)this + 0) = 0xa90074;
    *(int*)((char*)this + 4) = 0xa90068;
    *(int*)((char*)this + 0x18) = 0xa9005c;
    *(int*)((char*)this + 0x1c) = 0xa90050;
}
