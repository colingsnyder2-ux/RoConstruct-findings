// roc 2007-08 007792a0  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007792a0
//
// 007792a0  b9f4088c00           mov ecx, 0x8c08f4
// 007792a5  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007792a0 { void m(); };
extern T_func_007792a0 G1_func_007792a0;
void func_007792a0()
{
    G1_func_007792a0.m();
}
