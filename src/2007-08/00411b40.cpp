// from server: 43% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

struct bad_cast {
    bad_cast(const char*);
};

struct holder {
    void* vtable;
    void* pad;
    type_info* info;
};

extern type_info type_info_8827f8;
extern type_info type_info_8827ec;

bool (type_info::*type_info_eq)(const type_info&) const;

struct bad_any_cast {
    holder* h;
    float value() const;
};

float bad_any_cast::value() const {
    holder* p = h;
    if (p != 0) {
        type_info* ti = p->info;
        type_info* other;
        if (ti != 0) {
            other = ti;
        } else {
            other = &type_info_8827f8;
        }
        if (!(other->*type_info_eq)(type_info_8827ec)) {
            bad_cast bc("bad cast");
            throw bc;
        }
        return *(float*)((char*)p->info + 4);
    }
    bad_cast bc("bad cast");
    throw bc;
}
