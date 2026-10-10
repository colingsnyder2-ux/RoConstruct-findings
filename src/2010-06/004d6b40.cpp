// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(unsigned long*)((char*)this + 0) = 0x00a19efc;
    *(unsigned long*)((char*)this + 4) = 0x00a19ef4;
    *(unsigned long*)((char*)this + 0x18) = 0x00a19ee8;
    *(unsigned long*)((char*)this + 0x1c) = 0x00a19edc;
}
