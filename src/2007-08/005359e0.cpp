// from server: 74% by colin
// roc 2007-08 005359e0  unit: std::logic_error  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005359e0
//
// 005359e0  8b09                 mov ecx, dword ptr [ecx]
// 005359e2  8b4108               mov eax, dword ptr [ecx + 8]
// 005359e5  50                   push eax
// 005359e6  b920f48800           mov ecx, 0x88f420
// 005359eb  ff1508e77700         call dword ptr [0x77e708]
// 005359f1  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
    type_info* m_p;
    bool f();
};

bool S::f()
{
    return *(type_info*)0x88f420 == *(type_info*)((char*)m_p + 8);
}
