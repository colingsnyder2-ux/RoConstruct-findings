// from server: 100% by tester
// roc 2011-06 0046f7b0  unit: VCWorkspace::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046f7b0
//
// 0046f7b0  8b442404             mov eax, dword ptr [esp + 4]
// 0046f7b4  ff401c               inc dword ptr [eax + 0x1c]
// 0046f7b7  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0046f7ba  c20400               ret 4

struct S {
    int f(int* p);
};

int S::f(int* p) {
    ++*(int*)((char*)p + 0x1c);
    return *(int*)((char*)p + 0x1c);
}