// from server: 70% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
};

void* __cdecl f(void* arg) {
    char* p = (char*)arg;
    if (p == 0)
        return 0;
    void* obj = *(void**)p;
    type_info* ti;
    if (obj != 0) {
        ti = (type_info*)(*(void***)obj)[1];
        ti = (type_info*)((void*(__thiscall*)(void*))ti)(obj);
    } else {
        ti = (type_info*)0x00b0030c;
    }
    if (!ti->operator==(*(type_info*)0x00b1d850))
        return 0;
    return (char*)(*(void**)p) + 4;
}
