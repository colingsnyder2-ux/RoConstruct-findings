// from server: 70% by atomic.potato
struct S;

extern "C" S* sub_811770(S*);

struct S
{
    S* f();
    virtual void v(S*);
};

S* S::f()
{
    S* edi = this;
    S* esi = sub_811770(this);
    esi->v(this);
    return esi;
}
