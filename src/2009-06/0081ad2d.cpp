// from server: 34% by atomic.potato
struct CXTIconHandle {
    void* m_vtable;
    void* m_ptr;
    void* Realloc(void* p, unsigned int size);
};

extern "C" void* __stdcall HeapReAlloc(void*, unsigned int, void*, unsigned int);

void* CXTIconHandle::Realloc(void* p, unsigned int size)
{
    if (p == 0) {
        return ((void* (__thiscall*)(void*, unsigned int))m_vtable)(this, size);
    }
    if (size == 0) {
        ((void (__thiscall*)(void*, void*))((char*)m_vtable + 4))(this, p);
        return 0;
    }
    return HeapReAlloc(m_ptr, 0, p, size);
}
