// from server: 70% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    if (*((unsigned char *)this + 0x14))
        (*(void (__thiscall **)(S *))(*(int **)this + 0x38))(this);
}
