// from server: 66% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    if (this)
    {
        void (**vtable)(int);
        vtable = *(void (***)(int))this;
        vtable[1](1);
    }
}
