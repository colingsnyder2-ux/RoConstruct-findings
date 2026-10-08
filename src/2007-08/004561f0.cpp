// from server: 52% by colin
// roc 2007-08 004561f0  unit: CRobloxView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004561f0
//
// 004561f0  53                   push ebx
// 004561f1  8bc1                 mov eax, ecx
// 004561f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004561f7  8b11                 mov edx, dword ptr [ecx]
// 004561f9  33db                 xor ebx, ebx
// 004561fb  399898010000         cmp dword ptr [eax + 0x198], ebx
// 00456201  8b4204               mov eax, dword ptr [edx + 4]
// 00456204  0f95c3               setne bl
// 00456207  53                   push ebx
// 00456208  ffd0                 call eax
// 0045620a  5b                   pop ebx
// 0045620b  c20400               ret 4

struct CRobloxView {
    char pad[0x198];
    int field_198;
    void method(int);
};

void CRobloxView::method(int arg) {
    int flag = (field_198 != 0) ? 1 : 0;
    void (__thiscall *fn)(void*, int) = *(void (__thiscall **)(void*, int))arg;
    fn((void*)arg, flag);
}
