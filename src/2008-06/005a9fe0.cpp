// from server: 100% by tester
// roc 2008-06 005a9fe0  unit: RBX::VScriptContext::?$FactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9fe0
//
// 005a9fe0  8b09                 mov ecx, dword ptr [ecx]
// 005a9fe2  8b4108               mov eax, dword ptr [ecx + 8]
// 005a9fe5  50                   push eax
// 005a9fe6  b9d0c29200           mov ecx, 0x92c2d0
// 005a9feb  ff1578288000         call dword ptr [0x802878]
// 005a9ff1  c3                   ret 

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
