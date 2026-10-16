// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// from server: 90% by king_originala
struct S
{
    char padding[12];
    int a;
    int b;
    S();
};

__forceinline S::S() : a(0), b(0)
{
}

S* func_0045fe40()
{
    static S object;
    return &object;
}
