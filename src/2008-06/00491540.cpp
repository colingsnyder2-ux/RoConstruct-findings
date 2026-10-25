// from server: 100% by tester
// roc 2008-06 00491540  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491540
//
// 00491540  8b09                 mov ecx, dword ptr [ecx]
// 00491542  8b4108               mov eax, dword ptr [ecx + 8]
// 00491545  50                   push eax
// 00491546  b910709300           mov ecx, 0x937010
// 0049154b  ff1578288000         call dword ptr [0x802878]
// 00491551  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct holder {
    void* vtable;
    void* pad;
    type_info* info;
};

extern type_info type_info_8827f8;

bool (type_info::*type_info_eq)(const type_info&) const;

struct bad_any_cast {
    holder* h;
    bool matches() const;
};

bool bad_any_cast::matches() const {
    holder* p = h;
    return (type_info_8827f8.*type_info_eq)(*p->info);
}
