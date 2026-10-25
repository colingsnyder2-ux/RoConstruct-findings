// from server: 100% by tester
// roc 2008-06 005aa0f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aa0f0
//
// 005aa0f0  8b09                 mov ecx, dword ptr [ecx]
// 005aa0f2  8b4108               mov eax, dword ptr [ecx + 8]
// 005aa0f5  50                   push eax
// 005aa0f6  b950899300           mov ecx, 0x938950
// 005aa0fb  ff1578288000         call dword ptr [0x802878]
// 005aa101  c3                   ret 

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
