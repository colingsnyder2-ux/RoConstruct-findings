// from server: 77% by colin
// roc 2007-08 004117f0  unit: boost::bad_any_cast  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004117f0
//
// 004117f0  8b09                 mov ecx, dword ptr [ecx]
// 004117f2  8b4108               mov eax, dword ptr [ecx + 8]
// 004117f5  50                   push eax
// 004117f6  b9f8278800           mov ecx, 0x8827f8
// 004117fb  ff1508e77700         call dword ptr [0x77e708]
// 00411801  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern type_info type_info_basic_string;

struct bad_any_cast {
    type_info* info;
    bool matches() const;
};

bool bad_any_cast::matches() const {
    return *info == type_info_basic_string;
}
