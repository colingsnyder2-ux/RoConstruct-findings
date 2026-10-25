// from server: 100% by tester
// roc 2011-06 004825d0  unit: HelpCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004825d0
//
// 004825d0  53                   push ebx
// 004825d1  8bc1                 mov eax, ecx
// 004825d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004825d7  8b11                 mov edx, dword ptr [ecx]
// 004825d9  33db                 xor ebx, ebx
// 004825db  3998c4010000         cmp dword ptr [eax + 0x1c4], ebx
// 004825e1  8b4204               mov eax, dword ptr [edx + 4]
// 004825e4  0f95c3               setne bl
// 004825e7  53                   push ebx
// 004825e8  ffd0                 call eax
// 004825ea  5b                   pop ebx
// 004825eb  c20400               ret 4

struct CRobloxView {
    char pad[0x1c4];
    int field_198;
    void method(int);
};

void CRobloxView::method(int arg) {
    int* p = (int*)arg;
    int* vtbl = (int*)*p;
    int flag = (this->field_198 != 0) ? 1 : 0;
    typedef void (__thiscall *Fn)(void*, int);
    Fn fn = (Fn)vtbl[1];
    fn((void*)arg, flag);
}