// from server: 70% by colin
// roc 2008-06 00645850  unit: RBX::Primitive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645850
//
// 00645850  6a07                 push 7
// 00645852  e889ffffff           call 0x6457e0
// 00645857  c3                   ret 

struct S_func_00645850 {
    void f();
};

extern "C" __declspec(dllimport) void __stdcall callFunction(int param);

void S_func_00645850::f() {
    callFunction(7);
}
