// from server: 94% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int*)((char*)this + 0) = 0x9e4014;
    *(int*)((char*)this + 4) = 0x9e4008;
    *(int*)((char*)this + 0x18) = 0x9e3ffc;
    *(int*)((char*)this + 0x1c) = 0x9e3ff4;
    *(int*)((char*)this + 0x94) = 0x9e3fe4;
    *(int*)((char*)this + 0x98) = 0x9e3fcc;
}
