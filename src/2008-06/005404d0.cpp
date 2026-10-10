// from server: 8% by atomic.potato
struct T
{
    void g();
};

struct S
{
    void f();
};

void T::g()
{
}

void S::f()
{
    ((T*)((char*)this + 8))->g();
}
