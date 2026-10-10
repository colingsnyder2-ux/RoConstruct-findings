// from server: 65% by atomic.potato
struct CInstanceRecord_CNameItem
{
    char m_pad[0x48];
    void* m_p48;
    void* GetValue();
};

void* CInstanceRecord_CNameItem::GetValue()
{
    if (m_p48)
        return reinterpret_cast<void* (__thiscall *)(void*)>(
            *reinterpret_cast<void**>(
                *reinterpret_cast<void***>(m_p48) + 0x60))(m_p48);
    return 0;
}
