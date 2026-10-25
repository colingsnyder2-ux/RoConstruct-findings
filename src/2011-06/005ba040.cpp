// from server: 100% by tester
// roc 2011-06 005ba040  unit: RBX::Reflection::Descriptor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ba040
//
// 005ba040  8b09                 mov ecx, dword ptr [ecx]
// 005ba042  8b4108               mov eax, dword ptr [ecx + 8]
// 005ba045  50                   push eax
// 005ba046  b91cb0c100           mov ecx, 0xc1b01c
// 005ba04b  ff15500aa400         call dword ptr [0xa40a50]
// 005ba051  c3                   ret 

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
