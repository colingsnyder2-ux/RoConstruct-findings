// from server: 71% by atomic.potato
struct CComObjectNoLock {
    char pad[0x18];
    long m_ref;
    long __stdcall Release();
};

long __stdcall CComObjectNoLock::Release() {
    long result = --m_ref;
    if (result == 0 && this != 0) {
        (*(void (__stdcall **)(long))(*(void***)this)[4])(1);
    }
    return result;
}
