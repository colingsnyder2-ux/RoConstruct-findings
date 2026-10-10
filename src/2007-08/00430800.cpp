// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall ChangeDisplaySettingsExA(const char*, void*, int, unsigned int, void*);
extern "C" int __stdcall GetMonitorInfoA(void*, void*);

struct CRefCounted {
    void AddRef();
    void Release();
};

struct CWrapperView {
    char pad[0xe1];
    char m_flag;
    char pad2[2];
    CRefCounted* m_ptr;
    void RestoreResolution();
};

void CWrapperView::RestoreResolution()
{
    char old = m_flag;
    m_flag = 1;

    if (m_ptr == 0) {
        // log "CMainFrame::RestoreResolution hm is NULL"
        return;
    }

    char mi[0x48];
    *(int*)mi = 0x48;
    if (GetMonitorInfoA(m_ptr, mi) == 0) {
        // nothing
    } else {
        // call something
        // ...
    }

    ChangeDisplaySettingsExA(0, 0, 0, 0xc40000, 0);

    m_flag = old;
}
