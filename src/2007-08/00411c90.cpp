// from server: 35% by colin
// roc 2007-08 00411c90  unit: boost::bad_any_cast  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411c90

extern "C" {
    int __stdcall sub_411850(void*);
    void* __stdcall sub_77e69c();
    int __stdcall sub_77e708();
    int __stdcall sub_77e710();
}

struct type_info;
struct bad_cast {
    bad_cast(const char*);
};

struct ContentId {
    void* vtable;
    char pad[0x1c];
};

struct basic_string {
    void* pad[4];
};

struct S {
    ContentId* f(ContentId* src);
};

ContentId* S::f(ContentId* src) {
    ContentId* result;
    if (src != 0) {
        void* p = *(void**)src;
        if (p != 0) {
            void* vt = *(void**)p;
            typedef void* (__stdcall *Fn)(void*);
            Fn fn = *(Fn*)((char*)vt + 4);
            p = fn(p);
        } else {
            p = (void*)0x8827c8;
        }
        if (sub_77e708() != 0) {
            src = (ContentId*)((char*)*(void**)src + 4);
            if (src != 0) {
                goto do_copy;
            }
        }
    }
    {
        bad_cast bc("bad cast");
        sub_411850(&bc);
    }
do_copy:
    result = (ContentId*)sub_77e69c();
    *(void**)((char*)result + 0x1c) = *(void**)((char*)src + 0x1c);
    return result;
}
