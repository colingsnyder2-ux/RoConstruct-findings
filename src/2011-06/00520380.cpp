// from server: 26% by atomic.potato
struct S_func_00520380 {
    virtual unsigned short f();
    unsigned short g();
};

unsigned short S_func_00520380::f()
{
    return 0;
}

unsigned short S_func_00520380::g()
{
    return 0;
}

int S_func_00520380_compare(S_func_00520380* p)
{
    unsigned short a = p->f();
    unsigned short b = p->g();
    return a != b;
}
