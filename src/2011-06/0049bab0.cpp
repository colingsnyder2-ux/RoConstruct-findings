// from server: 34% by atomic.potato
struct CWebToolbox
{
    int f();
    void g();
    void* field_f8;
};

void CWebToolbox::g()
{
}

int CWebToolbox::f()
{
    if (field_f8)
        g();
    return 3;
}
