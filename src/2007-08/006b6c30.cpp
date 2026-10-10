// from server: 52% by colin
struct CXTPControlGallery
{
    int GetCount();
    int HitTest(int, int);
    void GetItemRect(int, int*);
    int m_nCount;
    char _pad[0x220 - 4];
    char* m_pItems;

    int GetItemIndex(int x, int y);
};

int CXTPControlGallery::GetItemIndex(int x, int y)
{
    int count = GetCount();
    if (count == 0)
        return -1;

    int index = x;
    int ypos = y;

    if (index == -1 || index >= GetCount())
    {
        index = HitTest(-1, ypos);
    }

    if (index < 0 || index >= m_nCount)
        return index;

    int itemOffset = index * 24;
    char* item = m_pItems + itemOffset;

    int rect[4];
    GetItemRect(index, rect);

    if (ypos < 0)
    {
        int i = index - 1;
        if (i >= 0)
        {
            int off = i * 24;
            while (i >= 0)
            {
                if (i < m_nCount)
                {
                    char* prev = m_pItems + off;
                    int* pItem = *(int**)(prev + 0x10);
                    if (pItem[0x44 / 4] == 0)
                    {
                        int dy = rect[1] - *(int*)(prev + 4);
                        int dyy = ypos - y;
                        if (dy < dyy)
                        {
                            index = i;
                        }
                    }
                    int dy2 = rect[1] - *(int*)(prev + 4);
                    int dyy2 = ypos - y;
                    if (dy2 > dyy2)
                        break;
                }
                i--;
                off -= 24;
            }
        }
    }
    else
    {
        int i = index + 1;
        int maxCount = GetCount();
        if (i < maxCount)
        {
            int off = i * 24;
            while (i < maxCount)
            {
                if (i >= 0 && i < m_nCount)
                {
                    char* next = m_pItems + off;
                    int* pItem = *(int**)(next + 0x10);
                    if (pItem[0x44 / 4] == 0)
                    {
                        int dy = *(int*)(next + 0xc) - rect[3];
                        int dyy = ypos - y;
                        if (dy < dyy)
                        {
                            index = i;
                        }
                    }
                    int dy2 = *(int*)(next + 0xc) - rect[3];
                    int dyy2 = ypos - y;
                    if (dy2 > dyy2)
                        break;
                }
                i++;
                off += 24;
            }
        }
    }

    return index;
}
