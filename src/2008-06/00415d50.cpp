// from server: 100% by tester
// roc 2008-06 00415d50  unit: CopyVerb  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415d50
//
// 00415d50  8b09                 mov ecx, dword ptr [ecx]
// 00415d52  8b4108               mov eax, dword ptr [ecx + 8]
// 00415d55  50                   push eax
// 00415d56  b960bf9200           mov ecx, 0x92bf60
// 00415d5b  ff1578288000         call dword ptr [0x802878]
// 00415d61  c3                   ret 

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
