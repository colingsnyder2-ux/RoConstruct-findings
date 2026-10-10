// from server: 88% by atomic.potato
struct S_func_00946cf0
{
    struct Base
    {
        virtual void f();
        virtual void g();
    };

    char padding_7c[124];
    Base* member_80;
    virtual void f();
};

void S_func_00946cf0::f()
{
    member_80->f();
}
