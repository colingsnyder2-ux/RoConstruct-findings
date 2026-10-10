// from server: 94% by colin
extern "C" void* __stdcall CopyIcon(void*);

void sub_648640();
void* __cdecl sub_649a10(void*);

struct CXTPImageManagerIcon
{
    void* m_pIcon;
    void* m_pIcon2;
    int m_nUnknown8;
    int m_nUnknownC;

    void Assign(CXTPImageManagerIcon* other);
};

void CXTPImageManagerIcon::Assign(CXTPImageManagerIcon* other)
{
    void* p;
    void* q;

    sub_648640();

    p = other->m_pIcon;
    if (p != 0)
    {
        m_pIcon = CopyIcon(p);
    }

    q = other->m_pIcon2;
    if (q != 0)
    {
        m_pIcon2 = sub_649a10(q);
    }

    m_nUnknownC = 1;
}
