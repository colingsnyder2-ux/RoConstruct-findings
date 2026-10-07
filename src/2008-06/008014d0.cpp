// roc 2008-06 008014d0  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008014d0
//
// 008014d0  b95cda9700           mov ecx, 0x97da5c
// 008014d5  ff25704e8000         jmp dword ptr [0x804e70]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_008014d0 { void m(); };
extern T_func_008014d0 G1_func_008014d0;
void func_008014d0()
{
    G1_func_008014d0.m();
}
