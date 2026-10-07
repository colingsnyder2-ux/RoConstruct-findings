// roc 2008-06 00801480  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801480
//
// 00801480  b9c8da9700           mov ecx, 0x97dac8
// 00801485  ff25a44c8000         jmp dword ptr [0x804ca4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00801480 { void m(); };
extern T_func_00801480 G1_func_00801480;
void func_00801480()
{
    G1_func_00801480.m();
}
