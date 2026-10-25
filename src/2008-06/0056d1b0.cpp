// from server: 100% by tester
// roc 2008-06 0056d1b0  unit: G3D::VColor3::?$holder  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d1b0
//
// 0056d1b0  8b09                 mov ecx, dword ptr [ecx]
// 0056d1b2  8b4108               mov eax, dword ptr [ecx + 8]
// 0056d1b5  50                   push eax
// 0056d1b6  b980599300           mov ecx, 0x935980
// 0056d1bb  ff1578288000         call dword ptr [0x802878]
// 0056d1c1  c3                   ret 

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
