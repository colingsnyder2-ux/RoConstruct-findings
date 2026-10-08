// from server: 74% by colin
// roc 2007-08 00535900  unit: std::logic_error  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535900
//
// 00535900  8b09                 mov ecx, dword ptr [ecx]
// 00535902  8b4108               mov eax, dword ptr [ecx + 8]
// 00535905  50                   push eax
// 00535906  b938448800           mov ecx, 0x884438
// 0053590b  ff1508e77700         call dword ptr [0x77e708]
// 00535911  c3                   ret 

struct type_info;

extern "C" {
    bool __stdcall type_info_equal(const type_info* self, const type_info* other);
}

struct S {
    int* field0;
    bool compare();
};

bool S::compare() {
    int* p = field0;
    const type_info* a = *(const type_info**)((char*)p + 8);
    return type_info_equal((const type_info*)0x884438, a);
}
