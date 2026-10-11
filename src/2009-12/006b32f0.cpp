// from server: 75% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
};

void* __cdecl f(void* p) {
    if (p == 0) return 0;
    void* v = *(void**)p;
    type_info* ti;
    if (v != 0) {
        ti = (type_info*)(*(void***)v)[1];
    } else {
        ti = (type_info*)0xb0030c;
    }
    type_info* target = (type_info*)0xb2cb0c;
    if (ti->operator==(*target)) {
        return (char*)(*(void**)p) + 4;
    }
    return 0;
}
