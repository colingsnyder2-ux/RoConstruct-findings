// from server: 58% by atomic.potato
struct S
{
    void f(float value);
};

void S::f(float value)
{
    *(float*)((char*)this + 0x10) = value;
}
