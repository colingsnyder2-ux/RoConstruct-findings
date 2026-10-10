// from server: 67% by atomic.potato
extern "C" long __stdcall InterlockedExchange(long *, long);
extern "C" unsigned long __stdcall WaitForSingleObject(void *, unsigned long);
extern "C" int __stdcall CloseHandle(void *);

struct S_func_004a2410 {
    char pad0[20];
    void *m_handle;
    void f();
};

void S_func_004a2410::f()
{
    void *h = m_handle;
    WaitForSingleObject(h, 0);
    if (h != 0) {
        CloseHandle(h);
        InterlockedExchange((long *)&m_handle, -1);
    }
}
