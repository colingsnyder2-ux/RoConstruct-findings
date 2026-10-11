// from server: 70% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" type_info* __cdecl __RTDynamicCast_placeholder();

struct S {
};

void* __cdecl f(void* p) {
    if (p == 0) return 0;
    void** pp = (void**)p;
    void* obj = *pp;
    type_info* ti;
    if (obj != 0) {
        void** vt = *(void***)obj;
        typedef type_info* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vt[1];
        ti = fn(obj);
    } else {
        ti = (type_info*)0xb7930c;
    }
    type_info* other = (type_info*)0xba1c98;
    bool eq = ti->operator==(*other);
    if (!eq) return 0;
    return (char*)*pp + 4;
}
