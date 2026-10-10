// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CSelectionTreeCtrl_Inner
{
    void Assign(void* p, void* q);
};

struct CSelectionTreeCtrl
{
    void* m_p0;
    void* m_p4;
    CSelectionTreeCtrl* Assign(void* p, void* q);
};

CSelectionTreeCtrl* CSelectionTreeCtrl::Assign(void* p, void* q)
{
    m_p0 = p;
    ((CSelectionTreeCtrl_Inner*)&m_p4)->Assign(p, q);
    if (p != 0)
    {
        void** slot = (void**)((char*)p + 0xa4);
        if (slot != 0)
        {
            *slot = p;
            void* old = m_p4;
            if (old != 0)
            {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* cur = slot[1];
            if (cur != 0)
            {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1)
                {
                    void** vt = *(void***)cur;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(cur);
                }
            }
            slot[1] = old;
        }
    }
    return this;
}
