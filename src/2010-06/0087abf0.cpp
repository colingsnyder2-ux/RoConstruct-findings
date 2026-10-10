// from server: 37% by atomic.potato
struct CXTPPropertyGridInplaceEdit
{
    int f(int);
};

extern "C" int __stdcall sub_009ecde4(CXTPPropertyGridInplaceEdit*);

int CXTPPropertyGridInplaceEdit::f(int value)
{
    if (value < 0)
        return 0;
    if (value >= sub_009ecde4(this))
        return 0;
    return 1;
}
