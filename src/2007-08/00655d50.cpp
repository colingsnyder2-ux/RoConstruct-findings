// from server: 59% by tester
struct CXTPReportControl {
    char m_pad[0xb0];
    int m_pFieldB0;
    char m_pad2[0xb0];
    int m_nField164;
    void Traverse(int nIndex);
};

struct CItem {
    char m_pad[0x34];
    int m_nField34;
    int m_nField38;
};

struct CObj {
    char m_pad[0x4c];
    int m_nField4c;
};

extern "C" int __cdecl sub_663C50(void *p);
extern "C" void *__cdecl sub_661700(void *p, int nIndex);
extern "C" int __cdecl sub_661CE0(void *p);
extern "C" int __cdecl sub_661F30(void *p);

void CXTPReportControl::Traverse(int nIndex)
{
    int i = 0;
    while (i < sub_663C50(*(void **)((char *)this + 0xb0)))
    {
        CItem *pItem = (CItem *)sub_661700(*(void **)((char *)this + 0xb0), i);
        int nVal = 0;
        if (pItem->m_nField38 == 0)
        {
            if (pItem->m_nField34 == 0)
                goto next;
            nVal = *(int *)(*(int *)((char *)this + 0xb0) + 0x250);
            (*(void (__thiscall **)(CXTPReportControl *, int *, int))(*(int *)this + 0x158))(this, &nVal, nVal);
            if ((*(int (__thiscall **)(CXTPReportControl *, CItem *))(*(int *)this + 0x18c))(this, pItem) != 0)
                goto next;
        }
        CObj *pObj = (CObj *)(*(void *(__thiscall **)(CXTPReportControl *))(*(int *)this + 0x198))(this);
        (*(void (__thiscall **)(CObj *, CXTPReportControl *, CItem *))(*(int *)pObj + 0x58))(pObj, this, pItem);
        pObj->m_nField4c = nVal;
        (*(void (__thiscall **)(CObj *, CObj *))(*(int *)pObj + 0x60))(pObj, pObj);
        if (sub_661CE0(pItem) != 0)
        {
            int nSub = sub_661F30(pItem);
            int nRet = (*(int (__thiscall **)(CObj *, CObj *))(*(int *)pObj + 0xb8))(pObj, pObj);
            Traverse(nRet);
            if ((*(int (__thiscall **)(CObj *, CObj *))(*(int *)pObj + 0xb8))(pObj, pObj) != 0)
            {
                if (this->m_nField164 != 0)
                {
                    int nRet2 = (*(int (__thiscall **)(CObj *, CObj *))(*(int *)pObj + 0xb8))(pObj, pObj);
                    (*(void (__thiscall **)(CXTPReportControl *, int))(*(int *)this + 0x188))(this, nRet2);
                }
            }
        }
next:
        i++;
    }
}
