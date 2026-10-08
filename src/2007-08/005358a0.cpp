// from server: 80% by colin
// roc 2007-08 005358a0  unit: std::logic_error  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005358a0
//
// 005358a0  8b09                 mov ecx, dword ptr [ecx]
// 005358a2  8b4108               mov eax, dword ptr [ecx + 8]
// 005358a5  50                   push eax
// 005358a6  b9d0998900           mov ecx, 0x8999d0
// 005358ab  ff1508e77700         call dword ptr [0x77e708]
// 005358b1  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
    void* field0;
    void* field4;
    void* field8;
    bool f();
};

bool S::f()
{
    void* p = *(void**)this;
    void* q = *(void**)((char*)p + 8);
    return (*(type_info*)0x8999d0).operator==(*(type_info*)q);
}
