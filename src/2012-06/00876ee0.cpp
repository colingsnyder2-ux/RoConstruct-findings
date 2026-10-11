// from server: 94% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int*)this = 0xbd792c;
    *((int*)this + 1) = 0xbd7920;
    *((int*)this + 6) = 0xbd7914;
    *((int*)this + 7) = 0xbd7908;
    *((int*)this + 32) = 0xbd78f8;
    *((int*)this + 33) = 0xbd78cc;
}
