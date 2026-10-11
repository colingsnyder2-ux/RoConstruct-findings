// from server: 68% by atomic.potato
struct CXTPPropertyGridInplaceEdit
{
    int OnMouseMove(int);
};

extern "C" int __stdcall sub_7bbff2(int);
extern "C" int __stdcall sub_775bd0(int);

int CXTPPropertyGridInplaceEdit::OnMouseMove(int a)
{
    if (*(int*)(a + 4) == 0x100)
    {
        if (sub_7bbff2(a))
            return 1;
    }
    return sub_775bd0(a);
}
