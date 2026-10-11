// from server: 63% by atomic.potato
struct CXTPControlTabWorkspace {
    void f();
};

struct ReportObject {
    void clear(int, int);
};

void CXTPControlTabWorkspace::f() {
    void* p = *(void**)((char*)this + 0x208);
    if (p != 0 && *(void**)((char*)p + 0x7c) == (char*)this + 0x178) {
        *(void**)((char*)p + 0x7c) = 0;
        ((ReportObject*)((char*)p + 0x68))->clear(0, -1);
    }
}
