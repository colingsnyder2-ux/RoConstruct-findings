// from server: 80% by colin
// roc 2007-08 00535920  unit: std::logic_error  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535920
//
// 00535920  8b09                 mov ecx, dword ptr [ecx]
// 00535922  8b4108               mov eax, dword ptr [ecx + 8]
// 00535925  50                   push eax
// 00535926  b978278900           mov ecx, 0x892778
// 0053592b  ff1508e77700         call dword ptr [0x77e708]
// 00535931  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
    type_info* m_p;
    bool f();
};

bool S::f()
{
    type_info* t = *(type_info**)((char*)m_p + 8);
    type_info* g = (type_info*)0x892778;
    return g->operator==(*t);
}
