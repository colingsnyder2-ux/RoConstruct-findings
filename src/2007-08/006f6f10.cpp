// from server: 47% by colin
// roc 2007-08 006f6f10  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6f10

struct CXTMaskEditT {
    char pad[0x6c];
    char m_bChar;
    char pad2[0x84 - 0x6d];
    void* m_pMask;
    int IsValid(int nIndex);
};

extern "C" int __stdcall GetMaskLength(void* p);
extern "C" char __stdcall GetMaskChar(void* p, int nIndex);

int CXTMaskEditT::IsValid(int nIndex)
{
    if (nIndex < 0)
        return 0;
    if (nIndex >= GetMaskLength(&m_pMask))
        return 0;
    if (GetMaskChar(&m_pMask, nIndex) != m_bChar)
        return 0;
    return 1;
}
