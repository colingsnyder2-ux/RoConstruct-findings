// from server: 68% by why2
struct type_info {
    bool operator==(const type_info&) const;
};

struct Descriptor {
    void* field_0;
    void* field_4;
    void* field_8;
    bool equals(const type_info& other) const;
};

extern type_info g_typeinfo;

bool Descriptor::equals(const type_info& other) const {
    return g_typeinfo == *(const type_info*)field_8;
}
