// from server: 48% by colin
// roc 2007-08 0067e0c0  unit: CXTPControlToolbars  size: 312 bytes
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlExt.cpp

extern "C" {
    int __stdcall sub_631AD0();
    int __stdcall sub_6439B0();
    int __stdcall sub_67DEF0(int, int, int, int, int);
    int __stdcall sub_77DCB8();
    int __stdcall sub_77DDBC();
}

struct CXTPControlToolbars {
    char pad[0x28];
    int m_nCount;          // 0x28
    int m_nCapacity;       // 0x2c
    char pad2[0x80 - 0x30];
    int m_nIndex;          // 0x80
    int m_nValue84;        // 0x84
    char pad4[0x98 - 0x88];
    int m_nValue98;        // 0x98
    char pad5[0xd0 - 0x9c];
    int m_nFlags;          // 0xd0
    char pad6[0xf4 - 0xd4];
    void* m_pArray;        // 0xf4
    char pad7[0xfc - 0xf8];
    void* m_pOther;        // 0xfc

    void Method(int arg);
};

void CXTPControlToolbars::Method(int arg)
{
    int i = m_nIndex + 1;
    if (i < *(int*)((char*)m_pArray + 0x2c))
    {
        do
        {
            int idx = m_nIndex + 1;
            void* pItem;
            if (idx >= 0 && idx < *(int*)((char*)m_pArray + 0x2c))
            {
                pItem = *(void**)(*(int*)((char*)m_pArray + 0x28) + idx * 4);
            }
            else
            {
                pItem = 0;
            }

            int local;
            sub_631AD0();
            sub_77DCB8();
            sub_77DDBC();

            if (*(int*)((char*)m_pArray + 0x2c) > m_nIndex + 1)
            {
                void* p = m_pArray;
                (*(void(__thiscall**)(void*, void*))(*(int*)p + 0x58))(p, pItem);
            }

            i = m_nIndex + 1;
        } while (i < *(int*)((char*)m_pArray + 0x2c));
    }

    if (sub_6439B0())
    {
        m_nFlags = 0;
        return;
    }

    m_nFlags |= 1;
    sub_67DEF0((int)m_pOther, m_nIndex + 1, m_nValue84, 0, m_nValue98);
}
