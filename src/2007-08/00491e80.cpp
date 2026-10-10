// from server: 67% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    void* pad[4];
    String(const String&);
    ~String();
};

struct Listener {
    void* m_listener;
    void* m_query;
    String m_string;
    Listener(void*, void*, const String&);
};

Listener::Listener(void* a, void* b, const String& s)
    : m_string(s) {
    m_listener = a;
    m_query = b;
    if (b) {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }
    if (b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            void** vtbl = *(void***)b;
            ((void (__thiscall*)(void*))vtbl[1])(b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                void** vtbl2 = *(void***)b;
                ((void (__thiscall*)(void*))vtbl2[2])(b);
            }
        }
    }
}
