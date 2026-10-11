// from server: 86% by atomic.potato
struct CXTPDockingPaneAutoHideWnd
{
    char pad0[4];
    void** m_arr;
    int m_count;
    void RemoveAt(int index);
};

extern "C" void __stdcall sub_752510(void* self, int a, int b);

void CXTPDockingPaneAutoHideWnd::RemoveAt(int index)
{
    int i = 0;
    while (i < m_count)
    {
        if (i < 0 || i >= m_count)
            break;
        void* p = m_arr[i];
        if (p)
        {
            void** vt = *(void***)p;
            ((void (__thiscall*)(void*, int))vt[2])(p, 1);
        }
        i++;
    }
    sub_752510(this, 0, -1);
}
