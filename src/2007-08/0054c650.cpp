// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct UString_sink_stream_buffer {
    void* m_vtbl;
    int m_refcount1;
    int m_refcount2;
    void* m_owner;
    void* m_stream;
    void dtor();
};

void UString_sink_stream_buffer::dtor()
{
    void* s = m_stream;
    if (s) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)s + 4), -1) == 1) {
            void** vt = *(void***)s;
            ((void (__thiscall*)(void*))vt[1])(s);
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)s + 8), -1) == 1) {
            void** vt = *(void***)s;
            ((void (__thiscall*)(void*))vt[2])(s);
        }
    }
    void* p = this ? (char*)this + 8 : 0;
    int* q = *(int**)p;
    int* r = (int*)((char*)q + 4);
    *(int*)((char*)r + (int)p) = *(int*)0x77e4e8;
    m_vtbl = (void*)0x7a7854;
}
