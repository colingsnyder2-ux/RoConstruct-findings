// from server: 100% by tester
// roc 2008-06 0042ae10  unit: EventHandler  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ae10
//
// 0042ae10  8b442404             mov eax, dword ptr [esp + 4]
// 0042ae14  ff4028               inc dword ptr [eax + 0x28]
// 0042ae17  8b4028               mov eax, dword ptr [eax + 0x28]
// 0042ae1a  c20400               ret 4

struct S {
    int f(int* p);
};

int S::f(int* p) {
    ++*(int*)((char*)p + 0x28);
    return *(int*)((char*)p + 0x28);
}