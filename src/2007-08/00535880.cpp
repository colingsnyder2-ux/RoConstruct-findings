// from server: 74% by colin
// roc 2007-08 00535880  unit: std::logic_error  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535880
//
// 00535880  8b09                 mov ecx, dword ptr [ecx]
// 00535882  8b4108               mov eax, dword ptr [ecx + 8]
// 00535885  50                   push eax
// 00535886  b9b4998900           mov ecx, 0x8999b4
// 0053588b  ff1508e77700         call dword ptr [0x77e708]
// 00535891  c3                   ret 

struct type_info {
    bool operator==(const type_info& rhs) const;
};

struct S {
    bool f();
};

extern type_info g_typeInfo;

bool S::f() {
    return g_typeInfo == *(type_info*)(*(int*)this + 8);
}
