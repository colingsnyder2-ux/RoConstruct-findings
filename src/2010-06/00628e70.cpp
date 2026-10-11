// from server: 88% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct S_func_00628e70 {
    void* m_00;
};

extern "C" void* __cdecl sub_00b7930c();
extern "C" bool __cdecl sub_009ea8d8(void*, void*);

void* __cdecl f(void* arg)
{
    S_func_00628e70* p = (S_func_00628e70*)arg;
    if (p == 0)
        return 0;
    void* obj;
    if (p->m_00 != 0) {
        void** vtbl = *(void***)p->m_00;
        typedef void* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[1];
        obj = fn(p->m_00);
    } else {
        obj = sub_00b7930c();
    }
    if (sub_009ea8d8(obj, (void*)0x00bac5b4)) {
        return (char*)p->m_00 + 4;
    }
    return 0;
}
