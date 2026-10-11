// from server: 96% by atomic.potato
struct VCXTPReportRows {
    void* vtbl;
    char pad[0x20];
    int* m_pArray;
    int m_nCount;
    int Find(int* p);
};

int VCXTPReportRows::Find(int* p) {
    int n = m_nCount;
    int i = 0;
    if (n > 0) {
        do {
            if (i < 0 || i >= n) {
                goto fail;
            }
            if (m_pArray[i] == (int)p) {
                void** vt = (void**)vtbl;
                void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vt[0x64/4];
                fn(this, i);
                return i;
            }
            i++;
        } while (i < n);
    }
    return -1;
fail:
    extern void __cdecl helper();
    helper();
}
