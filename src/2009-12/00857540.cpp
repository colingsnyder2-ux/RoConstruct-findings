// from server: 94% by atomic.potato
extern "C" int __cdecl sub_007f3b0c();

struct CXTPTabClientWnd
{
    char pad[0x6c];
    int *m_pItems;
    int m_itemCount;
    int GetItem(int index);
};

int CXTPTabClientWnd::GetItem(int index)
{
    if (index >= 0 && index < m_itemCount)
        return m_pItems[index];
    return sub_007f3b0c();
}
