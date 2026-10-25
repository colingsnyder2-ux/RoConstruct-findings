// from server: 100% by tester
// roc 2011-06 00417f00  unit: VCRbxObject::?$CComObjectNoLock  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00417f00
//
// 00417f00  8b09                 mov ecx, dword ptr [ecx]
// 00417f02  8b4108               mov eax, dword ptr [ecx + 8]
// 00417f05  50                   push eax
// 00417f06  b9d0abc000           mov ecx, 0xc0abd0
// 00417f0b  ff15500aa400         call dword ptr [0xa40a50]
// 00417f11  c3                   ret 

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
