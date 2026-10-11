// from server: 62% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
};

void* __cdecl f(void* p) {
    if (p == 0)
        return 0;
    void* obj = *(void**)p;
    type_info* ti;
    if (obj != 0) {
        ti = (type_info*)(*(void***)obj)[1];
        ti = (type_info*)(*(void***)obj)[1];
    } else {
        ti = (type_info*)0xb0030c;
    }
    if (!ti->operator==(*(type_info*)0xb19b20))
        return 0;
    return (char*)*(void**)p + 4;
}
