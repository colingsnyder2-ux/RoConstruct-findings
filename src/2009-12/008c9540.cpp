// from server: 82% by atomic.potato
struct CXTPPropertyGridInplaceEdit
{
    int OnEditKeyDown(unsigned int* pMsg);
};

extern "C" int __stdcall sub_0092645a(unsigned int* pMsg);

struct CXTPPropertyGridInplaceEdit2
{
    int sub_008c8ea0(unsigned int* pMsg);
};

int CXTPPropertyGridInplaceEdit::OnEditKeyDown(unsigned int* pMsg)
{
    if (pMsg[1] == 0x100)
    {
        if (sub_0092645a(pMsg))
            return 1;
    }
    ((CXTPPropertyGridInplaceEdit2*)this)->sub_008c8ea0(pMsg);
    return 0;
}
