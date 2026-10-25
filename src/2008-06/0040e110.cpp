// from server: 100% by tester
// roc 2008-06 0040e110  unit: CBrowserView  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e110
//
// 0040e110  53                   push ebx
// 0040e111  8bc1                 mov eax, ecx
// 0040e113  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e117  8b11                 mov edx, dword ptr [ecx]
// 0040e119  33db                 xor ebx, ebx
// 0040e11b  399818010000         cmp dword ptr [eax + 0x118], ebx
// 0040e121  8b02                 mov eax, dword ptr [edx]
// 0040e123  0f95c3               setne bl
// 0040e126  53                   push ebx
// 0040e127  ffd0                 call eax
// 0040e129  5b                   pop ebx
// 0040e12a  c20400               ret 4

struct CBrowserView {
    char pad[0x118];
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
