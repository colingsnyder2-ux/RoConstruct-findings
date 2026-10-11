// from server: 78% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl __RTtypeid(void*);

struct S {
};

void* __cdecl f(void* p) {
    if (p == 0) return 0;
    void* obj = *(void**)p;
    type_info* ti;
    if (obj != 0) {
        ti = (type_info*)__RTtypeid(obj);
    } else {
        ti = (type_info*)0x9dc2d4;
    }
    if (ti->operator==(*(type_info*)0x9df2f4)) {
        return (char*)*(void**)p + 8;
    }
    return 0;
}
