// from server: 82% by colin
struct HWND__;

struct CArrayHWND {
    char pad[0x2c];
    unsigned int m_nSize;
    unsigned int m_nGrowBy;
    HWND__** m_pData;
    void Add(HWND__* newElement);
};

extern "C" void __stdcall CArrayHWND_Add_impl(void* pArray, HWND__** pData, HWND__* newElement);

void CArrayHWND::Add(HWND__* newElement)
{
    CArrayHWND_Add_impl((char*)this + 0x2c, m_pData, newElement);
}
