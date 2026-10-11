// from server: 81% by atomic.potato
// roc 2009-06 005e5050  size: 57 bytes
// Reconstructed from the target machine code.

struct type_info {
    bool operator==(const type_info& other) const;
};

struct sp_counted_base {
    virtual void dispose();
};

struct sp_counted_impl_p {
    sp_counted_base* px;
};

// The two type_info objects referenced by the code.
extern type_info type_info_Vector3;
extern type_info type_info_placeholder;

// The runtime function used to compare type_info objects.
extern "C" bool __stdcall type_info_equal(const type_info*, const type_info*);

struct UPoolData {
    sp_counted_impl_p* ptr;
    void* get();
};

void* UPoolData::get() {
    sp_counted_impl_p* p = this->ptr;
    if (p == 0)
        return 0;

    sp_counted_base* base = p->px;
    void* result;
    if (base != 0) {
        result = base;
        base->dispose();
    } else {
        result = &type_info_Vector3;
    }

    if (type_info_equal((const type_info*)result, &type_info_placeholder)) {
        return (char*)p->px + 4;
    }
    return 0;
}
