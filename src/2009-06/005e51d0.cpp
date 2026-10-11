// from server: 66% by atomic.potato
// roc 2009-06 005e51d0  size: 57 bytes

struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
    void* __fastcall f(void* arg);
};

void* __fastcall S::f(void* arg) {
    if (arg == 0)
        return 0;
    void** p = (void**)arg;
    void* obj = *p;
    type_info* ti;
    if (obj != 0) {
        void** vtbl = *(void***)obj;
        typedef type_info* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[1];
        ti = fn(obj);
    } else {
        ti = (type_info*)0x9dc2d4;
    }
    type_info* target = (type_info*)0x9df34c;
    bool (*eq)(const type_info*, const type_info*) = (bool (*)(const type_info*, const type_info*))0x89e9a4;
    if (!eq(ti, target))
        return 0;
    return (char*)*p + 4;
}
