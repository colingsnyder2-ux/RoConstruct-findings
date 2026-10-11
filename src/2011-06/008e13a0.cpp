// from server: 68% by atomic.potato
struct CXTPPropertyGridInplaceEdit
{
    int OnEditKeyDown(unsigned int* pMsg);
};

extern "C" int __stdcall sub_9cc600(unsigned int* pMsg);
extern "C" int __stdcall sub_8e0d00(unsigned int* pMsg);

int CXTPPropertyGridInplaceEdit::OnEditKeyDown(unsigned int* pMsg)
{
    if (pMsg[1] == 0x100)
    {
        if (sub_9cc600(pMsg))
            return 1;
    }
    return sub_8e0d00(pMsg);
}
