// from server: 61% by colinlaptop
// roc 2007-03 00764130  unit: seg_00760000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00764130
//
// 00764130  8600                 xchg byte ptr [eax], al
// 00764132  e969adebff           jmp 0x61eea0

extern "C" __declspec(dllimport) void _imp__some_function();

struct S {
    char pad0[372];
    int m_x;
    void f();
};

void S::f() {
    char temp = reinterpret_cast<char&>(m_x);
    reinterpret_cast<char&>(m_x) = temp;
    _imp__some_function();
}
