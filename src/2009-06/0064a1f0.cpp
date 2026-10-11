// from server: 52% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S_func_0064a1f0 {
    void* m_ptr;
};

extern "C" void* (__thiscall *sub_89E9A4)(void*, void*);

void* __cdecl f(void* arg)
{
    S_func_0064a1f0* p = (S_func_0064a1f0*)arg;
    if (p == 0)
        return 0;
    void* obj = p->m_ptr;
    void* ti;
    if (obj != 0) {
        void** vtbl = *(void***)obj;
        void* (*fn)(void*) = (void* (*)(void*))vtbl[1];
        ti = fn(obj);
    } else {
        ti = (void*)0x9dc2d4;
    }
    if (sub_89E9A4((void*)0xa0a698, ti) == 0)
        return 0;
    return (char*)p->m_ptr + 4;
}
