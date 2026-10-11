// from server: 64% by atomic.potato
extern "C" void Notify(void *, const char *);

struct S {
    void f(float);
};

void S::f(float value)
{
    float *p = *(float **)((char *)this + 0x150);
    if (value == p[0x94 / sizeof(float)])
        return;
    p[0x94 / sizeof(float)] = value;
    Notify(this, "");
}
