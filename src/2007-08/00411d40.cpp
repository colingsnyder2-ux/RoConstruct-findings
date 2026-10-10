// from server: 28% by colin
struct type_info;

extern "C" {
    void __stdcall sub_411850(void*);
    void* __stdcall sub_77e708(void*, const void*);
    void* __stdcall sub_77e710(void*, const char*);
}

struct bad_cast {
    bad_cast(const char*);
};

struct bad_any_cast {
    void* vfptr;
    bad_any_cast(const char*);
};

bad_any_cast::bad_any_cast(const char* msg) {
    void* p = this->vfptr;
    if (p != 0) {
        void* vtbl = *(void**)p;
        void (*dtor)(void*) = *(void (**)(void*))((char*)vtbl + 4);
        dtor(p);
    } else {
        p = (void*)0x8827c8;
    }
    if (sub_77e708(p, (const void*)0x882860)) {
        void* q = this->vfptr;
        if ((char*)q + 4 != 0) {
            return;
        }
    }
    sub_77e710((void*)0x786e04, (const char*)0x786dfc);
    sub_411850((void*)0x786dfc);
}
