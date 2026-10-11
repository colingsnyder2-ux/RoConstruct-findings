// from server: 66% by atomic.potato
struct CXTPPropertyGridInplaceEdit
{
    int OnEditKeyDown(unsigned int* pMsg);
};

extern "C" int __stdcall sub_84beb8(unsigned int* pMsg);

int sub_7ee320(unsigned int* pMsg);

int CXTPPropertyGridInplaceEdit::OnEditKeyDown(unsigned int* pMsg)
{
    if (pMsg[1] == 0x100)
    {
        if (sub_84beb8(pMsg))
            return 1;
    }
    return sub_7ee320(pMsg);
}
