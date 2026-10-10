// from server: 88% by colin
struct CRobloxReportView {
    void* getSomething();
};

void* CRobloxReportView::getSomething()
{
    void* p = *(void**)this;
    void* (__thiscall *fn)(void*) = *(void* (__thiscall **)(void*))((char*)p + 0x18c);
    void* r = fn(this);
    return *(void**)((char*)r + 0xb0);
}
