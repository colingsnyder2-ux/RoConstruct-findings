// from server: 79% by colin
struct CXTPPropertyGridView
{
    char pad[0x20];
    void* m_hWnd;
    char pad2[0xc4];
    void* m_pSomething;
    char pad3[0x4c];
    void* m_pSomething2;
    char pad4[0x4];
    void* m_pSomething3;

    void OnMessage(unsigned int msg, unsigned int wParam, unsigned int lParam, unsigned int extra);
};

extern "C" int __stdcall IsWindowVisible(void* hWnd);
extern "C" int __stdcall InvalidateRect(void* hWnd, const void* lpRect, int bErase);

extern int g_flag;

extern void sub_69c8d0(void* self, unsigned int arg);
extern void sub_62fddc(void* self, unsigned int a, unsigned int b, unsigned int c, unsigned int d);

void CXTPPropertyGridView::OnMessage(unsigned int msg, unsigned int wParam, unsigned int lParam, unsigned int extra)
{
    char* p = (char*)this + 0xe8;
    if (p != 0 && *(void**)(p + 0x20) != 0)
    {
        if (IsWindowVisible(m_pSomething) != 0)
        {
            if (g_flag == 0)
            {
                g_flag = 1;
                sub_69c8d0(this, msg);
                g_flag = 0;
            }
        }
    }

    if (msg == 0x2a3)
    {
        if (m_pSomething3 != 0)
        {
            void* h = m_hWnd;
            m_pSomething3 = 0;
            InvalidateRect(h, 0, 0);
        }
    }

    sub_62fddc(this, msg, wParam, lParam, extra);
}
