// from server: 39% by tester
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct bad_cast {
    bad_cast(const char*);
};

struct placeholder {
    virtual const type_info& type() const;
};

struct holder_base {
    virtual const type_info& type() const;
};

struct shared_ptr_holder {
    placeholder* px;
};

struct DescribedBase;

struct shared_ptr {
    DescribedBase* px;
};

struct any_holder {
    virtual const type_info& type() const;
    virtual ~any_holder();
};

extern "C" {
    bool __stdcall type_info_compare(const type_info&, const type_info&);
    void* __stdcall get_placeholder_type();
    void __stdcall bad_cast_ctor(void*, const char*);
    void __stdcall throw_bad_cast(void*);
}

extern const type_info type_info_shared_ptr_DescribedBase;
extern const type_info type_info_placeholder;
extern const char bad_cast_msg[];

struct VHolder {
    shared_ptr* ptr;
    const type_info& type() const;

    void cast();
};

const type_info& VHolder::type() const {
    if (ptr) {
        if (ptr->px) {
            return ((any_holder*)ptr->px)->type();
        }
        return type_info_placeholder;
    }
    return type_info_shared_ptr_DescribedBase;
}

void VHolder::cast() {
    if (ptr) {
        if (ptr->px) {
            const type_info& t = ((any_holder*)ptr->px)->type();
            if (t == type_info_placeholder) {
                goto do_cast;
            }
        } else {
            if (type_info_placeholder == type_info_placeholder) {
                goto do_cast;
            }
        }
    }
    {
        bad_cast bc(bad_cast_msg);
        throw_bad_cast(&bc);
    }
do_cast:
    return;
}
