// from server: 21% by colin
struct CXTPPropertyGridInplaceEdit;

struct CXTPPropertyGridItem
{
    char pad[0x28];
    int m_nCount;
    char pad2[0x34 - 0x2c];
    int m_nIndex;
};

struct CXTPPropertyGrid
{
    char pad[0xa0];
    CXTPPropertyGridItem* m_pItem;
};

struct CXTPPropertyGridInplaceEdit
{
    char pad[0xa0];
    CXTPPropertyGrid* m_pGrid;
    bool SetValue(int nIndex, int* pValue);
};

extern "C" int __stdcall sub_77ddac(void*);
extern "C" int __stdcall sub_77dd98(void*);
extern "C" int __stdcall sub_77ddbc(void*);

extern "C" int __stdcall sub_630250(void*, void*);
extern "C" int __stdcall sub_630016(void*, void*);
extern "C" int __stdcall sub_6991c0(void*, int);
extern "C" int __stdcall sub_699120(void*, int*, int);

bool CXTPPropertyGridInplaceEdit::SetValue(int nIndex, int* pValue)
{
    CXTPPropertyGridItem* pItem = m_pGrid->m_pItem;
    if (pItem->m_nCount == 0)
        return false;

    int local;
    sub_77ddac(&local);
    sub_630250(this, &local);
    int val = sub_77dd98(&local);
    int idx = sub_6991c0(pItem, val);
    if (idx == -1)
    {
        sub_77ddbc(&local);
        return false;
    }

    idx += nIndex;
    if (idx >= pItem->m_nCount)
    {
        if (pValue != 0)
            idx = pItem->m_nCount - 1;
        else
            idx = 0;
    }
    else if (idx < 0)
    {
        if (pValue != 0)
            idx = pItem->m_nCount - 1;
        else
            idx = 0;
    }

    int out;
    sub_699120(pItem, &out, idx);
    int outVal = sub_77dd98(&out);
    sub_630016(this, (void*)outVal);
    sub_77ddbc(&out);
    pItem->m_nIndex = idx;
    sub_77ddbc(&local);
    return true;
}
