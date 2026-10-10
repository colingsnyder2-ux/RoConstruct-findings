// from server: 46% by colin
extern "C" {
    void* __stdcall __CxxFrameHandler3(void*, void*, void*, void*);
}

struct type_info {
    virtual bool operator==(const type_info&) const;
    virtual const char* name() const;
};

struct bad_cast {
    bad_cast(const char*);
};

struct string {
    string(const string&);
    string();
};

struct any {
    void* content;
};

struct bad_any_cast : bad_cast {
    bad_any_cast(const char*);
};

extern "C" {
    bool __stdcall type_info_equal(const type_info*, const type_info*);
    void __stdcall string_copy(string*, const string*);
    void __stdcall bad_cast_ctor(bad_cast*, const char*);
    void __stdcall bad_any_cast_ctor(bad_any_cast*, const char*);
}

extern type_info type_info_basic_string;
extern type_info type_info_type_info;
extern char bad_cast_msg[];
extern char bad_any_cast_msg[];

void __stdcall throw_bad_any_cast(const any* a) {
    if (a != 0) {
        const type_info* ti = 0;
        if (a->content != 0) {
            ti = *(const type_info**)a->content;
        } else {
            ti = &type_info_type_info;
        }
        if (type_info_equal(ti, &type_info_basic_string)) {
            if (a->content != 0) {
                goto do_throw;
            }
        }
    }
    {
        string s;
        string_copy(&s, (const string*)bad_cast_msg);
        bad_cast_ctor((bad_cast*)&s, bad_any_cast_msg);
        throw_bad_any_cast((const any*)&s);
    }
do_throw:
    {
        bad_any_cast* e = (bad_any_cast*)a->content;
        bad_any_cast_ctor(e, bad_any_cast_msg);
        throw e;
    }
}
