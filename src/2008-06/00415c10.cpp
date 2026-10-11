// from server: 75% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

struct holder {
    void* vtable;
    void* pad;
    type_info* info;
};

extern type_info type_info_929614;
extern type_info type_info_92bedc;

bool (type_info::*type_info_eq)(const type_info&) const;

struct CopyVerb {
};

void* __cdecl matches(holder* p) {
    if (!p) return 0;
    type_info* t;
    if (p->vtable) {
        t = (type_info*)(*(void***)p)[1];
    } else {
        t = &type_info_929614;
    }
    if ((t->*type_info_eq)(type_info_92bedc)) {
        return (char*)p + 4;
    }
    return 0;
}
