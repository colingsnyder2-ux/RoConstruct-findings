// from server: 91% by why2
struct type_info;

extern "C" {
    typedef bool (__stdcall *type_info_equal_fn)(const type_info*, const type_info*);
}

struct Descriptor {
    void* field0;
    bool equals(const type_info& other);
};

extern type_info_equal_fn g_type_info_equal;
extern type_info g_vector3_type_info;

bool Descriptor::equals(const type_info& other) {
    type_info* self = *(type_info**)this;
    return g_type_info_equal(self, &g_vector3_type_info);
}
