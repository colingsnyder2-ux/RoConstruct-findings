// from server: 94% by colin
struct CXTPPropertyGridInplaceEdit
{
    int m_nUnknown0;
    int* m_pData;
    int m_nCount;
    int GetAt(int nIndex);
};

extern "C" void __cdecl func_0062ff20();

int CXTPPropertyGridInplaceEdit::GetAt(int nIndex)
{
    if (nIndex >= 0 && nIndex < m_nCount)
        return m_pData[nIndex];
    func_0062ff20();
}
