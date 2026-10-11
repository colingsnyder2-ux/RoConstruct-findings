// from server: 67% by atomic.potato
struct S
{
    void f();
};

S* const g = (S*)0x75c580;

void S::f()
{
    *(unsigned long*)((char*)this + 0) = 0x9e45d4;
    *(unsigned long*)((char*)this + 4) = 0x9e45c8;
    *(unsigned long*)((char*)this + 0x18) = 0x9e45bc;
    *(unsigned long*)((char*)this + 0x1c) = 0x9e45b4;
    *(unsigned long*)((char*)this + 0x94) = 0x9e45a4;
    *(unsigned long*)((char*)this + 0x98) = 0x9e458c;
    g->f();
}
