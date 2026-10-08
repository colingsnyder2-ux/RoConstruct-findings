// from server: 81% by colin
// roc 2007-08 005358c0  unit: std::logic_error  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005358c0
//
// 005358c0  8b09                 mov ecx, dword ptr [ecx]
// 005358c2  8b4108               mov eax, dword ptr [ecx + 8]
// 005358c5  50                   push eax
// 005358c6  b9f4998900           mov ecx, 0x8999f4
// 005358cb  ff1508e77700         call dword ptr [0x77e708]
// 005358d1  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" type_info* __stdcall get_type_info();

struct S {
    type_info* f();
};

type_info* S::f() {
    type_info* p = *(type_info**)this;
    type_info* q = *(type_info**)((char*)p + 8);
    return (type_info*)(((const type_info*)0x8999f4)->operator==(*q) ? 0 : 0);
}
