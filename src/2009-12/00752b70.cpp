// from server: 94% by atomic.potato
struct S {
    void f();
};

void S::f()
{
    *(int*)this = 0x9e4474;
    *((int*)this + 1) = 0x9e4468;
    *((int*)this + 6) = 0x9e445c;
    *((int*)this + 7) = 0x9e4454;
    *((int*)this + 37) = 0x9e4444;
    *((int*)this + 38) = 0x9e442c;
}
