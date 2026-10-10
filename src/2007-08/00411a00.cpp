// from server: 22% by colin
extern "C" {
    void* __stdcall __CxxFrameHandler3(void*, void*, void*, void*);
}

struct type_info {
    virtual ~type_info();
    virtual bool operator==(const type_info&) const;
};

struct bad_cast {
    bad_cast(const char*);
};

struct bad_any_cast : bad_cast {
    bad_any_cast(const char*);
};

struct any {
    void* content;
};

extern "C" {
    void* __stdcall __CxxThrowException(void*, void*);
}

void __stdcall sub_411850(void*);

struct S {
    void f(any* a);
};

void S::f(any* a) {
    if (a != 0) {
        type_info* ti = 0;
        if (a->content != 0) {
            ti = *(type_info**)a->content;
        } else {
            ti = (type_info*)0x8827c8;
        }
        if (ti->operator==(*(type_info*)0x8827d4)) {
            if ((char*)a->content + 4 != 0) {
                return;
            }
        }
    }
    bad_any_cast e("bad cast");
    sub_411850(&e);
}
