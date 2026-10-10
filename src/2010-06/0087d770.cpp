// from server: 43% by atomic.potato
struct CXTPPropertyGridInplaceEdit
{
    void *function_009ecec4(void *, void *, void *, void *);
    void *f(void *);
};

void *CXTPPropertyGridInplaceEdit::f(void *arg)
{
    function_009ecec4(0, 0, 0, (char *)this + 32);
    return arg;
}
