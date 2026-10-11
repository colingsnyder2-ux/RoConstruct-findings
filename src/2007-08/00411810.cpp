// from server: 100% by colin
// roc 2007-08 00411810  unit: boost::bad_any_cast  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411810
//
// 00411810  8b09                 mov ecx, dword ptr [ecx]
// 00411812  8b4108               mov eax, dword ptr [ecx + 8]
// 00411815  50                   push eax
// 00411816  b944288800           mov ecx, 0x882844
// 0041181b  ff1508e77700         call dword ptr [0x77e708]
// 00411821  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct holder {
    void* vtable;
    void* pad;
    type_info* info;
};

extern type_info type_info_882844;

bool (type_info::*type_info_eq)(const type_info&) const;

struct bad_any_cast {
    bool matches() const;
};

bool bad_any_cast::matches() const {
    const holder* h = *reinterpret_cast<const holder* const*>(this);
    return (type_info_882844.*type_info_eq)(*h->info);
}
