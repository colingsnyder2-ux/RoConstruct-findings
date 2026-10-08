// from server: 100% by colin
// roc 2007-03 006dd740  unit: seg_006d0000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dd740
//
// 006dd740  6aff                 push -1
// 006dd742  ff15b0ed7700         call dword ptr [0x77edb0]
// 006dd748  c3                   ret 

struct S {
    void f();
};

extern "C" __declspec(dllimport) void __stdcall MessageBeep(unsigned int);

void S::f() {
    MessageBeep(0xFFFFFFFF);
}
