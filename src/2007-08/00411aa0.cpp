// from server: 46% by colin
struct type_info;

extern "C" {
    void __stdcall __CxxThrowException(void*, void*);
}

struct bad_cast {
    void* vftable;
    bad_cast(const char*);
};

struct bad_any_cast : bad_cast {
    bad_any_cast(const char*);
};

struct type_info_holder {
    void* vftable;
    virtual ~type_info_holder();
};

extern "C" int __stdcall __type_info_compare(type_info*, type_info*);

struct any_data {
    void* vftable;
};

struct any_holder {
    any_data* data;
};

extern type_info type_info_basic_string;
extern type_info type_info_type_info;

bad_any_cast::bad_any_cast(const char* msg) : bad_cast(msg) {}

void __cdecl throw_bad_any_cast(any_holder* holder) {
    if (holder != 0) {
        any_data* d = holder->data;
        type_info* ti;
        if (d != 0) {
            ti = (type_info*)(*(void***)d)[1];
        } else {
            ti = &type_info_type_info;
        }
        if (__type_info_compare(ti, &type_info_basic_string)) {
            if ((char*)holder->data + 4 != 0) {
                return;
            }
        }
    }
    bad_any_cast exc("bad cast");
    __CxxThrowException(&exc, (void*)0x786dfc);
}
