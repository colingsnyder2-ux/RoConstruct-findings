// from server: 54% by colin
struct CXTPDockBar_UDOCK_INFO_CArray {
    char pad_0000[0x54];
    unsigned int m_dwFlags54;
    char pad_0058[0x08];
    int m_nCount60;
    char pad_0064[0x08];
    void* m_pUnknown6c;

    void* GetAt(int nIndex);
    int Find(void* p, int nStart);
    int InsertAt(int nIndex, void* p, int nCount);
    void SetAt(int nIndex, void* p);
    void SetSize(int nNewSize, int nGrowBy);

    int FindIndex(int nStart, int nEnd, void* p, int nFlags);
};

struct tagRECT {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall GetWindowRect(void* hWnd, tagRECT* lpRect);

int CXTPDockBar_UDOCK_INFO_CArray::FindIndex(int nStart, int nEnd, void* p, int nFlags) {
    int result = 0;
    int found = 0;
    int foundIndex = 0;
    int lastIndex = 0;
    unsigned int mask = m_dwFlags54 & 0xa000;
    int i;

    if (m_pUnknown6c != 0) {
        void** vtbl = *(void***)m_pUnknown6c;
        typedef void* (__thiscall *FnGet)(void*);
        FnGet fn = (FnGet)vtbl[0x58 / 4];
        void* pObj = fn(m_pUnknown6c);
        if (pObj != 0) {
            void** vtbl2 = *(void***)pObj;
            typedef int (__thiscall *FnIs)(void*);
            FnIs fn2 = (FnIs)vtbl2[0x18c / 4];
            if (fn2(pObj) != 0) {
                void** vtbl3 = *(void***)m_pUnknown6c;
                typedef void* (__thiscall *FnGet2)(void*);
                FnGet2 fn3 = (FnGet2)vtbl3[0x58 / 4];
                void* pObj2 = fn3(m_pUnknown6c);
                int r = this->Find(pObj2, -1);
                found = 0;
                if (r != -1) {
                    found = 1;
                }
            }
        }
    }

    if (m_nCount60 <= 0) {
        goto done;
    }

    for (i = 0; i < m_nCount60; i++) {
        void* pItem = this->GetAt(i);
        if (pItem != 0) {
            void** vtbl = *(void***)pItem;
            typedef int (__thiscall *FnIs2)(void*);
            FnIs2 fn = (FnIs2)vtbl[0x160 / 4];
            if (fn(pItem) != 0) {
                tagRECT rc;
                GetWindowRect(*(void**)((char*)pItem + 0x20), &rc);
                int r = this->Find(&rc, 0);
                int val;
                if (mask != 0) {
                    val = rc.top;
                } else {
                    val = rc.left;
                }
                if (result <= val) {
                    if (mask != 0) {
                        result = rc.top;
                    } else {
                        result = rc.left;
                    }
                }
            }
        } else {
            int val;
            if (mask != 0) {
                val = 0;
            } else {
                val = 0;
            }
            if (val < result) {
                if (found != 0 || foundIndex > 1) {
                    goto found_path;
                }
            }
            lastIndex = result;
            result = 0;
            foundIndex = i;
        }
    }

done:
    foundIndex = foundIndex + 1;
    this->SetSize(foundIndex, 1);
    this->SetAt(foundIndex, (void*)lastIndex);
    return foundIndex;

found_path:
    if (i != 0) {
        int val;
        if (mask != 0) {
            val = 0;
        } else {
            val = 0;
        }
        if (val != lastIndex) {
            this->InsertAt(foundIndex + 1, 0, 1);
        }
    }
    foundIndex = foundIndex + 1;
    this->SetAt(foundIndex, (void*)lastIndex);
    return foundIndex;
}
