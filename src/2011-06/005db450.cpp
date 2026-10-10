// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int*)((char*)this + 0) = 0xA8FCB4;
    *(int*)((char*)this + 4) = 0xA8FCA8;
    *(int*)((char*)this + 0x18) = 0xA8FC9C;
    *(int*)((char*)this + 0x1C) = 0xA8FC90;
}
