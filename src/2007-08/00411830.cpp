// from server: 85% by colin
// roc 2007-08 00411830  unit: boost::bad_any_cast  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411830
//
// 00411830  8b09                 mov ecx, dword ptr [ecx]
// 00411832  8b4108               mov eax, dword ptr [ecx + 8]
// 00411835  50                   push eax
// 00411836  b960288800           mov ecx, 0x882860
// 0041183b  ff1508e77700         call dword ptr [0x77e708]
// 00411841  c3                   ret 

struct type_info;

extern "C" {
    bool __stdcall type_info_equals(const type_info* self, const type_info* other);
}

struct bad_any_cast {
    bool matches() const;
};

struct holder {
    void* vtable;
    void* pad;
    type_info* info;
};

bool bad_any_cast::matches() const {
    const holder* h = *reinterpret_cast<const holder* const*>(this);
    return type_info_equals((const type_info*)0x882860, h->info);
}
