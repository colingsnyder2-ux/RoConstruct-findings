// from server: 80% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" bool __stdcall __type_info_compare(type_info*, type_info*);

struct S {
};

void* __cdecl f(void* arg) {
    char* p = (char*)arg;
    if (p == 0) return 0;
    void* obj = *(void**)p;
    type_info* ti;
    if (obj != 0) {
        ti = (type_info*)(*(void***)obj)[1];
    } else {
        ti = (type_info*)0xc07a44;
    }
    if (__type_info_compare(ti, (type_info*)0xc38450)) {
        return (char*)(*(void**)p) + 4;
    }
    return 0;
}
