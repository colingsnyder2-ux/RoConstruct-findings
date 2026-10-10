// from server: 66% by atomic.potato
struct S
{
    void f(float value);
};

void S::f(float value)
{
    *(float*)((char*)this + 0xa0) = value;
}
