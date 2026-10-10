// from server: 36% by colin
struct CArray {
    void* m_pData;
    int m_nSize;
    int m_nMaxSize;
    void Add(int nValue);
};

struct CPropertyGridInplaceButton {
    int m_nID;
    CArray m_buttons;
    void AddButton(int nID);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void CPropertyGridInplaceButton::AddButton(int nID)
{
    if (m_buttons.m_nSize != 0)
        return;
    CArray* pArray = (CArray*)operator_new(0x50);
    if (pArray)
    {
        pArray->m_pData = 0;
        pArray->m_nSize = 0;
        pArray->m_nMaxSize = 0;
        pArray->Add(nID);
    }
    else
    {
        pArray = 0;
    }
    m_buttons.Add((int)pArray);
}
