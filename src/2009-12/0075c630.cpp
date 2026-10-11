// from server: 94% by atomic.potato
struct S {
    void f();
};

void S::f()
{
    *(int*)((char*)this + 0) = 0x9e6a2c;
    *(int*)((char*)this + 4) = 0x9e6a24;
    *(int*)((char*)this + 0x18) = 0x9e6a18;
    *(int*)((char*)this + 0x1c) = 0x9e6a10;
    *(int*)((char*)this + 0x94) = 0x9e6a00;
    *(int*)((char*)this + 0x98) = 0x9e69e8;
}
