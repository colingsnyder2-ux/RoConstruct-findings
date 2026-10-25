// from server: 100% by tester
// roc 2011-06 0040b6b0  unit: boost::any::_N::?$holder  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b6b0
//
// 0040b6b0  8b09                 mov ecx, dword ptr [ecx]
// 0040b6b2  8b4108               mov eax, dword ptr [ecx + 8]
// 0040b6b5  50                   push eax
// 0040b6b6  b9607bc000           mov ecx, 0xc07b60
// 0040b6bb  ff15500aa400         call dword ptr [0xa40a50]
// 0040b6c1  c3                   ret 

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
