// from server: 64% by atomic.potato
struct XTP_REPORTRECORDITEM_DRAWARGS {
    void f(void* p);
};

void XTP_REPORTRECORDITEM_DRAWARGS::f(void* p) {
    void* a = (*(void* (__thiscall **)(void*))(*(void***)this + 0x194 / 4))(this);
    void* b = (*(void* (__thiscall **)(void*))(*(void***)a + 0x17c / 4))(a);
    (*(void (__thiscall **)(void*, void*))(*(void***)p))(p, b);
}
