// from server: 100% by tester
// roc 2011-06 0060b720  unit: RBX::ModelInstance  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060b720
//
// 0060b720  8b09                 mov ecx, dword ptr [ecx]
// 0060b722  8b4108               mov eax, dword ptr [ecx + 8]
// 0060b725  50                   push eax
// 0060b726  b9f0b0c200           mov ecx, 0xc2b0f0
// 0060b72b  ff15500aa400         call dword ptr [0xa40a50]
// 0060b731  c3                   ret 

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
