// from server: 28% by atomic.potato
struct S
{
    float f();
};

float S::f()
{
    return *(float *)((char *)this + 0x2c);
}
