// from server: 26% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct sp_counted_base {
    virtual void dispose();
};

struct sp_counted_impl_p {
    sp_counted_base* px;
    void* __cdecl get_deleter(const type_info& ti);
};

void* __stdcall sub_9df2dc();

void* sp_counted_impl_p::get_deleter(const type_info& ti) {
    if (this == 0)
        return 0;
    sp_counted_base* p = this->px;
    void* r;
    if (p != 0) {
        r = (void*)p;
    } else {
        r = (void*)0x9dc2d4;
    }
    if (*(bool*)0x89e9a4) {
        return (char*)this->px + 4;
    }
    return 0;
}
