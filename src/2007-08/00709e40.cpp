// from server: 56% by colin
struct CXTColorHex_PAUHEXCOLOR_CELL_CList {
    char pad0[0x20];
    int m_field20;
    char pad24[0x4c];
    int m_field70;
    int m_field74;
    int m_field78;
    char pad7c[0x4];
    int m_field6c;
    void sub_7091d0(int);
    void sub_708500(int);
    void f(int);
};

extern "C" void* __stdcall GetParent(void*);
extern "C" void* __stdcall sub_6301c0(void*);
extern "C" void __stdcall sub_680000(void*);

void CXTColorHex_PAUHEXCOLOR_CELL_CList::f(int a1)
{
    void* p1 = GetParent((void*)m_field20);
    void* p2 = sub_6301c0(p1);
    void* p3 = GetParent(*(void**)((char*)p2 + 0x20));
    void* p4 = sub_6301c0(p3);
    if (p4 == 0)
        return;
    if (*(int*)((char*)p4 + 0x124) != m_field78)
        return;
    if (m_field78 == 0xffffff) {
        int saved70 = m_field70;
        int saved74 = m_field74;
        char buf[0x10];
        sub_680000(buf);
        int diff = *(int*)(buf + 8) - *(int*)(buf + 0);
        int val = (diff - 0xe) / 2;
        m_field70 = val;
        m_field74 = 0x4d;
        sub_7091d0(a1);
        int diff2 = *(int*)(buf + 8) - *(int*)(buf + 0);
        int val2 = (diff2 - 0xb6) / 2;
        m_field70 = val2;
        m_field74 = 0xae;
        sub_708500(a1);
        m_field74 = saved74;
        m_field70 = saved70;
        return;
    }
    if (m_field78 == 0) {
        sub_708500(a1);
        return;
    }
    bool b = ((bool (__thiscall*)(int))*(void**)(*(int*)this + 0x148))(m_field78);
    if (!b)
        return;
    if (m_field6c != 0) {
        sub_7091d0(a1);
        return;
    }
    sub_708500(a1);
}
