// roc 2008-06 00801800  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801800
//
// 00801800  b9d0e69700           mov ecx, 0x97e6d0
// 00801805  e97674eeff           jmp 0x6e8c80
// auto-matched from its assembly shape

struct T_func_00801800 { void m(); };
extern T_func_00801800 G1_func_00801800;
void func_00801800()
{
    G1_func_00801800.m();
}
