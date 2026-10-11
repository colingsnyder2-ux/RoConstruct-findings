// from server: 22% by atomic.potato
struct CXTPImageManagerIcon;

struct CXTPImageManagerIcons {
    char pad0[0x28];
    void* m_map; // 0x28
    char pad2[0x74 - 0x2c];
    unsigned int m_nMaxWidth; // 0x74

    void AddIcon(unsigned int nID, CXTPImageManagerIcon* pIcon);
};

struct CXTPImageManagerIcon {
    void* m_pData; // 0x2c
    char pad[0x20 - 4];
};

struct CXTPImageManagerIconSet {
    char pad0[0x20];
    void* m_pIcon; // 0x20
};

extern "C" {
    void* __stdcall sub_9d8410(void*, void*, void*);
    void __stdcall sub_9d8350(void*, void*, void*);
    void __stdcall sub_9d8560(void*, void*, void*);
    void* __stdcall sub_98211a(unsigned int);
    void __stdcall sub_98268a(void*);
    void __stdcall sub_982c5a(int, int);
    void* __stdcall sub_998160(void*, void*, void*);
    void* __stdcall sub_99ad80(void*, unsigned int, void*);
    void* __stdcall sub_99ae00(void*);
    void* __stdcall sub_99b640(void*, void*, int, void*, void*);
    void* __stdcall sub_99b9f0(void*, unsigned int);
    void* __stdcall sub_99ba50(void*, unsigned int);
    void* __stdcall sub_995e00(void*, unsigned int, void*);
    void* __stdcall sub_b247c8(void*, void*);
    void* __stdcall sub_b2479c(void*, void*);
    void* __stdcall sub_b247d0(void*);
}

void CXTPImageManagerIcons::AddIcon(unsigned int nID, CXTPImageManagerIcon* pIcon)
{
    if (nID > m_nMaxWidth)
        m_nMaxWidth = nID;

    sub_b247c8(&m_map, (void*)0xc0e8a8);

    if (pIcon->m_pData == 0) {
        sub_9d8410(&m_map, (void*)0xc0e89c, pIcon);
        CXTPImageManagerIcon* pNew = (CXTPImageManagerIcon*)sub_99b9f0(this, nID);
        void* pObj = ((void* (__stdcall*)(void*, void*))((*(void***)pIcon)[0x94/4]))(pIcon, (void*)0xbde2c0);
        if (pNew == 0) {
            void* pTmp = pObj;
            ((void (__stdcall*)(void*, void*, int))((*(void***)pTmp)[1]))(pTmp, 0, 1);
            ((void (__stdcall*)(void*, int))((*(void***)pTmp)[0]))(pTmp, 1);
        } else {
            unsigned int nCount = *(unsigned int*)((char*)pNew + 0x2c);
            void* pTmp = pObj;
            void* pRet = ((void* (__stdcall*)(void*, unsigned int, int))((*(void***)pTmp)[1]))(pTmp, nCount, 1);
            int bFlag = (*(int*)((char*)pNew + 0x2c) != 0) ? -1 : 0;
            if (bFlag != 0) {
                char* pIter = (char*)pNew + 0x20;
                do {
                    void* pVal;
                    sub_998160(pIter, &pVal, &pRet);
                    void* pIcon2 = ((void* (__stdcall*)(void*, void*))((*(void***)pTmp)[2]))(pTmp, &pRet);
                    sub_9d8350(pIcon2, (void*)0xbd1ac8, &pVal);
                    sub_9d8560(pIcon2, (void*)0xb71618, pVal);
                    if (pIcon2) sub_98268a(pIcon2);
                } while (*(int*)((char*)pNew + 0x2c) != 0);
            }
            ((void (__stdcall*)(void*, int))((*(void***)pTmp)[0]))(pTmp, 1);
        }
    } else {
        sub_9d8410(&m_map, (void*)0xc0e89c, pIcon);
        if (sub_b2479c(&m_map, (void*)0xc0e8a8) != 0)
            sub_982c5a(6, 0);

        void* pSet;
        if (sub_995e00((char*)this + 0x28, nID, &pSet) != 0) {
            sub_99ae00(pSet);
        } else {
            CXTPImageManagerIconSet* pNewSet = (CXTPImageManagerIconSet*)sub_98211a(0x44);
            if (pNewSet) {
                sub_99ad80(pNewSet, nID, this);
            } else {
                pNewSet = 0;
            }
            void* pSlot = sub_99ba50((char*)this + 0x28, nID);
            *(void**)pSlot = pNewSet;
        }

        void* pObj = ((void* (__stdcall*)(void*, void*))((*(void***)pIcon)[0x94/4]))(pIcon, (void*)0xbde2c0);
        void* pIter = ((void* (__stdcall*)(void*, int, int))((*(void***)pObj)[1]))(pObj, 0, 1);
        if (pIter != 0) {
            do {
                void* pIcon2 = ((void* (__stdcall*)(void*, void*))((*(void***)pObj)[2]))(pObj, &pIter);
                void* pVal;
                sub_9d8350(pIcon2, (void*)0xbd1ac8, &pVal);
                void* pNewIcon = sub_99b640((void*)0x158, pVal, 0xf, pIter, pVal);
                sub_9d8560(pIcon2, (void*)0xb71618, pNewIcon);
                void* pSlot = sub_99ba50((char*)this + 0x20, (unsigned int)pIter);
                *(void**)pSlot = pNewIcon;
                if (pIcon2) sub_98268a(pIcon2);
            } while (pIter != 0);
        }
        ((void (__stdcall*)(void*, int))((*(void***)pObj)[0]))(pObj, 1);
    }

    sub_b247d0(&m_map);
}
