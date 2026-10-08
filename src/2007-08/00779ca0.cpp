// roc 2007-08 00779ca0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779ca0
//
// 00779ca0  b9d01f8c00           mov ecx, 0x8c1fd0
// 00779ca5  e9960adeff           jmp 0x55a740
// auto-matched from its assembly shape

struct T_func_00779ca0 { void m(); };
extern T_func_00779ca0 G1_func_00779ca0;
void func_00779ca0()
{
    G1_func_00779ca0.m();
}
