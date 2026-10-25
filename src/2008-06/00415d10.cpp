// from server: 100% by tester
// roc 2008-06 00415d10  unit: CopyVerb  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415d10
//
// 00415d10  8b09                 mov ecx, dword ptr [ecx]
// 00415d12  8b4108               mov eax, dword ptr [ecx + 8]
// 00415d15  50                   push eax
// 00415d16  b9f8be9200           mov ecx, 0x92bef8
// 00415d1b  ff1578288000         call dword ptr [0x802878]
// 00415d21  c3                   ret 

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
