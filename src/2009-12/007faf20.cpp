// from server: 21% by atomic.potato
struct S
{
    S *f();
};

extern "C" S *__cdecl sub_007faeb0(S *);

S *S::f()
{
    S *p = sub_007faeb0(this);
    int arg;
    return p;
}
