// from server: 100% by king_originala
// roc 2008-06 0064db30  unit: RBX::SimJobStage  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064db30
//
// 0064db30  8b442404             mov eax, dword ptr [esp + 4]
// 0064db34  8b09                 mov ecx, dword ptr [ecx]
// 0064db36  50                   push eax
// 0064db37  51                   push ecx
// 0064db38  e843a81500           call 0x7a8380
// 0064db3d  c20400               ret 4

extern "C" int __stdcall helper(void *, int);

struct S {
    void *state;
    int f(int arg);
};

int S::f(int arg) {
    return helper(state, arg);
}
