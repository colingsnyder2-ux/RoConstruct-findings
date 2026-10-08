// from server: 42% by colin
// roc 2007-08 00573740  unit: RBX::NullController  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573740
//
// 00573740  d9ee                 fldz 
// 00573742  c20400               ret 4

struct RBX_NullController {
    int f();
};

extern "C" __declspec(dllimport) void __cdecl fldz();

int RBX_NullController::f() {
    fldz();
    return 0;
}
