// from server: 36% by colin




struct type_info {
    bool operator==(const type_info&) const;
};

struct Descriptor {
    void* vtable;
    void* name;
};

struct EnumDescriptor {
    bool is(const type_info& ti) const;
};

bool EnumDescriptor::is(const type_info& ti) const {
    const Descriptor* d = *(const Descriptor**)this;
    if (!d) return false;
    const type_info* t;
    if (d->name) {
        t = (const type_info*)(*(void***)d->name)[1];
    } else {
        t = (const type_info*)0x929614;
    }
    if (!(*t == ti)) return false;
    return true;
}
