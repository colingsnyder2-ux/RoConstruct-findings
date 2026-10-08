// from server: 100% by colin
// roc 2007-08 0040a9b0  unit: CBrowserView  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a9b0
//
// 0040a9b0  53                   push ebx
// 0040a9b1  8bc1                 mov eax, ecx
// 0040a9b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040a9b7  8b11                 mov edx, dword ptr [ecx]
// 0040a9b9  33db                 xor ebx, ebx
// 0040a9bb  399804010000         cmp dword ptr [eax + 0x104], ebx
// 0040a9c1  8b02                 mov eax, dword ptr [edx]
// 0040a9c3  0f95c3               setne bl
// 0040a9c6  53                   push ebx
// 0040a9c7  ffd0                 call eax
// 0040a9c9  5b                   pop ebx
// 0040a9ca  c20400               ret 4

struct CBrowserView {
    char pad[0x104];
    int field_0x104;
    void method(int* arg);
};

void CBrowserView::method(int* arg) {
    int* p = arg;
    int flag = (this->field_0x104 != 0) ? 1 : 0;
    typedef void (__thiscall *Fn)(void*, int);
    Fn fn = *(Fn*)(*p);
    fn(p, flag);
}
