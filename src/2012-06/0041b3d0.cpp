// from server: 92% by tajop
struct type_info {
    __declspec(dllimport) bool operator==(const type_info&) const;
};

extern type_info type_info_0xd63e84;

struct VCRbxObject_CComObjectNoLock {
    void* inner;
    bool is_shared_ptr_tuple();
};

bool VCRbxObject_CComObjectNoLock::is_shared_ptr_tuple() {
    type_info* ti = *(type_info**)((char*)inner + 0x10);
    if (ti == &type_info_0xd63e84) {
        return true;
    }
    return type_info_0xd63e84.operator==(*ti);
}
