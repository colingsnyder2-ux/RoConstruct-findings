// roc 2009-06 00895690  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895690
//
// 00895690  b9e8dda300           mov ecx, 0xa3dde8
// 00895695  e966c5dbff           jmp 0x651c00
// auto-matched from its assembly shape

struct T_func_00895690 { void m(); };
extern T_func_00895690 G1_func_00895690;
void func_00895690()
{
    G1_func_00895690.m();
}
