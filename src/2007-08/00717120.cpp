// from server: 26% by colin
struct PAVCXTPRibbonGroup {
    char pad0[0x24];
    int* m_pData;
    int m_nSize;
    char pad2c[0x0c];
    void* m_pUnknown34;
    int m_nField38;
    int Method(int, int, int, int);
};

extern "C" void* __cdecl sub_62FF32(unsigned int);
extern "C" void __cdecl sub_62FF26(void*);
extern "C" void __cdecl sub_6A7C90(void*, int, int);
extern "C" void* __cdecl sub_717430(void*);
extern "C" void __cdecl sub_717090(void*, void*, void*, int);
extern "C" int __cdecl sub_7192C0(void*);
extern "C" void __cdecl sub_716D30(void*, int, int, int, int, int);

int PAVCXTPRibbonGroup::Method(int a, int b, int c, int d)
{
    void* p = sub_717430(*(void**)((char*)m_pUnknown34 + 0x8c));
    int nSize = m_nSize;
    int* pArr;
    if (nSize == 0) {
        sub_6A7C90(p, 0, 0);
        return 0;
    }
    pArr = (int*)sub_62FF32((unsigned int)nSize * 4);
    int i;
    for (i = 0; i < nSize; i++) {
        int* pItem;
        if (i >= 0 && i < m_nSize)
            pItem = (int*)m_pData[i];
        else
            pItem = 0;
        if (sub_7192C0(pItem)) {
            void** vt = *(void***)pItem;
            void (*fn)(void*, int) = (void (*)(void*, int))vt[0x74/4];
            fn(pItem, d);
        }
    }
    for (i = 0; i < nSize; i++) {
        int* pItem;
        if (i >= 0 && i < m_nSize)
            pItem = (int*)m_pData[i];
        else
            pItem = 0;
        int r;
        if (sub_7192C0(pItem)) {
            void** vt = *(void***)pItem;
            int (*fn)(void*, int) = (int (*)(void*, int))vt[0x7c/4];
            r = fn(pItem, d);
        } else {
            r = 0;
        }
        pArr[i] = r;
    }
    int total = c - *(int*)((char*)&d + 8) - *(int*)&d;
    sub_717090(this, pArr, (void*)d, total);
    int v0 = *(int*)&d;
    int v1 = *(int*)((char*)&d + 4);
    int v2 = *(int*)((char*)&d + 8);
    int v3 = *(int*)((char*)&d + 0xc);
    int sum = -7;
    for (i = 0; i < nSize; i++) {
        int* pItem;
        if (i >= 0 && i < m_nSize)
            pItem = (int*)m_pData[i];
        else
            pItem = 0;
        if (sub_7192C0(pItem)) {
            sum += pArr[i] + 7;
        }
    }
    int cap = *(int*)((char*)p + 4);
    if (sum > total) {
        int diff = sum - total;
        if (cap > diff)
            cap = diff;
        if (cap < 0)
            cap = 0;
    } else {
        cap = 0;
    }
    sum -= cap;
    sum -= total;
    int flag1 = sum > 0 ? 1 : 0;
    int flag2 = cap > 0 ? 1 : 0;
    m_nField38 = cap;
    sub_6A7C90(p, flag2, flag1);
    v0 -= cap;
    for (i = 0; i < nSize; i++) {
        int* pItem;
        if (i >= 0 && i < m_nSize)
            pItem = (int*)m_pData[i];
        else
            pItem = 0;
        if (sub_7192C0(pItem)) {
            sub_716D30(pItem, pArr[i], v0, v1, v2, v3);
            v0 = v0 + pArr[i] + 7;
        }
    }
    for (i = 0; i < nSize; i++) {
        int* pItem;
        if (i >= 0 && i < m_nSize)
            pItem = (int*)m_pData[i];
        else
            pItem = 0;
        if (sub_7192C0(pItem)) {
            void** vt = *(void***)pItem;
            void (*fn)(void*) = (void (*)(void*))vt[0x78/4];
            fn(pItem);
        }
    }
    sub_62FF26(pArr);
    return 0;
}
