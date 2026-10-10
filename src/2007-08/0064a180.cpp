// from server: 46% by colin
// roc 2007-08 0064a180  unit: CXTPCommandBar  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064a180

extern "C" void __stdcall free(void*);

struct CXTPCommandBar
{
    int sub_649E50(int*, int*, int*, int*);
    void sub_6306AC(int);
    void sub_630694(int, int);
    void func(int, int);
};

void CXTPCommandBar::func(int a, int b)
{
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    int v5 = 0;
    int v6 = 0;

    if (this->sub_649E50(&v1, &v2, &v3, &v4))
    {
        this->sub_6306AC(v5);
        this->sub_630694(v5, v6);
        this->sub_6306AC(v3);
        this->sub_630694(v3, v4);
    }
    else
    {
        this->sub_6306AC(v5);
    }

    if (v1)
        free((void*)v1);
    if (v2)
        free((void*)v2);
}
