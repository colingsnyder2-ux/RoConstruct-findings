// from server: 54% by atomic.potato
struct CProgressDialog
{
    void f();
    char g();
};

void CProgressDialog::f()
{
}

char CProgressDialog::g()
{
    f();
    return 0;
}
