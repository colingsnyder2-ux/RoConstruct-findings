// from server: 24% by colin
struct type_info {
    virtual ~type_info();
    virtual bool operator==(const type_info&) const;
};

extern "C" {
    void __stdcall __CxxThrowException(void*, void*);
    void* __stdcall __CxxFrameHandler3(void*, void*, void*, void*);
}

struct bad_cast {
    bad_cast(const char*);
};

struct S {
    void* field0;
    void f(void* arg);
};

void S::f(void* arg) {
    S* p = (S*)arg;
    if (p != 0) {
        type_info* ti = (type_info*)p->field0;
        type_info* other;
        if (ti != 0) {
            other = ti;
        } else {
            other = (type_info*)0x8827c8;
        }
        if (other->operator==(*(type_info*)0x89abf0)) {
            void* q = (void*)((char*)p->field0 + 4);
            if (q != 0) {
                return;
            }
        }
    }
    bad_cast bc((const char*)0x786e04);
    __CxxThrowException(&bc, (void*)0x786dfc);
}
