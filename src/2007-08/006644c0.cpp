// from server: 90% by colin
// roc 2007-08 006644c0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006644c0
//
// 006644c0  56                   push esi
// 006644c1  8bf1                 mov esi, ecx
// 006644c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006644c7  85c9                 test ecx, ecx
// 006644c9  7415                 je 0x6644e0
// 006644cb  8b01                 mov eax, dword ptr [ecx]
// 006644cd  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006644d0  ffd2                 call edx
// 006644d2  83f8ff               cmp eax, -1
// 006644d5  7409                 je 0x6644e0
// 006644d7  50                   push eax
// 006644d8  50                   push eax
// 006644d9  8bce                 mov ecx, esi
// 006644db  e880feffff           call 0x664360
// 006644e0  5e                   pop esi
// 006644e1  c20400               ret 4

struct VCXTPReportRows_CXTPHeapObjectT {
    void sub_664360(int);
    void f(int*);
};

void VCXTPReportRows_CXTPHeapObjectT::f(int* p) {
    if (p) {
        int v = (*(int (__thiscall **)(int*))(*(int*)p + 0x6c))(p);
        if (v != -1) {
            sub_664360(v);
        }
    }
}
