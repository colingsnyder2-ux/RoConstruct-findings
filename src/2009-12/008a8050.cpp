// from server: 30% by atomic.potato
struct CXTPDockingPaneBase {
    char pad0[0x70];
    void* m_panes[4];
    char pad80[0x4];
    unsigned int m_dwStyle;
    void* m_pWnd70;
    void* m_pWnd74;
    void* m_pWnd78;
    void* m_pWnd7c;
    void UpdatePanes(int* p1, int* p2);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __stdcall InvalidateRect(void*, const void*, int);

void* __fastcall sub_7f3860(unsigned int);
void __fastcall sub_7f3c32(void*, int, int, int, int, int);
void __fastcall sub_8b3960(void*);
void __fastcall sub_8b3ce0(void*, unsigned int, int);

void CXTPDockingPaneBase::UpdatePanes(int* p1, int* p2)
{
    if (p1[0] == 0 && p1[2] == 0 && p1[1] == 0 && p1[3] == 0)
    {
        void** p = m_panes;
        int n = 4;
        do
        {
            void* q = *p;
            if (q)
            {
                void** vt = *(void***)q;
                void (__fastcall *fn)(void*, int) = (void (__fastcall *)(void*, int))vt[1];
                fn(q, 1);
                *p = 0;
            }
            p++;
            n--;
        } while (n);
        return;
    }

    void** slot = m_panes;
    int i = 0;
    do
    {
        if (*slot == 0)
        {
            void* mem = sub_7f3860(0x6c);
            void* obj = 0;
            if (mem)
            {
                sub_8b3960(mem);
                obj = mem;
            }
            *slot = obj;
            int flag = (i == 2 || i == 3) ? 1 : 0;
            sub_8b3ce0(obj, m_dwStyle, flag);
        }
        i++;
        slot++;
    } while (i < 4);

    int x1 = p1[0] + p2[0];
    int y1 = p1[1] + p2[1];
    int x2 = p1[2] - p2[2];
    int y2 = p1[3] - p2[3];

    int w = x2 - x1;
    int h = y2 - y1;

    sub_7f3c32(m_panes[0], p1[0], p1[1], w, h, 1);
    sub_7f3c32(m_panes[1], x1, p1[1], x2 - x1, h, 1);
    sub_7f3c32(m_panes[2], x1, y1, x2 - x1, y2 - y1, 1);
    sub_7f3c32(m_panes[3], x1, y1, x2 - x1, y2 - y1, 1);

    void** s = m_panes;
    int n = 4;
    do
    {
        void* q = *s;
        void** vt = *(void***)q;
        InvalidateRect((void*)vt[8], 0, 0);
        s++;
        n--;
    } while (n);

    p1[0] = x1;
    p1[1] = y1;
    p1[2] = x2;
    p1[3] = y2;
}
