// from server: 55% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" {
    typedef bool (__stdcall *type_info_equal_fn)(const type_info*, const type_info*);
    extern type_info_equal_fn __imp_0x89e9a4;
}

struct sp_counted_base {
    virtual void dispose();
    virtual void destroy();
};

struct sp_counted_impl_p {
    sp_counted_base* px;
    void* __cdecl get_deleter(const type_info& ti);
};

void* sp_counted_impl_p::get_deleter(const type_info& ti) {
    sp_counted_base* p = this->px;
    if (p == 0) {
        return 0;
    }
    type_info* actual;
    if (p != 0) {
        actual = *(type_info**)p;
    } else {
        actual = (type_info*)0x9dc2d4;
    }
    if (__imp_0x89e9a4(actual, &ti)) {
        return (char*)this->px + 4;
    }
    return 0;
}
