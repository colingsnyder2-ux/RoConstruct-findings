// from server: 35% by colin
struct CXMLEnumerator {
    void* m_pNode;          // +0x04
    void* m_pUnk08;         // +0x08
    unsigned int m_nCount;  // +0x0c
    void* m_pCur;           // +0x10
    int Advance(int* pIndex);
};

extern "C" int __stdcall lstrlenA(const char*);
extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void* __stdcall sub_8BAB64();
extern "C" void* __stdcall sub_77D2F4(const char*);
extern "C" void* __stdcall sub_4017C0(void*, const char*, int, void*);
extern "C" void* __stdcall sub_630BB0(unsigned int);
extern "C" void __stdcall sub_6319A0(unsigned int);
extern "C" void* __stdcall sub_6876F0(void*, int*, int);
extern "C" void __stdcall sub_630A1E();

int CXMLEnumerator::Advance(int* pIndex)
{
    void* pUnk = sub_8BAB64();
    char* pNode = *(char**)m_pNode;
    char* pVtbl = pNode + 0x70;
    void* pStr = sub_77DD98(m_pUnk08);
    void* pResult = ((void* (__thiscall*)(void*, void*))*(void**)pVtbl)(m_pNode, pStr);
    void* pUnk3 = 0;
    void* pUnk4 = 0;
    if (*(int*)((char*)m_pNode + 0x24) == 0) {
        void* pStr2 = sub_77DD98(m_pUnk08);
        int nLen = 0;
        if (pStr2 != 0) {
            nLen = lstrlenA((const char*)pStr2) + 1;
            if (nLen > 0x3fffffff) {
                nLen = 0;
            } else {
                void* pBuf = sub_630BB0(nLen * 2);
                nLen = (int)sub_4017C0(pBuf, (const char*)pStr2, nLen, pUnk);
            }
        }
        char* pUnk5 = (char*)pResult;
        if (*(int*)(pUnk5 + 0x40) == 0) {
            sub_6319A0(0x80004003);
        }
        void* pUnk6 = pUnk4;
        char* pUnk7 = *(char**)(pUnk5 + 0x40);
        if (pUnk6 != 0) {
            ((void (__thiscall*)(void*))*(void**)(*(char**)pUnk6 + 8))(pUnk6);
        }
        pUnk4 = 0;
        char* pUnk8 = pUnk7;
        ((void (__thiscall*)(void*, void*, int))*(void**)(*(char**)pUnk8 + 0xbc))(pUnk8, pUnk7, nLen);
        if (pUnk4 != 0) {
            char* pUnk9 = (char*)m_pNode + 0x48;
            if (*(char**)pUnk9 == 0) {
                sub_6319A0(0x80004003);
            }
            void* pUnk10 = pUnk3;
            char* pUnk11 = *(char**)pUnk9;
            if (pUnk10 != 0) {
                ((void (__thiscall*)(void*))*(void**)(*(char**)pUnk10 + 8))(pUnk10);
            }
            pUnk3 = 0;
            void* pUnk12 = pUnk4;
            ((void (__thiscall*)(void*, void*, void*))*(void**)(*(char**)pUnk11 + 0x54))(pUnk11, pUnk12, pUnk3);
        }
        (*pIndex)++;
        if ((unsigned int)*pIndex > m_nCount) {
            *pIndex = 0;
        }
    } else {
        void* pCur = m_pCur;
        if (pCur != 0) {
            pUnk3 = pCur;
            ((void (__thiscall*)(void*))*(void**)(*(char**)pCur + 4))(pCur);
        }
        int nIdx = *pIndex;
        void* pTmp = 0;
        void* pNew = sub_6876F0(this, (int*)&pTmp, nIdx);
        void* pNewVal = *(void**)pNew;
        void* pOld = m_pCur;
        if (pOld != pNewVal) {
            m_pCur = pNewVal;
            if (pNewVal != 0) {
                ((void (__thiscall*)(void*))*(void**)(*(char**)pNewVal + 4))(pNewVal);
            }
            if (pOld != 0) {
                ((void (__thiscall*)(void*))*(void**)(*(char**)pOld + 8))(pOld);
            }
        }
        if (pTmp != 0) {
            ((void (__thiscall*)(void*))*(void**)(*(char**)pTmp + 8))(pTmp);
        }
        if (m_pCur == 0) {
            *pIndex = 0;
        } else {
            (*pIndex)++;
        }
    }
    *(int*)((char*)pResult + 0x34) = 1;
    void* pOld2 = *(void**)((char*)pResult + 0x48);
    void* pNew2 = pUnk3;
    if (pOld2 != pNew2) {
        *(void**)((char*)pResult + 0x48) = pNew2;
        if (pNew2 != 0) {
            ((void (__thiscall*)(void*))*(void**)(*(char**)pNew2 + 4))(pNew2);
        }
        if (pOld2 != 0) {
            ((void (__thiscall*)(void*))*(void**)(*(char**)pOld2 + 8))(pOld2);
        }
    }
    if (pUnk4 != 0) {
        ((void (__thiscall*)(void*))*(void**)(*(char**)pUnk4 + 8))(pUnk4);
    }
    if (pUnk3 != 0) {
        ((void (__thiscall*)(void*))*(void**)(*(char**)pUnk3 + 8))(pUnk3);
    }
    return (int)pResult;
}
