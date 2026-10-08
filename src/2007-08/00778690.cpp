// roc 2007-08 00778690  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778690
//
// 00778690  b9b0e48b00           mov ecx, 0x8be4b0
// 00778695  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00778690 { void m(); };
extern T_func_00778690 G1_func_00778690;
void func_00778690()
{
    G1_func_00778690.m();
}
