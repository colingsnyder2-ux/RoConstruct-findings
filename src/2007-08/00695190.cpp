// from server: 47% by colin
struct CXTPToolTipContextToolTip_PAUTOOLITEM_CArray {
    char pad0[0x54];
    int m_nCount;
    char pad1[0x4];
    void* m_pData;
    char pad2[0x8];
    int m_nSize;
    char pad3[0x24];
    int m_field90;
    int m_field94;
    char pad4[0x10];
    char m_fieldA8[0x28];
    char pad5[0x20];
    int m_fieldC8;
    char pad6[0x34];
    int m_field100;
    char pad7[0x24];
    char m_fieldE0[0x28];
    char pad8[0x18];
    int m_field120;

    void RemoveAt(int nIndex, int nCount);
    void SetAt(int nIndex, void* pElement);
    void RemoveAll();
    void func_694360(int);
    void func_6d26b0(int, int);
};

extern "C" {
    void __stdcall SetRectEmpty(void*);
    void __stdcall func_77ddbc(void*);
    void __stdcall func_77d558(void*);
    void* __stdcall func_77ee14(void*);
    void __cdecl func_62fc62(void*);
    void __cdecl func_62ff20(void);
}

void CXTPToolTipContextToolTip_PAUTOOLITEM_CArray::RemoveAt(int nIndex, int nCount)
{
    int i;
    int nCount2 = this->m_nCount;
    if (nCount2 <= 0)
        return;
    for (i = 0; i < nCount2; i++)
    {
        if (i < 0 || i >= this->m_nSize)
        {
            func_62ff20();
            return;
        }
        void* pItem = ((void**)this->m_pData)[i];
        if (*(int*)((char*)pItem + 0x24) == *(int*)((char*)nIndex + 0xc) &&
            *(int*)((char*)pItem + 0x20) == *(int*)((char*)nIndex + 0x8))
        {
            if (this->m_field90 == *(int*)((char*)pItem + 0x20) &&
                this->m_field94 == *(int*)((char*)pItem + 0x24))
            {
                func_694360(0);
            }
            if (this->m_fieldC8 == *(int*)((char*)pItem + 0x20))
            {
                if (*(int*)(this->m_fieldA8 + 0x24) == *(int*)((char*)pItem + 0x24))
                {
                    func_77d558(this->m_fieldA8);
                    *(int*)(this->m_fieldA8 + 8) = 0;
                    *(int*)(this->m_fieldA8 + 0x20) = 0;
                    *(int*)(this->m_fieldA8 + 0x24) = -1;
                    *(int*)(this->m_fieldA8 + 0x1c) = 0;
                    func_77ee14(this->m_fieldA8 + 0xc);
                    func_77ee14(this->m_fieldA8 + 0x28);
                }
            }
            if (this->m_field100 == *(int*)((char*)pItem + 0x20))
            {
                if (*(int*)(this->m_fieldE0 + 0x24) == *(int*)((char*)pItem + 0x24))
                {
                    func_77d558(this->m_fieldE0);
                    *(int*)(this->m_fieldE0 + 8) = 0;
                    *(int*)(this->m_fieldE0 + 0x20) = 0;
                    *(int*)(this->m_fieldE0 + 0x24) = -1;
                    *(int*)(this->m_fieldE0 + 0x1c) = 0;
                    func_77ee14(this->m_fieldE0 + 0xc);
                    func_77ee14(this->m_fieldE0 + 0x28);
                }
            }
            func_6d26b0(1, i);
            func_77ddbc(pItem);
            func_62fc62(pItem);
            return;
        }
    }
}
