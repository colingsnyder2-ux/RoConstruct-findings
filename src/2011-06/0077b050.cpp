// from server: 100% by tester
// roc 2011-06 0077b050  unit: seg_00770000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077b050
//
// 0077b050  8b09                 mov ecx, dword ptr [ecx]
// 0077b052  8b4108               mov eax, dword ptr [ecx + 8]
// 0077b055  50                   push eax
// 0077b056  b968d5c400           mov ecx, 0xc4d568
// 0077b05b  ff15500aa400         call dword ptr [0xa40a50]
// 0077b061  c3                   ret 

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
