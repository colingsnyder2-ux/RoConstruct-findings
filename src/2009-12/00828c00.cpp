// from server: 92% by atomic.potato
struct CXTPReportHeader {
    int sub_828c00(int, int);
};

int CXTPReportHeader::sub_828c00(int a, int b) {
    int idx = ((int (__thiscall *)(CXTPReportHeader *, int, int))*(void **)(*(int *)this + 0x8c))(this, a, b);
    if (idx >= 0) {
        int p = *(int *)((char *)this + 0x20);
        if (p != 0) {
            if (idx < *(int *)(p + 0x30)) {
                int arr = *(int *)(p + 0x2c);
                return *(int *)(arr + idx * 4);
            }
        }
    }
    return 0;
}
