// from server: 54% by colin
struct CList {
    void* m_pNodeHead;      // +0x04
    void* m_pNodeTail;      // +0x08
    int   m_nCount;         // +0x0c
    void* m_pNodeFree;      // +0x10
    void* m_pBlocks;        // +0x14
    int   m_nBlockSize;     // +0x18

    void RemoveAll();
};

struct CObject {
    int m_dwRef;
};

extern "C" void __stdcall sub_68A1E0(void* p, void* p2, int n);
extern "C" void __stdcall sub_6306AC(void* p, int n);
extern "C" int  __stdcall sub_6306A6(void* p);
extern "C" void __stdcall sub_66FC80(void* p, void* p2);

void CList::RemoveAll()
{
    CObject* pObj = (CObject*)0;
    if ((~m_nBlockSize & 1) != 0) {
        sub_6306AC(pObj, m_nCount);
        void* p = m_pNodeHead;
        if (p != 0) {
            do {
                sub_68A1E0(pObj, (char*)p + 8, 1);
                p = *(void**)p;
            } while (p != 0);
        }
    } else {
        int n = sub_6306A6(pObj);
        if (n != 0) {
            do {
                char buf[16];
                *(int*)(buf + 0) = 0;
                *(int*)(buf + 4) = 0;
                *(int*)(buf + 8) = 0;
                *(int*)(buf + 12) = 0;
                sub_68A1E0(pObj, buf, 1);
                sub_66FC80(this, buf);
                n--;
            } while (n != 0);
        }
    }
}
