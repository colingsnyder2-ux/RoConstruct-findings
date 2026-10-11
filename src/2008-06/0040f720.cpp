// from server: 100% by tester
// roc 2008-06 0040f720  unit: VCApp::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f720
//
// 0040f720  8b442404             mov eax, dword ptr [esp + 4]
// 0040f724  ff4018               inc dword ptr [eax + 0x18]
// 0040f727  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040f72a  c20400               ret 4

struct S {
    int f(int* p);
};

int S::f(int* p) {
    ++*(int*)((char*)p + 0x18);
    return *(int*)((char*)p + 0x18);
}
