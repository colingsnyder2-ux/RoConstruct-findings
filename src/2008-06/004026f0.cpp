// from server: 100% by tester
// roc 2008-06 004026f0  unit: VCWorkspace::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004026f0
//
// 004026f0  8b442404             mov eax, dword ptr [esp + 4]
// 004026f4  ff4020               inc dword ptr [eax + 0x20]
// 004026f7  8b4020               mov eax, dword ptr [eax + 0x20]
// 004026fa  c20400               ret 4

struct S {
    int f(int* p);
};

int S::f(int* p) {
    ++*(int*)((char*)p + 0x20);
    return *(int*)((char*)p + 0x20);
}