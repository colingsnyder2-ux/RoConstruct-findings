// from server: 100% by tester
// roc 2008-06 00459250  unit: CRobloxView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00459250
//
// 00459250  53                   push ebx
// 00459251  8bc1                 mov eax, ecx
// 00459253  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00459257  8b11                 mov edx, dword ptr [ecx]
// 00459259  33db                 xor ebx, ebx
// 0045925b  3998d8010000         cmp dword ptr [eax + 0x1d8], ebx
// 00459261  8b4204               mov eax, dword ptr [edx + 4]
// 00459264  0f95c3               setne bl
// 00459267  53                   push ebx
// 00459268  ffd0                 call eax
// 0045926a  5b                   pop ebx
// 0045926b  c20400               ret 4

struct CRobloxView {
    char pad[0x1d8];
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