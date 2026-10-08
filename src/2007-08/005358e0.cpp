// from server: 80% by colin
// roc 2007-08 005358e0  unit: std::logic_error  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005358e0
//
// 005358e0  8b09                 mov ecx, dword ptr [ecx]
// 005358e2  8b4108               mov eax, dword ptr [ecx + 8]
// 005358e5  50                   push eax
// 005358e6  b9109a8900           mov ecx, 0x899a10
// 005358eb  ff1508e77700         call dword ptr [0x77e708]
// 005358f1  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
    void* field0;
    void* field4;
    void* field8;
    bool f();
};

extern "C" void* __stdcall get_type_info();

bool S::f() {
    void* p = field0;
    void* q = *(void**)((char*)p + 8);
    return ((const type_info*)&get_type_info)->operator==(*(const type_info*)q);
}
